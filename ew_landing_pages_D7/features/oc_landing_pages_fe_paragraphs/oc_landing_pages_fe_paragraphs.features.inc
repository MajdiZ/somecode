<?php
/**
 * @file
 * ew_landing_pages_fe_paragraphs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ew_landing_pages_fe_paragraphs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function ew_landing_pages_fe_paragraphs_paragraphs_info() {
  $items = array(
    'paragraphs_accordion' => array(
      'name' => 'Accordion',
      'bundle' => 'paragraphs_accordion',
      'locked' => '1',
    ),
    'paragraphs_accordion_item' => array(
      'name' => 'Accordion item',
      'bundle' => 'paragraphs_accordion_item',
      'locked' => '1',
    ),
    'paragraphs_elements' => array(
      'name' => 'Elements',
      'bundle' => 'paragraphs_elements',
      'locked' => '1',
    ),
    'paragraphs_grid' => array(
      'name' => 'Grid',
      'bundle' => 'paragraphs_grid',
      'locked' => '1',
    ),
    'paragraphs_header' => array(
      'name' => 'Header',
      'bundle' => 'paragraphs_header',
      'locked' => '1',
    ),
    'paragraphs_image' => array(
      'name' => 'Image',
      'bundle' => 'paragraphs_image',
      'locked' => '1',
    ),
    'paragraphs_image_cover' => array(
      'name' => 'Image cover',
      'bundle' => 'paragraphs_image_cover',
      'locked' => '1',
    ),
    'paragraphs_slide_item' => array(
      'name' => 'Slide item',
      'bundle' => 'paragraphs_slide_item',
      'locked' => '1',
    ),
    'paragraphs_slideshow' => array(
      'name' => 'Slideshow',
      'bundle' => 'paragraphs_slideshow',
      'locked' => '1',
    ),
    'paragraphs_style' => array(
      'name' => 'Style',
      'bundle' => 'paragraphs_style',
      'locked' => '1',
    ),
    'paragraphs_table' => array(
      'name' => 'Table',
      'bundle' => 'paragraphs_table',
      'locked' => '1',
    ),
    'paragraphs_tabs' => array(
      'name' => 'Tabs',
      'bundle' => 'paragraphs_tabs',
      'locked' => '1',
    ),
    'paragraphs_tabs_item' => array(
      'name' => 'Tabs item',
      'bundle' => 'paragraphs_tabs_item',
      'locked' => '1',
    ),
    'paragraphs_text' => array(
      'name' => 'Text',
      'bundle' => 'paragraphs_text',
      'locked' => '1',
    ),
    'paragraphs_view' => array(
      'name' => 'View',
      'bundle' => 'paragraphs_view',
      'locked' => '1',
    ),
  );
  return $items;
}
