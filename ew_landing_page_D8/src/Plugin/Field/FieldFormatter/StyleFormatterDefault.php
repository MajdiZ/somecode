<?php

namespace Drupal\ew_landing_page\Plugin\Field\FieldFormatter;

use Drupal\Core\Field\FieldItemListInterface;
use Drupal\Core\Field\FormatterBase;

/**
 * Style formatter.
 *
 * @FieldFormatter(
 *   id = "style_formatter_default",
 *   label = @Translation("Style default formatter"),
 *   field_types = {
 *     "style"
 *   }
 * )
 */
class StyleFormatterDefault extends FormatterBase {

  /**
   * {@inheritdoc}
   */
  public function settingsSummary() {
    $summary = [];
    $summary[] = $this->t('Style formatter');
    return $summary;
  }

  /**
   * {@inheritdoc}
   */
  public function viewElements(FieldItemListInterface $items, $langcode) {
    $element = [];

    foreach ($items as $delta => $item) {
      // Render each element as markup.
      $element[$delta] = ['#markup' => $item->value];
    }

    return $element;
  }


}