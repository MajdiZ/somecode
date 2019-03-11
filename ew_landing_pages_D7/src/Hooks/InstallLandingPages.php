<?php

namespace Drupal\ew_landing_pages\Hooks;

use Drupal\ew_landing_pages\Constants\ConstantsLandingPages;
use Drupal\ew_core\Services\InstallServiceCore;

/**
 * Class InstallLandingPages.
 *
 * @package Drupal\ew_landing_pages\Hooks
 */
class InstallLandingPages {

  /**
   * Perform Install tasks.
   */
  public static function getHookInstall() {
    self::createLandingPagesContentType();
    self::createLandingPageFields();
    self::createLandingPageFieldsinstances();
    self::adjustVariables();
  }

  /**
   * Perform Uninstall tasks.
   */
  public static function getHookUninstall() {
    /*
     * EW is needed for uninstalling process, so in case its
     * disabled we need to enable it.
     */
    if (!module_exists('ew_core')) {
      module_enable(array('ew_core'));
      drupal_set_message('EW Core was enabled to complete uninstalling of this module.', 'warning');
    }

    self::removeLandingPageFields();
    InstallServiceCore::deleteContentType(ConstantsLandingPages::NODE_TYPE_LANDING_PAGE);

  }

  /**
   * Update hook to add field.
   */
  public static function getHookUpdate7100() {
    $fieldsToUpdate = array(
      'ew_landing_page_full_width',
    );
    $updateFields = self::getLandingPageFields($fieldsToUpdate);
    $updateFieldsInstances = self::getLandingPageFieldsInstances($fieldsToUpdate);
    // Create fields.
    InstallServiceCore::installFields($updateFields);
    InstallServiceCore::installFieldsInstances('node', $updateFieldsInstances, ConstantsLandingPages::NODE_TYPE_LANDING_PAGE);

  }

  /**
   * Create Landing Page content type.
   */
  private static function createLandingPagesContentType() {
    node_types_rebuild();
  }

  /**
   * Adjust variables.
   */
  private static function adjustVariables() {
    // Disable comments.
    variable_set_value('comment_' . ConstantsLandingPages::NODE_TYPE_LANDING_PAGE, 0);
    // Hide node submitted information.
    variable_set_value('node_submitted_' . ConstantsLandingPages::NODE_TYPE_LANDING_PAGE, 0);
  }

  /**
   * Install fields for landing page content type.
   */
  private static function createLandingPageFields() {
    $landingPagesFields = self::getLandingPageFields();
    InstallServiceCore::installFields($landingPagesFields);
  }

  /**
   * Removing post fields.
   */
  private static function removeLandingPageFields() {
    $landingPagesFields = self::getLandingPageFields();
    InstallServiceCore::uninstallFields($landingPagesFields);
  }

  /**
   * Creating fields for blog post Instances.
   */
  private static function createLandingPageFieldsInstances() {
    $landingPageFieldsInstances = self::getLandingPageFieldsInstances();

    // Get all available paragraphs types.
    $paragraphsTypes = paragraphs_bundle_load();
    foreach ($paragraphsTypes as $paragraphsType) {
      if (substr($paragraphsType->bundle, -5) !== '_item') {
        // Add all types which don't ends with _item.
        $landingPageFieldsInstances['ew_landing_page_paragraphs_ref']['settings']['allowed_bundles'][$paragraphsType->bundle] = $paragraphsType->name;

      }
    }

    InstallServiceCore::installFieldsInstances('node', $landingPageFieldsInstances, ConstantsLandingPages::NODE_TYPE_LANDING_PAGE);
  }

  /**
   * Return landing page fields.
   *
   * @param array $fieldsNames
   *   List of custom field.
   *
   * @return array
   *   List of  all fields or a list of custom fields based on requested names.
   */
  private static function getLandingPageFields(array $fieldsNames = NULL) {
    $fieldBases = array();

    $fieldBases['ew_landing_page_full_width'] = array(
      'active' => 1,
      'cardinality' => 1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'ew_landing_page_full_width',
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => 0,
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
        'profile2_private' => FALSE,
      ),
      'translatable' => 0,
      'type' => 'list_boolean',
    );

    $fieldBases['ew_landing_page_paragraphs_ref'] = array(
      'active' => 1,
      'cardinality' => -1,
      'deleted' => 0,
      'entity_types' => array(),
      'field_name' => 'ew_landing_page_paragraphs_ref',
      'indexes' => array(),
      'locked' => 0,
      'module' => 'paragraphs',
      'translatable' => 0,
      'type' => 'paragraphs',
    );

    // Remove any other fields if custom list requested.
    if ($fieldsNames) {
      foreach ($fieldBases as $fieldName => $fieldInfo) {
        if (!in_array($fieldName, $fieldsNames)) {
          unset($fieldBases[$fieldName]);
        }
      }
    }

    return $fieldBases;
  }

  /**
   * Return landing page fields instances.
   *
   * @param array|null $fieldsNames
   *   List of custom field Instances.
   *
   * @return array
   *   List of  all fields Instances or a list of custom fields Instances
   *   based on requested names.
   */
  private static function getLandingPageFieldsInstances(array $fieldsNames = NULL) {
    $fieldInstances = array();

    $fieldInstances['ew_landing_page_full_width'] = array(
      'bundle' => ConstantsLandingPages::NODE_TYPE_LANDING_PAGE,
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => 0,
      'description' => 'You will have full width if you select this option.You can control on the width of each paragraph by check/uncheck the full row option in each, No sidebar will be  printed.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 2,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'ew_landing_page_full_width',
      'label' => 'Full width landing page?',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => -4,
      ),
    );


    $fieldInstances['ew_landing_page_paragraphs_ref'] = array(
      'bundle' => ConstantsLandingPages::NODE_TYPE_LANDING_PAGE,
      'default_value' => NULL,
      'deleted' => 0,
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'paragraphs',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'paragraphs_view',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'paragraphs',
          'settings' => array(
            'view_mode' => 'full',
          ),
          'type' => 'paragraphs_view',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'ew_landing_page_paragraphs_ref',
      'label' => 'Insert Paragraph',
      'required' => 1,
      'settings' => array(
        'add_mode' => 'select',
        'allowed_bundles' => array(
          'paragraphs_view' => 'paragraphs_view',
          'paragraphs_text_image' => 'paragraphs_text_image',
          'paragraphs_text' => 'paragraphs_text',
          'paragraphs_slideshow' => 'paragraphs_slideshow',
          'paragraphs_accordion' => 'paragraphs_accordion',
        ),
        'bundle_weights' => array(),
        'default_edit_mode' => 'closed',
        'title' => 'Paragraph',
        'title_multiple' => 'Paragraphs',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'paragraphs',
        'settings' => array(),
        'type' => 'paragraphs_embed',
        'weight' => -3,
      ),
    );

    t('Insert Paragraph');

    // Remove any other fields if custom list requested.
    if ($fieldsNames) {
      foreach ($fieldInstances as $fieldName => $fieldInstancesInfo) {
        if (!in_array($fieldName, $fieldsNames)) {
          unset($fieldInstances[$fieldName]);
        }
      }
    }

    return $fieldInstances;
  }

}
