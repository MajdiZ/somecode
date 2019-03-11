<?php

namespace Drupal\ew_landing_pages\Hooks;

use Drupal\ew_core\Services\ImageService;
use Drupal\ew_landing_pages\Constants\ConstantsLandingPages;

/**
 * Class PreprocessLandingPages.
 *
 * @package Drupal\ew_landing_pages\Hooks
 */
class PreprocessLandingPages {

  /**
   * Preprocess for Entity.
   */
  public static function getHookPreprocessEntity(&$variables) {
    if ($variables['entity_type'] == 'paragraphs_item') {

      // Load paragraph using entity wrapper and pass it.
      $paragraphsItemWrapper = entity_metadata_wrapper('paragraphs_item', $variables['paragraphs_item']);
      self::paragraphsItemGeneralPre($variables, $paragraphsItemWrapper);

      switch ($variables['paragraphs_item']->bundle) {
        case ConstantsLandingPages::ENTITY_PARAGRAPHS_ITEM_TEXT:
          self::paragraphsItemText($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_ITEM_SLIDESHOW:
          self::paragraphsItemSlideshow($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_ITEM_SLIDE_ITEM:
          self::paragraphsItemSlideItem($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_VIEW:
          self::paragraphsItemView($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_ACCORDION:
          self::paragraphsItemAccordion($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_ACCORDION_ITEM:
          self::paragraphsItemAccordionItem($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_GRID:
          self::paragraphsItemGrid($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_IMAGE:
          self::paragraphsItemImage($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_TABS:
          self::paragraphsItemTabs($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_TABLE:
          self::paragraphsItemTable($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_HEADER:
          self::paragraphsItemHeader($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_IMAGE_COVER:
          self::paragraphsItemImageCover($variables, $paragraphsItemWrapper);
          break;

        case ConstantsLandingPages::ENTITY_PARAGRAPHS_ELEMENTS:
          self::paragraphsItemElements($variables, $paragraphsItemWrapper);
          break;
      }

      self::paragraphsItemGeneralPost($variables, $paragraphsItemWrapper);
    }
  }

  /**
   * Preprocess Page.
   */
  public static function getHookPreprocessPage(&$variables) {
    if (!empty($variables['node']) && $variables['node']->type == ConstantsLandingPages::NODE_TYPE_LANDING_PAGE && $variables['node']->ew_landing_page_full_width) {
      $variables['ew_full_width'] = $variables['node']->ew_landing_page_full_width[LANGUAGE_NONE][0]['value'];
    }
  }

  /**
   * Preprocess for all paragraphs items.
   */
  private static function paragraphsItemGeneralPre(&$variables, $paragraphsItemWrapper) {
    $variables['css_style'] = array();
    $variables['wrapper_css_classes'] = array();

    // Load infoWrapper for paragraphs item.
    $paragraphsInfoWrapper = $paragraphsItemWrapper->getPropertyInfo();

    // Use bundle name as class name.
    $paragraphNameDash = str_replace('_', '-', $paragraphsItemWrapper->bundle->value());
    // Set the base classes and ID for the wrapper.
    $variables['wrapper_css_classes'][] = 'paragraph-wrapper';
    $variables['wrapper_css_classes'][] = $paragraphNameDash;
    $variables['wrapper_paragraph_id'] = $paragraphNameDash . '-' . $paragraphsItemWrapper->item_id->value();

    /*
     * Manage the full row option.
     * Host entity can be landing pages or another paragraph.
     * We set default value for full row and root Paragraphs in order not to
     * break in case some fields missing.
     */
    $rootParagraphs = FALSE;
    $fullRowParagraphs = FALSE;
    if (!empty($paragraphsInfoWrapper['field_par_full_row'])) {
      $fullRowParagraphs = $paragraphsItemWrapper->field_par_full_row->value();
    }

    $hostEntity = $variables['paragraphs_item']->hostEntity();

    if (!empty($hostEntity->type)) {
      $rootParagraphs = TRUE;
    }


    if ($rootParagraphs) {
      if ($fullRowParagraphs) {
        $variables['css_classes'][] = 'container-fluid';
      }
      else {
        $variables['css_classes'][] = 'container';
      }
    }
    else {
      if ($fullRowParagraphs) {
        $variables['css_classes'][] = 'sub-paragraphs sub-container-fluid';
      }
      else {
        $variables['css_classes'][] = 'sub-paragraphs sub-container';
      }
    }

    // Prepare paragraph style.
    if (!empty($paragraphsInfoWrapper['field_par_style_ref'])) {
      $styleParagraphs = $paragraphsItemWrapper->field_par_style_ref->value();
      if (!empty($styleParagraphs)) {
        $styleParagraphsWrapper = entity_metadata_wrapper('paragraphs_item', $styleParagraphs);
        // Add inline style for margin and padding.
        $styleValueNames = array('top', 'right', 'bottom', 'left');
        $marginValues = array();
        $paddingValues = array();
        foreach ($styleValueNames as $key => $valueName) {
          $marginField = 'field_par_margin_' . $valueName;
          $paddingField = 'field_par_padding_' . $valueName;
          $marginValues[] = $styleParagraphsWrapper->{$marginField}->value() . 'px';
          $paddingValues[] = $styleParagraphsWrapper->{$paddingField}->value() . 'px';
        }
        $variables['wrapper_css_style'][] = 'margin:' . implode(' ', $marginValues);
        $variables['wrapper_css_style'][] = 'padding:' . implode(' ', $paddingValues);

        // Add background color.
        if ($backgroundColor = $styleParagraphsWrapper->field_par_background_color->value()['rgb']) {
          $variables['wrapper_css_style'][] = 'background-color:' . $backgroundColor;
        }

      }


    }

    // Set the background color since its used in many paragraphs.
    $variables['background_color'] = NULL;
    if (!empty($paragraphsInfoWrapper['field_par_background_color'])) {
      if ($backgroundColor = $paragraphsItemWrapper->field_par_background_color->value()['rgb']) {
        $variables['wrapper_css_style'][] = 'background-color:' . $backgroundColor;
      }
    }

    // Set field_par_height.
    if (!empty($paragraphsInfoWrapper['field_par_height'])) {
      if ($paragraphsItemWrapper->field_par_height->value() >= 0) {
        $height = $paragraphsItemWrapper->field_par_height->value() . 'px';
        $variables['wrapper_css_style'][] = 'height: ' . $height;
      }
    }

    // Set margin.
    if (!empty($paragraphsInfoWrapper['field_par_vertical_margin'])) {
      $margin = $paragraphsItemWrapper->field_par_vertical_margin->value() . 'px';
      $variables['wrapper_css_style'][] = 'margin-top: ' . $margin;
      $variables['wrapper_css_style'][] = 'margin-bottom: ' . $margin;
    }

    // Override padding.
    if (!empty($paragraphsInfoWrapper['field_par_vertical_padding'])) {
      $padding = $paragraphsItemWrapper->field_par_vertical_padding->value() . 'px';
      $variables['wrapper_css_style'][] = 'padding-top: ' . $padding;
      $variables['wrapper_css_style'][] = 'padding-bottom: ' . $padding;
    }

  }

  /**
   * Preprocess for all paragraphs items.
   */
  private static function paragraphsItemGeneralPost(&$variables, $paragraphsItemWrapper) {
    // Merge css styles and classes.
    $paragraph_attributes = array();
    $paragraph_wrapper_attributes = array();

    if (!empty($variables['css_classes'])) {
      $paragraph_attributes['class'] = $variables['css_classes'];
    }
    if (!empty($variables['css_style'])) {
      $paragraph_attributes['style'] = $variables['css_style'];
    }
    if (!empty($variables['paragraph_id'])) {
      $paragraph_attributes['id'] = $variables['paragraph_id'];
    }

    // Paragraph wrapper attributes.
    if (!empty($variables['wrapper_paragraph_id'])) {
      $paragraph_wrapper_attributes['id'] = $variables['wrapper_paragraph_id'];
    }

    $paragraph_wrapper_attributes['class'] = $variables['wrapper_css_classes'];

    if (!empty($variables['wrapper_css_style'])) {
      $paragraph_wrapper_attributes['style'] = implode(';', $variables['wrapper_css_style']);
    }

    $variables['paragraph_attributes'] = drupal_attributes($paragraph_attributes);
    $variables['paragraph_wrapper_attributes'] = drupal_attributes($paragraph_wrapper_attributes);

  }

  /**
   * Preprocess for all paragraphs items of type text.
   */
  private static function paragraphsItemText(&$variables, $paragraphsItemWrapper) {
    // Theme body text.
    $text = $paragraphsItemWrapper->field_par_text->value->value(array('decode' => FALSE));
    $variables['text'] = theme('html_tag', array(
      'element' => array(
        '#tag' => 'div',
        '#value' => $text,
        '#attributes' => array(
          'class' => 'text-' . $paragraphsItemWrapper->field_par_text_align->value(),
        ),
      ),
    ));
  }

  /**
   * Preprocess for all paragraphs items of type slideshow.
   */
  private static function paragraphsItemSlideshow(&$variables, $paragraphsItemWrapper) {
    // Loading libraries.
    libraries_load('animate.css');
    libraries_load('OwlCarousel');
    // Get slides.
    $paragraphs = $paragraphsItemWrapper->field_par_item_ref->value();

    $slides = '';
    foreach ($paragraphs as $index => $paragraph) {
      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $slides .= drupal_render($paragraphView);
    }

    $variables['slides'] = $slides;
  }

  /**
   * Preprocess for all paragraphs items of type slide item.
   */
  private static function paragraphsItemSlideItem(&$variables, $paragraphsItemWrapper) {
    // Get the header.
    $variables['header'] = $paragraphsItemWrapper->field_par_item_single_ref->value();
    if ($variables['header']) {
      $paragraph = $paragraphsItemWrapper->field_par_item_single_ref->value();

      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $variables['header'] = drupal_render($paragraphView);


    }

    // Get image style from the host paragraph.
    $hostSlideShow = $variables['paragraphs_item']->hostEntity();
    $imageStyle = $hostSlideShow->field_par_image_style[LANGUAGE_NONE][0]['image_style'];
    // Prepare images urls with image style.
    $variables['slide_image_url'] = ImageService::getImageUrl($paragraphsItemWrapper->field_par_image->value()['uri'], $imageStyle);
  }

  /**
   * Preprocess for all paragraphs items.
   */
  private static function paragraphsItemView(&$variables, $paragraphsItemWrapper) {
    $viewName = explode('|', $variables['field_par_view_ref'][0]['vname']);

    $view = views_embed_view($viewName[0], $viewName[1], $variables['field_par_view_ref'][0]['vargs']);
    $variables['view'] = render($view);
  }

  /**
   * Preprocess for all paragraphs items of type Accordion.
   */
  private static function paragraphsItemAccordion(&$variables, $paragraphsItemWrapper) {
    $variables['accordion_id'] = 'accordion-' . $paragraphsItemWrapper->item_id->value();
    // Get sub paragraphs (Accordion items).
    $paragraphs = $paragraphsItemWrapper->field_par_item_ref->value();

    $items = '';
    foreach ($paragraphs as $index => $paragraph) {
      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $items .= drupal_render($paragraphView);
    }

    $variables['items'] = $items;
  }

  /**
   * Preprocess for all paragraphs items of type slide item.
   */
  private static function paragraphsItemAccordionItem(&$variables, $paragraphsItemWrapper) {
    $hostEntity = $variables['paragraphs_item']->hostEntity();
    $variables['accordion_id'] = 'accordion-' . $hostEntity->item_id;
    $variables['content'] = NULL;

    // Load variables.
    $variables['active'] = $paragraphsItemWrapper->field_par_config_active->value();
    $variables['item_id'] = $paragraphsItemWrapper->item_id->value();
    $variables['header'] = $paragraphsItemWrapper->field_par_header->value();

    $paragraph = $paragraphsItemWrapper->field_par_item_single_ref->value();

    // Prepare paragraphs.
    $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
    $variables['content'] = drupal_render($paragraphView);

  }

  /**
   * Preprocess for all paragraphs items of type Accordion.
   */
  private static function paragraphsItemGrid(&$variables, $paragraphsItemWrapper) {
    // Get all grid items.
    $paragraphs = $paragraphsItemWrapper->field_par_item_ref->value();

    $items = '';

    $variables['grid_total_items'] = count($paragraphs);
    $gridLg = $paragraphsItemWrapper->field_par_item_per_row_lg->value();
    $gridMd = $paragraphsItemWrapper->field_par_item_per_row_md->value();
    $gridSm = $paragraphsItemWrapper->field_par_item_per_row_sm->value();
    $gridXs = $paragraphsItemWrapper->field_par_item_per_row_xs->value();
    $counter = 0;
    foreach ($paragraphs as $index => $paragraph) {
      $counter++;
      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $itemClasses = array();
      $itemClasses[] = 'col-lg-' . 12 / $gridLg;
      $itemClasses[] = 'col-md-' . 12 / $gridMd;
      $itemClasses[] = 'col-sm-' . 12 / $gridSm;
      $itemClasses[] = 'col-xs-' . 12 / $gridXs;

      $items .= theme('html_tag', array(
        'element' => array(
          '#tag' => 'div',
          '#value' => drupal_render($paragraphView),
          '#attributes' => array(
            'class' => $itemClasses,
          ),
        ),
      ));

      $clearFixDivArray = array(
        'element' => array(
          '#tag' => 'div',
          '#value' => '',
        ),
      );

      if ($counter % $gridLg == 0) {
        $clearFixDivArray['element']['#attributes']['class'] = 'clearfix visible-lg-block';
        $items .= theme('html_tag', $clearFixDivArray);
      }

      if ($counter % $gridMd == 0) {
        $clearFixDivArray['element']['#attributes']['class'] = 'clearfix visible-md-block';
        $items .= theme('html_tag', $clearFixDivArray);
      }

      if ($counter % $gridSm == 0) {
        $clearFixDivArray['element']['#attributes']['class'] = 'clearfix visible-sm-block';
        $items .= theme('html_tag', $clearFixDivArray);
      }

      if ($counter % $gridXs == 0) {
        $clearFixDivArray['element']['#attributes']['class'] = 'clearfix visible-xs-block';
        $items .= theme('html_tag', $clearFixDivArray);
      }

    }

    $variables['items'] = $items;

  }

  /**
   * Preprocess for all paragraphs items of type linked image.
   */
  private static function paragraphsItemImage(&$variables, $paragraphsItemWrapper) {
    // Prepare image array.
    $imageField = $paragraphsItemWrapper->field_par_image->value();
    $imageInfo = array(
      'style_name' => $variables['field_par_image_style'][0]['image_style'],
      'path' => $imageField['uri'],
      'attributes' => array(
        'class' => array(
          'img-responsive',
        ),
        'alt' => !empty($imageField['alt']) ? $imageField['alt'] : '',
        'title' => !empty($imageField['title']) ? $imageField['title'] : '',
      ),
    );

    // Check image mask class.
    $imageMask = $paragraphsItemWrapper->field_par_image_mask->value();
    if ($imageMask) {
      $imageInfo['attributes']['class'][] = $imageMask;
    }
    // Add image url to variables.
    $variables['image_url'] = ImageService::getImageUrl($paragraphsItemWrapper->field_par_image->value()['uri'], $variables['field_par_image_style'][0]['image_style']);

    // Theme image.
    $variables['image'] = theme('image_style', $imageInfo);

    // Prepare header.
    $variables['header'] = NULL;
    $header = $paragraphsItemWrapper->field_par_header->value();
    if ($header) {
      // Theme header tag.
      $variables['header'] = theme('html_tag', array(
        'element' => array(
          '#tag' => $paragraphsItemWrapper->field_par_header_tag->value(),
          '#value' => $header,
          '#attributes' => array(
            'class' => 'text-center',
          ),
        ),
      ));
    }

    // Get image url.
    $variables['link_url'] = NULL;
    $variables['link_target'] = '_self';
    $linkField = $paragraphsItemWrapper->field_par_link->value();
    if (!empty($linkField['url'])) {
      $variables['link_url'] = $linkField['url'];
      $variables['link_target'] = $linkField['attributes']['target'];
    }

    $imageUrlTarget = $paragraphsItemWrapper->field_par_link->value();
    if (!empty($imageUrlTarget['attributes']['target'])) {
      $variables['link_url_target'] = $imageUrlTarget['attributes']['target'];
    }

  }

  /**
   * Preprocess for all paragraphs items of type tabs.
   */
  private static function paragraphsItemTabs(&$variables, $paragraphsItemWrapper) {
    $tabsList = '';
    $tabsContent = '';
    $tabsId = $paragraphsItemWrapper->item_id->value();

    $paragraphs = $paragraphsItemWrapper->field_par_item_ref->value();

    foreach ($paragraphs as $index => $paragraph) {
      $paragraphsItemSubWrapper = entity_metadata_wrapper('paragraphs_item', $paragraph);



      // Prepare tabs links.
      $tabId = $tabsId . '-' . $paragraphsItemSubWrapper->item_id->value();
      $tabLink = theme('html_tag', array(
        'element' => array(
          '#tag' => 'a',
          '#value' => $paragraphsItemSubWrapper->field_par_header->value(),
          '#attributes' => array(
            'href' => '#' . $tabId,
            'aria-controls' => $tabId,
            'role' => 'tab',
            'data-toggle' => 'tab',
          ),
        ),
      ));

      $tabsList .= theme('html_tag', array(
        'element' => array(
          '#tag' => 'li',
          '#value' => $tabLink,
          '#attributes' => array(
            'role' => 'presentation',
            'class' => ($index == 0) ? 'active' : '',
          ),
        ),
      ));

      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraphsItemSubWrapper->field_par_item_single_ref->value()), 'full');

      $tabsContent .= theme('html_tag', array(
        'element' => array(
          '#tag' => 'div',
          '#value' => drupal_render($paragraphView),
          '#attributes' => array(
            'role' => 'tabpanel',
            'class' => ($index == 0) ? 'tab-pane active' : 'tab-pane',
            'id' => $tabId,
          ),
        ),
      ));
    }

    $variables['tabs_list'] = $tabsList;
    $variables['tabs_content'] = $tabsContent;

  }

  /**
   * Preprocess for all paragraphs items of type table.
   */
  private static function paragraphsItemTable(&$variables, $paragraphsItemWrapper) {
    /*
     * Table field module render the table in custom way without consider core
     * table theme function.
     * In order to make the result using the core we need to call the theme
     * function by our self and prevent the module to output anything by
     * overriding the template file.
     */

    $templateVariables = array();
    $tableField = $paragraphsItemWrapper->field_par_table->value();

    if (!empty($tableField['attributes'])) {
      $templateVariables['attributes'] = $tableField['attributes'];
    }

    $tableField = $tableField['tabledata']['tabledata'];
    // Prepare the data to be passed to theme hook.
    foreach ($tableField as $index => $row) {
      // Remove weight value.
      unset($tableField[$index]['weight']);
    }
    // Get the table header.
    $templateVariables['header'] = array_shift($tableField);
    $templateVariables['rows'] = $tableField;
    // Theme table.
    $variables['table'] = theme('table', $templateVariables);
  }

  /**
   * Preprocess for all paragraphs items of type text.
   */
  private static function paragraphsItemHeader(&$variables, $paragraphsItemWrapper) {

    // Theme header.
    $variables['header'] = theme('html_tag', array(
      'element' => array(
        '#tag' => $paragraphsItemWrapper->field_par_header_tag->value(),
        '#value' => $paragraphsItemWrapper->field_par_header->value(),
        '#attributes' => array(
          'class' => 'text-' . $paragraphsItemWrapper->field_par_header_align->value() ,
        ),
      ),
    ));

    // Theme sub header.
    $hasSubHeader = $paragraphsItemWrapper->field_par_sub_header->value();
    $variables['has_sub_header'] = isset($hasSubHeader) ? TRUE : FALSE;
    if ($variables['has_sub_header']) {
      // Theme header tag.
      $variables['sub_header'] = theme('html_tag', array(
        'element' => array(
          '#tag' => $paragraphsItemWrapper->field_par_sub_header_tag->value(),
          '#value' => $paragraphsItemWrapper->field_par_sub_header->value(),
        ),
      ));
    }

    // Link headers.
    if (!empty($paragraphsItemWrapper->field_par_link->value()['url'])) {
      $variables['header'] = theme('html_tag', array(
        'element' => array(
          '#tag' => 'a',
          '#value' => $variables['header'],
          '#attributes' => array(
            'href' => $paragraphsItemWrapper->field_par_link->value()['url'],
            'target' => $paragraphsItemWrapper->field_par_link->value()['attributes']['target'],
          ),
        ),
      ));
      // Add link to sub header if it's available.
      if ($variables['has_sub_header']) {
        $variables['sub_header'] = theme('html_tag', array(
          'element' => array(
            '#tag' => 'a',
            '#value' => $variables['sub_header'],
            '#attributes' => array(
              'href' => $paragraphsItemWrapper->field_par_link->value()['url'],
              'target' => $paragraphsItemWrapper->field_par_link->value()['attributes']['target'],
            ),
          ),
        ));
      }
    }

    // Theme CTA.
    $ctaInfo = $paragraphsItemWrapper->field_par_call_to_action->value();
    $variables['has_cta'] = isset($ctaInfo['url']) ? TRUE : FALSE;
    if ($variables['has_cta']) {
      $variables['cta'] = theme('html_tag', array(
        'element' => array(
          '#tag' => 'a',
          '#value' => $ctaInfo['title'],
          '#attributes' => array(
            'href' => $ctaInfo['url'],
            'target' => !empty($ctaInfo['attributes']['target']) ? $ctaInfo['attributes']['target'] : '_self',
            'class' => array(
              'btn',
              'btn-default',
            ),
          ),
        ),
      ));
    }

    // All elements should have the same align, we add the class to wrapper.
    $variables['wrapper_css_classes'][] = 'text-' . $paragraphsItemWrapper->field_par_header_align->value();
  }

  /**
   * Preprocess for all paragraphs items of type slide item.
   */
  private static function paragraphsItemImageCover(&$variables, $paragraphsItemWrapper) {
    libraries_load('jquery-backstretch');

    // Prepare paragraphs over image.
    $variables['over_image'] = '';
    $paragraphs = $paragraphsItemWrapper->field_par_item_ref->value();

    foreach ($paragraphs as $index => $paragraph) {
      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $variables['over_image'] .= drupal_render($paragraphView);
    }

    // Get image style from the host paragraph.
    $imageStyle = $variables['field_par_image_style'][0]['image_style'];
    // Prepare images urls with image style.
    $variables['image_url'] = ImageService::getImageUrl($paragraphsItemWrapper->field_par_image->value()['uri'], $imageStyle);
    // Add image as background.
    $variables['wrapper_css_style'][] = 'background-image: url("' . $variables['image_url'] . '") ;';

  }

  /**
   * Preprocess for all paragraphs items of type elements.
   */
  private static function paragraphsItemElements(&$variables, $paragraphsItemWrapper) {
    // Get left side.
    $leftParagraphs = $paragraphsItemWrapper->field_par_left_elements_ref->value();

    $leftSide = '';
    foreach ($leftParagraphs as $index => $paragraph) {
      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $leftSide .= drupal_render($paragraphView);
    }
    // Get right side.
    $rightParagraphs = $paragraphsItemWrapper->field_par_right_elements_ref->value();

    $rightSide = '';
    foreach ($rightParagraphs as $index => $paragraph) {
      // Prepare paragraphs.
      $paragraphView = entity_view('paragraphs_item', array($paragraph), 'full');
      $rightSide .= drupal_render($paragraphView);
    }

    $variables['left_side'] = $leftSide;
    $variables['right_side'] = $rightSide;

    $split = explode('-', $paragraphsItemWrapper->field_par_grid_split->value());
    $variables['left_split'] = $split[0];
    $variables['right_split'] = $split[1];

  }

}
