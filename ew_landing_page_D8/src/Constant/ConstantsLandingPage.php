<?php

namespace Drupal\ew_landing_page\Constant;

use Drupal\ew_core\EaglesWeb\Standard\Constant\ModuleConstantsBase;

/**
 * Class LandingPage.
 *
 * @package Drupal\ew_landing_page\Constant
 */
class ConstantsLandingPage extends ModuleConstantsBase {

  /**
   * General.
   */
  const MODULE_NAME = 'ew_landing_page';

  /**
   * Node types.
   */
  const NODE_TYPE_LANDING_PAGE = 'page';
  const DISPLAY_MODE_NODE_LANDING_PAGE = 'landing_page';


  /**
   * Paragraphs fields Name.
   */
  const FIELD_PARAGRAPH_CONTAINER_TYPE = 'field_container_type';
  const FIELD_PARAGRAPH_COLUMNS_REFERENCE = 'field_paragraphs_column_ref';
  const FIELD_PARAGRAPH_GRID_12 = 'field_grid_12';


  /**
   * Paragraphs fields options.
   */
  // Options for field_container_type.
  const OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_SYSTEM = 'system';
  const OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_NORMAL = 'normal';
  const OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_FLUID = 'fluid';
  const OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_FULL = 'full';
  // Options for field_grid_12.
  const OPTION_FIELD_PARAGRAPH_GRID_12_FULL = '12';
  const OPTION_FIELD_PARAGRAPH_GRID_12_HALF = '6';
  const OPTION_FIELD_PARAGRAPH_GRID_12_ONE_QUARTER = '3';
  const OPTION_FIELD_PARAGRAPH_GRID_12_ONE_THIRD = '4';
  const OPTION_FIELD_PARAGRAPH_GRID_12_TWO_THIRDS = '8';




  /**
   * {@inheritdoc}
   */
  public static function getModuleName() {
    return self::MODULE_NAME;
  }

  public static function getOptionsContainerType() {
    return [
      self::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_SYSTEM => 'System',
      self::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_NORMAL => 'normal',
      self::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_FLUID => 'fluid',
      self::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_FULL => 'full',
    ];
  }

}
