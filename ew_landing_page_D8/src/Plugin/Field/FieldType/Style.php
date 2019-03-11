<?php

namespace Drupal\ew_landing_page\Plugin\Field\FieldType;

use Drupal\Core\Field\FieldItemBase;
use Drupal\Core\Field\FieldItemInterface;
use Drupal\Core\Field\FieldStorageDefinitionInterface;
use Drupal\Core\TypedData\DataDefinition;

/**
 * Class Style.
 *
 * @FieldType(
 *   id = "style",
 *   label = @Translation("Style"),
 *   category = "EaglesWeb",
 *   module = "ew_landing_page",
 *   description = @Translation("Css Style field."),
 *   default_formatter = "style_formatter_default",
 *   default_widget = "style_widget_default"
 * )
 *
 * @package Drupal\ew_landing_page\Plugin\Field\FieldType\PaddingCss
 */
class Style extends FieldItemBase implements FieldItemInterface {

  /**
   * {@inheritdoc}
   */
  public static function propertyDefinitions(FieldStorageDefinitionInterface $field_definition) {
    $properties = [
      'padding_top' => DataDefinition::create('integer'),
      'padding_right' => DataDefinition::create('integer'),
      'padding_bottom' => DataDefinition::create('integer'),
      'padding_left' => DataDefinition::create('integer'),
      'margin_top' => DataDefinition::create('integer'),
      'margin_right' => DataDefinition::create('integer'),
      'margin_bottom' => DataDefinition::create('integer'),
      'margin_left' => DataDefinition::create('integer'),
    ];

    return $properties;
  }

  /**
   * {@inheritdoc}
   */
  public static function schema(FieldStorageDefinitionInterface $field_definition) {
    return array(
      'columns' => array(
        'padding_top' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'padding_right' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'padding_bottom' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'padding_left' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'margin_top' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'margin_right' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'margin_bottom' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
        'margin_left' => array(
          'type' => 'int',
          'unsigned' => FALSE,
          'not null' => FALSE,
        ),
      ),
    );
  }

  /**
   * {@inheritdoc}
   */
  public function isEmpty() {
    return $this->isMarginEmpty() && $this->isPaddingEmpty();
  }

  /**
   * Is padding empty.
   */
  private function isPaddingEmpty() {
    $values = [];
    $values[] = $this->get('padding_top')->getValue();
    $values[] = $this->get('padding_right')->getValue();
    $values[] = $this->get('padding_bottom')->getValue();
    $values[] = $this->get('padding_left')->getValue();

    foreach ($values as $value) {
      if ($value !== NULL || $value !== '') {
        return FALSE;
      }
    }

    return TRUE;
  }

  /**
   * Is margin empty.
   */
  private function isMarginEmpty() {
    $values = [];
    $values[] = $this->get('margin_top')->getValue();
    $values[] = $this->get('margin_right')->getValue();
    $values[] = $this->get('margin_bottom')->getValue();
    $values[] = $this->get('margin_left')->getValue();

    foreach ($values as $value) {
      if ($value !== NULL || $value !== '') {
        return FALSE;
      }
    }

    return TRUE;
  }

}
