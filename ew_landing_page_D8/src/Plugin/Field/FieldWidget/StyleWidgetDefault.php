<?php

namespace Drupal\ew_landing_page\Plugin\Field\FieldWidget;

use Drupal\Core\Field\FieldItemListInterface;
use Drupal\Core\Field\WidgetBase;
use Drupal\Core\Field\WidgetInterface;
use Drupal\Core\Form\FormStateInterface;

/**
 * Style widget.
 *
 * @FieldWidget(
 *   id = "style_widget_default",
 *   label = @Translation("Style widget default"),
 *   field_types = {
 *     "style",
 *   }
 * )
 */
class StyleWidgetDefault extends WidgetBase implements WidgetInterface {

  /**
   * {@inheritdoc}
   */
  public function formElement(FieldItemListInterface $items, $delta, array $element, array &$form, FormStateInterface $form_state) {
   // dpm(func_get_args());
    $value = isset($items[$delta]->value) ? $items[$delta]->value : '';
    $element += [
      '#type' => 'textfield',
      '#default_value' => $value,
      '#size' => 7,
      '#maxlength' => 7,
      '#element_validate' => [
        [$this, 'validate'],
      ],
    ];

    $values = $items->getValue();


    $tabs['style_options'] = array(
      '#type' => 'vertical_tabs',
      '#default_tab' => 'edit-publication',
      '#parents' => ['style_options'],
    );

    $tabs['padding'] = array(
      '#type' => 'details',
      '#title' => $this->t('Padding'),
      '#group' => 'style_options',
      'padding' => $this->getPaddingMarginFormElement($values, $delta, 'padding'),
    );

    $tabs['margin'] = array(
      '#type' => 'details',
      '#title' => $this->t('Margin'),
      '#group' => 'style_options',
      'margin' => $this->getPaddingMarginFormElement($values, $delta, 'margin'),
    );

    $tabs['background_color'] = array(
      '#type' => 'details',
      '#title' => $this->t('Background color'),
      '#group' => 'style_options',
      'background' => $this->getBackgroundColorFormElement($values, $delta),
    );

    $tabs['background_image'] = array(
      '#type' => 'details',
      '#title' => $this->t('Background image'),
      '#group' => 'style_options',
      'background' => $this->getBackgroundImageFormElement($values, $delta),
    );

    $widgetItems = [
      'tabs' => $tabs,
    ];

    return $widgetItems;
  }

  private function getPaddingMarginFormElement($values, $delta, $name) {

    $valueNames = [
      $name . '_top',
      $name . '_right',
      $name . '_bottom',
      $name . '_left',
    ];

    $unitOptions = [
      'px' => 'px',
      'em' => 'em',
      'percentage' => '%',
    ];

    $table = [
      '#type' => 'table',
      '#header' => [
        $this->t('Top'),
        $this->t('Right'),
        $this->t('Bottom'),
        $this->t('left'),
        $this->t('Unit'),
      ],
    ];


    foreach ($values[$delta] as $valueName => $value) {
      if (in_array($valueName, $valueNames)) {
        $table[0][$valueName] = [
          '#type' => 'number',
          '#default_value' => $value,
          '#min' => -9999,
          '#max' => 9999,
        ];
      }
    }

    $table[0][$name . '_unit'] = [
      '#type' => 'select',
      '#options' => $unitOptions,
      '#default_value' => 'px',
    ];

    return $table;

  }

  private function getBackgroundColorFormElement($values, $delta) {
    $backgroundColor = [
      '#type' => 'textfield',
      '#suffix' => '<div class="field-style-colorpicker"></div>',
      '#attributes' => ['class' => ['edit-background-color-picker']],
      '#attached' => [
        // Add Farbtastic color picker and javascript file to trigger the
        // colorpicker.
        'library' => [
          'core/jquery.farbtastic',
          'ew_landing_page/colorpicker',
        ],
      ],
    ];

    return $backgroundColor;
  }

  private function getBackgroundImageFormElement($values, $delta) {
    $backgroundImage = [
      '#type' => 'managed_file',
      '#title' => $this->t('Background image'),
      '#upload_location' => 'public://images/',
      '#multiple' => FALSE,
      '#upload_validators' => [
        'file_validate_extensions' => ['png gif jpg jpeg'],
      ],
    ];

    $imageStyle = [
      '#title' => t('Choose an image style'),
      '#type' => 'select',
      '#options' => image_style_options(FALSE),
    ];

    $backgroundImage = [
      'background_image' => $backgroundImage,
      'image_style' => $imageStyle,
    ];


    return $backgroundImage;
  }

}
