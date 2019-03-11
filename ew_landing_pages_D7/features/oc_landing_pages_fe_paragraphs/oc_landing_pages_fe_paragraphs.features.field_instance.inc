<?php
/**
 * @file
 * ew_landing_pages_fe_paragraphs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ew_landing_pages_fe_paragraphs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_accordion-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_accordion-field_par_full_row'] = array(
    'bundle' => 'paragraphs_accordion',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_accordion-field_par_item_ref'.
  $field_instances['paragraphs_item-paragraphs_accordion-field_par_item_ref'] = array(
    'bundle' => 'paragraphs_accordion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_ref',
    'label' => 'Accordion items',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => 'paragraphs_accordion_item',
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 15,
        'paragraphs_elements' => 27,
        'paragraphs_grid' => 19,
        'paragraphs_linked_image' => 20,
        'paragraphs_slide_item' => -18,
        'paragraphs_slideshow' => 4,
        'paragraphs_tabel' => 23,
        'paragraphs_tabs' => 6,
        'paragraphs_tabs_item' => 7,
        'paragraphs_text' => 8,
        'paragraphs_text_element' => -26,
        'paragraphs_text_image' => 9,
        'paragraphs_view' => -18,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Item',
      'title_multiple' => 'items',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_accordion-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_accordion-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_accordion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_accordion_item-field_par_config_active'.
  $field_instances['paragraphs_item-paragraphs_accordion_item-field_par_config_active'] = array(
    'bundle' => 'paragraphs_accordion_item',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_config_active',
    'label' => 'Open item on loading?',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_accordion_item-field_par_header'.
  $field_instances['paragraphs_item-paragraphs_accordion_item-field_par_header'] = array(
    'bundle' => 'paragraphs_accordion_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header',
    'label' => 'Accordion item header',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_accordion_item-field_par_item_single_ref'.
  $field_instances['paragraphs_item-paragraphs_accordion_item-field_par_item_single_ref'] = array(
    'bundle' => 'paragraphs_accordion_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the content of the accordion item.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_single_ref',
    'label' => 'Accordion item content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => 'paragraphs_grid',
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => 'paragraphs_slideshow',
        'paragraphs_style' => -1,
        'paragraphs_table' => -1,
        'paragraphs_tabs' => 'paragraphs_tabs',
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => 'paragraphs_text',
        'paragraphs_view' => 'paragraphs_view',
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 26,
        'paragraphs_grid' => 14,
        'paragraphs_header' => -30,
        'paragraphs_image' => -30,
        'paragraphs_image_cover' => -30,
        'paragraphs_slide_item' => 5,
        'paragraphs_slideshow' => 4,
        'paragraphs_style' => -30,
        'paragraphs_table' => -30,
        'paragraphs_tabs' => 6,
        'paragraphs_tabs_item' => 7,
        'paragraphs_text' => 8,
        'paragraphs_view' => 10,
      ),
      'collapsible' => 1,
      'default_edit_mode' => 'preview',
      'default_edit_open' => 0,
      'title' => 'Content',
      'title_multiple' => 'Contents',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_elements-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_elements-field_par_full_row'] = array(
    'bundle' => 'paragraphs_elements',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_elements-field_par_grid_split'.
  $field_instances['paragraphs_item-paragraphs_elements-field_par_grid_split'] = array(
    'bundle' => 'paragraphs_elements',
    'default_value' => array(
      0 => array(
        'value' => '6-6',
      ),
    ),
    'deleted' => 0,
    'description' => 'Pick the row split, One row contains 12 columns.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_grid_split',
    'label' => 'Grid split',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_elements-field_par_left_elements_ref'.
  $field_instances['paragraphs_item-paragraphs_elements-field_par_left_elements_ref'] = array(
    'bundle' => 'paragraphs_elements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_left_elements_ref',
    'label' => 'Left elements',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_accordion' => 'paragraphs_accordion',
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => 'paragraphs_grid',
        'paragraphs_header' => 'paragraphs_header',
        'paragraphs_image' => 'paragraphs_image',
        'paragraphs_image_cover' => 'paragraphs_image_cover',
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => 'paragraphs_slideshow',
        'paragraphs_style' => -1,
        'paragraphs_table' => 'paragraphs_table',
        'paragraphs_tabs' => 'paragraphs_tabs',
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => 'paragraphs_text',
        'paragraphs_view' => 'paragraphs_view',
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_slide_item' => 10,
        'paragraphs_slideshow' => 9,
        'paragraphs_style' => 11,
        'paragraphs_table' => 12,
        'paragraphs_tabs' => 13,
        'paragraphs_tabs_item' => 14,
        'paragraphs_text' => 15,
        'paragraphs_view' => 16,
      ),
      'collapsible' => 1,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 1,
      'title' => 'Element',
      'title_multiple' => 'Elements',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_elements-field_par_right_elements_ref'.
  $field_instances['paragraphs_item-paragraphs_elements-field_par_right_elements_ref'] = array(
    'bundle' => 'paragraphs_elements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_right_elements_ref',
    'label' => 'Right elements',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_accordion' => 'paragraphs_accordion',
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => 'paragraphs_grid',
        'paragraphs_header' => 'paragraphs_header',
        'paragraphs_image' => 'paragraphs_image',
        'paragraphs_image_cover' => 'paragraphs_image_cover',
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => 'paragraphs_slideshow',
        'paragraphs_style' => -1,
        'paragraphs_table' => 'paragraphs_table',
        'paragraphs_tabs' => 'paragraphs_tabs',
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => 'paragraphs_text',
        'paragraphs_view' => 'paragraphs_view',
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_slide_item' => 10,
        'paragraphs_slideshow' => 9,
        'paragraphs_style' => 11,
        'paragraphs_table' => 12,
        'paragraphs_tabs' => 13,
        'paragraphs_tabs_item' => 14,
        'paragraphs_text' => 15,
        'paragraphs_view' => 16,
      ),
      'collapsible' => 1,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 1,
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_elements-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_elements-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_elements',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => FALSE,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => FALSE,
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_full_row'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_item_per_row_lg'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_item_per_row_lg'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => 'Large screens (large desktops, 1200px and up)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_per_row_lg',
    'label' => 'Number of item for large screens',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_item_per_row_md'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_item_per_row_md'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => 'Medium screens (desktops, 992px and up)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_per_row_md',
    'label' => 'Number of item for Medium screens',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_item_per_row_sm'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_item_per_row_sm'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => array(
      0 => array(
        'value' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => 'small screens  (tablets, 768px and up)
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_per_row_sm',
    'label' => 'Number of item for small screens',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_item_per_row_xs'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_item_per_row_xs'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => array(
      0 => array(
        'value' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => 'Extra small screens (phones, less than 768px)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_per_row_xs',
    'label' => 'Number of item for extra small screens',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_item_ref'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_item_ref'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_ref',
    'label' => 'Grid items',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_accordion' => 'paragraphs_accordion',
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => 'paragraphs_elements',
        'paragraphs_grid' => -1,
        'paragraphs_image' => 'paragraphs_image',
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => 'paragraphs_slideshow',
        'paragraphs_tabel' => 'paragraphs_tabel',
        'paragraphs_tabs' => 'paragraphs_tabs',
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => 'paragraphs_text',
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => 'paragraphs_view',
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 17,
        'paragraphs_grid' => 4,
        'paragraphs_image' => 19,
        'paragraphs_linked_image' => 6,
        'paragraphs_slide_item' => 8,
        'paragraphs_slideshow' => 7,
        'paragraphs_tabel' => 23,
        'paragraphs_tabs' => 9,
        'paragraphs_tabs_item' => 10,
        'paragraphs_text' => 11,
        'paragraphs_text_element' => 27,
        'paragraphs_text_image' => 12,
        'paragraphs_view' => 13,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_grid-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_grid-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_grid',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_call_to_action'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_call_to_action'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_call_to_action',
    'label' => 'Call to action',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'required',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_full_row'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_header'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_header'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header',
    'label' => 'Header',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'landing_pages_input_fromat' => 'landing_pages_input_fromat',
          'ew_blog_input_format' => 'ew_blog_input_format',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'landing_pages_input_fromat' => array(
              'weight' => 0,
            ),
            'ew_blog_input_format' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_header_align'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_header_align'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => array(
      0 => array(
        'value' => 'left',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header_align',
    'label' => 'Header align',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_header_tag'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_header_tag'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => array(
      0 => array(
        'value' => 'h1',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header_tag',
    'label' => 'Header tag',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_link'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_link'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Added link will be used to link header and sub header',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 9,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_link',
    'label' => 'Link headers',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 0,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 11,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_sub_header'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_sub_header'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_sub_header',
    'label' => 'Sub header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'landing_pages_input_fromat' => 'landing_pages_input_fromat',
          'ew_blog_input_format' => 'ew_blog_input_format',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'landing_pages_input_fromat' => array(
              'weight' => 0,
            ),
            'ew_blog_input_format' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_header-field_par_sub_header_tag'.
  $field_instances['paragraphs_item-paragraphs_header-field_par_sub_header_tag'] = array(
    'bundle' => 'paragraphs_header',
    'default_value' => array(
      0 => array(
        'value' => 'h3',
      ),
    ),
    'deleted' => 0,
    'description' => 'Select sub header tag.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_sub_header_tag',
    'label' => 'Sub header tag',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_full_row'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_header'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_header'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header',
    'label' => 'Header',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'landing_pages_input_fromat' => 'landing_pages_input_fromat',
          'ew_blog_input_format' => 'ew_blog_input_format',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'landing_pages_input_fromat' => array(
              'weight' => 0,
            ),
            'ew_blog_input_format' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_header_tag'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_header_tag'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => array(
      0 => array(
        'value' => 'h3',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header_tag',
    'label' => 'Header tag',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_image'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_image'] = array(
    'bundle' => 'paragraphs_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:fid]-[current-date:raw].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'images/paragraphs',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_focal_point_preview' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_ew_image_style_75x75' => 0,
          'image_ew_image_style_125x125' => 0,
          'image_ew_image_style_200x200' => 0,
          'image_ew_image_style_350x350' => 0,
          'image_ew_image_style_500x250' => 0,
          'image_ew_image_style_750x300' => 0,
          'image_ew_image_style_1200x400' => 0,
          'image_ew_image_style_1400x400' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_image_mask'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_image_mask'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image_mask',
    'label' => 'Image mask',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_image_style'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_image_style'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'iss',
        'settings' => array(),
        'type' => 'iss_formatter',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image_style',
    'label' => 'Image style',
    'required' => 1,
    'settings' => array(
      'image_field_name' => 'field_par_image',
      'image_styles' => array(
        'large' => 'large',
        'medium' => 'medium',
        'ew_image_style_75x75' => 'ew_image_style_75x75',
        'ew_image_style_125x125' => 'ew_image_style_125x125',
        'ew_image_style_200x200' => 'ew_image_style_200x200',
        'ew_image_style_350x350' => 'ew_image_style_350x350',
        'ew_image_style_500x250' => 'ew_image_style_500x250',
        'ew_image_style_750x300' => 'ew_image_style_750x300',
        'ew_image_style_1200x400' => 'ew_image_style_1200x400',
        'ew_image_style_1400x400' => 'ew_image_style_1400x400',
        'thumbnail' => 'thumbnail',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'iss',
      'settings' => array(),
      'type' => 'iss_widget_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-paragraphs_image-field_par_link'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_link'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '',
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_allowed_values' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_image-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => FALSE,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => FALSE,
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image_cover-field_par_image'.
  $field_instances['paragraphs_item-paragraphs_image_cover-field_par_image'] = array(
    'bundle' => 'paragraphs_image_cover',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image',
    'label' => 'Cover image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'images/paragraphs',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_focal_point_preview' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_ew_image_style_75x75' => 0,
          'image_ew_image_style_125x125' => 0,
          'image_ew_image_style_200x200' => 0,
          'image_ew_image_style_350x350' => 0,
          'image_ew_image_style_500x250' => 0,
          'image_ew_image_style_750x300' => 0,
          'image_ew_image_style_1200x400' => 0,
          'image_ew_image_style_1400x400' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image_cover-field_par_image_style'.
  $field_instances['paragraphs_item-paragraphs_image_cover-field_par_image_style'] = array(
    'bundle' => 'paragraphs_image_cover',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'iss',
        'settings' => array(),
        'type' => 'iss_formatter',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image_style',
    'label' => 'Image style',
    'required' => 1,
    'settings' => array(
      'image_field_name' => 'field_par_image',
      'image_styles' => array(
        'large' => 'large',
        'medium' => 'medium',
        'ew_image_style_75x75' => 'ew_image_style_75x75',
        'ew_image_style_125x125' => 'ew_image_style_125x125',
        'ew_image_style_200x200' => 'ew_image_style_200x200',
        'ew_image_style_350x350' => 'ew_image_style_350x350',
        'ew_image_style_500x250' => 'ew_image_style_500x250',
        'ew_image_style_750x300' => 'ew_image_style_750x300',
        'ew_image_style_1200x400' => 'ew_image_style_1200x400',
        'ew_image_style_1400x400' => 'ew_image_style_1400x400',
        'thumbnail' => 'thumbnail',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'iss',
      'settings' => array(),
      'type' => 'iss_widget_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image_cover-field_par_item_ref'.
  $field_instances['paragraphs_item-paragraphs_image_cover-field_par_item_ref'] = array(
    'bundle' => 'paragraphs_image_cover',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_ref',
    'label' => 'Over image',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => 'paragraphs_header',
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => -1,
        'paragraphs_table' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => 'paragraphs_text',
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_table' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_view' => 17,
      ),
      'collapsible' => 1,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 0,
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_image_cover-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_image_cover-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_image_cover',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => FALSE,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => FALSE,
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_slide_item-field_par_image'.
  $field_instances['paragraphs_item-paragraphs_slide_item-field_par_image'] = array(
    'bundle' => 'paragraphs_slide_item',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'ew_image_style_200x200',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image',
    'label' => 'Slide image',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:fid]-[current-date:raw].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '',
        ),
        'redirect' => FALSE,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'imce' => 'imce',
            'reference' => 0,
            'remote' => 'remote',
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 1,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_focal_point_preview' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_ew_image_style_75x75' => 0,
          'image_ew_image_style_125x125' => 0,
          'image_ew_image_style_200x200' => 0,
          'image_ew_image_style_350x350' => 0,
          'image_ew_image_style_500x250' => 0,
          'image_ew_image_style_750x300' => 0,
          'image_ew_image_style_1200x400' => 0,
          'image_ew_image_style_1400x400' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_slide_item-field_par_item_single_ref'.
  $field_instances['paragraphs_item-paragraphs_slide_item-field_par_item_single_ref'] = array(
    'bundle' => 'paragraphs_slide_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add header to your slide.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_single_ref',
    'label' => 'Header',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => 'paragraphs_header',
        'paragraphs_image' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_linked_image' => 8,
        'paragraphs_slide_item' => 10,
        'paragraphs_slideshow' => 9,
        'paragraphs_tabel' => 11,
        'paragraphs_tabs' => 12,
        'paragraphs_tabs_item' => 13,
        'paragraphs_text' => 14,
        'paragraphs_text_element' => 15,
        'paragraphs_text_image' => 16,
        'paragraphs_view' => 17,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'preview',
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Header',
      'title_multiple' => 'Headers',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_slideshow-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_slideshow-field_par_full_row'] = array(
    'bundle' => 'paragraphs_slideshow',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_slideshow-field_par_image_style'.
  $field_instances['paragraphs_item-paragraphs_slideshow-field_par_image_style'] = array(
    'bundle' => 'paragraphs_slideshow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'iss',
        'settings' => array(),
        'type' => 'iss_formatter',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_image_style',
    'label' => 'Image style',
    'required' => 1,
    'settings' => array(
      'image_field_name' => '',
      'image_styles' => array(
        'ew_image_style_75x75' => 'ew_image_style_75x75',
        'ew_image_style_125x125' => 'ew_image_style_125x125',
        'ew_image_style_200x200' => 'ew_image_style_200x200',
        'ew_image_style_350x350' => 'ew_image_style_350x350',
        'ew_image_style_500x250' => 'ew_image_style_500x250',
        'ew_image_style_750x300' => 'ew_image_style_750x300',
        'ew_image_style_1200x400' => 'ew_image_style_1200x400',
        'ew_image_style_1400x400' => 'ew_image_style_1400x400',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'iss',
      'settings' => array(),
      'type' => 'iss_widget_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_slideshow-field_par_item_ref'.
  $field_instances['paragraphs_item-paragraphs_slideshow-field_par_item_ref'] = array(
    'bundle' => 'paragraphs_slideshow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add your slide',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_ref',
    'label' => 'Slides',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => 'paragraphs_slide_item',
        'paragraphs_slideshow' => -1,
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 11,
        'paragraphs_grid' => 22,
        'paragraphs_linked_image' => 23,
        'paragraphs_slide_item' => 13,
        'paragraphs_slideshow' => 4,
        'paragraphs_tabel' => 26,
        'paragraphs_tabs' => 5,
        'paragraphs_tabs_item' => 6,
        'paragraphs_text' => 7,
        'paragraphs_text_element' => -26,
        'paragraphs_text_image' => 8,
        'paragraphs_view' => 18,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'preview',
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Slide',
      'title_multiple' => 'Slides',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_slideshow-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_slideshow-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_slideshow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_background_color'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_background_color'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'color_field',
        'settings' => array(),
        'type' => 'color_field_default_formatter',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_background_color',
    'label' => 'Background color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'color_field',
      'settings' => array(),
      'type' => 'color_field_default_widget',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_margin_bottom'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_margin_bottom'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_margin_bottom',
    'label' => 'Bottom',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_margin_left'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_margin_left'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_margin_left',
    'label' => 'Left',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_margin_right'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_margin_right'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_margin_right',
    'label' => 'Right',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_margin_top'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_margin_top'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_margin_top',
    'label' => 'Top',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_padding_bottom'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_padding_bottom'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_padding_bottom',
    'label' => 'Bottom',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_padding_left'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_padding_left'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_padding_left',
    'label' => 'Left',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_padding_right'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_padding_right'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_padding_right',
    'label' => 'Right',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_style-field_par_padding_top'.
  $field_instances['paragraphs_item-paragraphs_style-field_par_padding_top'] = array(
    'bundle' => 'paragraphs_style',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_padding_top',
    'label' => 'Top',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'px',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_table-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_table-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_table',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_tabel' => -1,
        'paragraphs_table' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_tabel' => 13,
        'paragraphs_table' => 14,
        'paragraphs_tabs' => 15,
        'paragraphs_tabs_item' => 16,
        'paragraphs_text' => 17,
        'paragraphs_text_element' => 18,
        'paragraphs_text_image' => 19,
        'paragraphs_view' => 20,
      ),
      'collapsible' => FALSE,
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => FALSE,
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_table-field_par_table'.
  $field_instances['paragraphs_item-paragraphs_table-field_par_table'] = array(
    'bundle' => 'paragraphs_table',
    'default_value' => array(
      0 => array(
        'tablefield' => array(
          'caption' => '',
          'import' => array(
            'file' => '',
            'import' => 'Upload CSV',
          ),
          'paste' => array(
            'data' => '',
            'paste_delimiter' => '',
            'paste_import' => 'Import & Rebuild',
          ),
          'rebuild' => array(
            'count_cols' => 5,
            'count_rows' => 5,
            'rebuild' => 'Rebuild Table',
          ),
          'tabledata' => array(
            'row_0' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 1,
            ),
            'row_1' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 2,
            ),
            'row_2' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 3,
            ),
            'row_3' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 4,
            ),
            'row_4' => array(
              'col_0' => '',
              'col_1' => '',
              'col_2' => '',
              'col_3' => '',
              'col_4' => '',
              'weight' => 5,
            ),
          ),
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'tablefield',
        'settings' => array(
          'export_csv' => 0,
          'header_orientation' => 'Horizontal',
          'hide_cols_skip_head' => 0,
          'hide_empty_cols' => 1,
          'hide_empty_rows' => 1,
          'hide_header' => 0,
          'sortable' => FALSE,
          'sticky_header' => 0,
          'striping' => 1,
          'trim_trailing_cols' => 0,
          'trim_trailing_rows' => 0,
        ),
        'type' => 'tablefield_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_table',
    'label' => 'Table',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'tablefield',
      'settings' => array(
        'cell_processing' => 0,
        'data_sources' => array(
          'paste' => 'paste',
          'upload' => 'upload',
        ),
        'input_type' => 'textfield',
        'lock_values' => 0,
        'max_length' => 2048,
        'restrict_rebuild' => 0,
      ),
      'type' => 'tablefield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_tabs-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_tabs-field_par_full_row'] = array(
    'bundle' => 'paragraphs_tabs',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_tabs-field_par_item_ref'.
  $field_instances['paragraphs_item-paragraphs_tabs-field_par_item_ref'] = array(
    'bundle' => 'paragraphs_tabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_ref',
    'label' => 'Tabs',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => -1,
        'paragraphs_table' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => 'paragraphs_tabs_item',
        'paragraphs_text' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 16,
        'paragraphs_grid' => 4,
        'paragraphs_header' => 18,
        'paragraphs_image' => 19,
        'paragraphs_image_cover' => 20,
        'paragraphs_slide_item' => 7,
        'paragraphs_slideshow' => 6,
        'paragraphs_style' => 23,
        'paragraphs_table' => 24,
        'paragraphs_tabs' => 8,
        'paragraphs_tabs_item' => 9,
        'paragraphs_text' => 10,
        'paragraphs_view' => 12,
      ),
      'collapsible' => 1,
      'default_edit_mode' => 'preview',
      'default_edit_open' => 0,
      'title' => 'Tab',
      'title_multiple' => 'Tabs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_tabs-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_tabs-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_tabs',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_table' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_table' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_tabs_item-field_par_header'.
  $field_instances['paragraphs_item-paragraphs_tabs_item-field_par_header'] = array(
    'bundle' => 'paragraphs_tabs_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_header',
    'label' => 'Tab name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_tabs_item-field_par_item_single_ref'.
  $field_instances['paragraphs_item-paragraphs_tabs_item-field_par_item_single_ref'] = array(
    'bundle' => 'paragraphs_tabs_item',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_item_single_ref',
    'label' => 'Tab content',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_accordion' => 'paragraphs_accordion',
        'paragraphs_accordion_item' => -1,
        'paragraphs_grid' => 'paragraphs_grid',
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => 'paragraphs_slideshow',
        'paragraphs_tabel' => 'paragraphs_tabel',
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => 'paragraphs_text',
        'paragraphs_text_element' => 'paragraphs_text_element',
        'paragraphs_text_image' => 'paragraphs_text_image',
        'paragraphs_view' => 'paragraphs_view',
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_grid' => 4,
        'paragraphs_linked_image' => 5,
        'paragraphs_slide_item' => 7,
        'paragraphs_slideshow' => 6,
        'paragraphs_tabel' => 20,
        'paragraphs_tabs' => 8,
        'paragraphs_tabs_item' => 9,
        'paragraphs_text' => 10,
        'paragraphs_text_element' => 24,
        'paragraphs_text_image' => 11,
        'paragraphs_view' => 12,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_text-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_text-field_par_full_row'] = array(
    'bundle' => 'paragraphs_text',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_text-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_text-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 12,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_table' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_table' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-paragraphs_text-field_par_text'.
  $field_instances['paragraphs_item-paragraphs_text-field_par_text'] = array(
    'bundle' => 'paragraphs_text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_text',
    'label' => 'Text',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'landing_pages_input_fromat' => 'landing_pages_input_fromat',
          'ew_blog_input_format' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'landing_pages_input_fromat' => array(
              'weight' => 0,
            ),
            'ew_blog_input_format' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_text-field_par_text_align'.
  $field_instances['paragraphs_item-paragraphs_text-field_par_text_align'] = array(
    'bundle' => 'paragraphs_text',
    'default_value' => array(
      0 => array(
        'value' => 'left',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_text_align',
    'label' => 'Text align',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_view-field_par_full_row'.
  $field_instances['paragraphs_item-paragraphs_view-field_par_full_row'] = array(
    'bundle' => 'paragraphs_view',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_full_row',
    'label' => 'Display paragraphs as full row?',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_view-field_par_style_ref'.
  $field_instances['paragraphs_item-paragraphs_view-field_par_style_ref'] = array(
    'bundle' => 'paragraphs_view',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_style_ref',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'paragraphs_accordion' => -1,
        'paragraphs_accordion_item' => -1,
        'paragraphs_elements' => -1,
        'paragraphs_grid' => -1,
        'paragraphs_header' => -1,
        'paragraphs_image' => -1,
        'paragraphs_image_cover' => -1,
        'paragraphs_linked_image' => -1,
        'paragraphs_slide_item' => -1,
        'paragraphs_slideshow' => -1,
        'paragraphs_style' => 'paragraphs_style',
        'paragraphs_table' => -1,
        'paragraphs_tabs' => -1,
        'paragraphs_tabs_item' => -1,
        'paragraphs_text' => -1,
        'paragraphs_text_element' => -1,
        'paragraphs_text_image' => -1,
        'paragraphs_view' => -1,
      ),
      'bundle_weights' => array(
        'paragraphs_accordion' => 2,
        'paragraphs_accordion_item' => 3,
        'paragraphs_elements' => 4,
        'paragraphs_grid' => 5,
        'paragraphs_header' => 6,
        'paragraphs_image' => 7,
        'paragraphs_image_cover' => 8,
        'paragraphs_linked_image' => 9,
        'paragraphs_slide_item' => 11,
        'paragraphs_slideshow' => 10,
        'paragraphs_style' => 12,
        'paragraphs_table' => 13,
        'paragraphs_tabs' => 14,
        'paragraphs_tabs_item' => 15,
        'paragraphs_text' => 16,
        'paragraphs_text_element' => 17,
        'paragraphs_text_image' => 18,
        'paragraphs_view' => 19,
      ),
      'collapsible' => 'PARAGRAPHS_DEFAULT_EDIT_COLLAPSIBLE',
      'default_edit_mode' => 'open',
      'default_edit_mode_override' => 1,
      'default_edit_open' => 'PARAGRAPHS_DEFAULT_EDIT_OPEN',
      'title' => 'Style',
      'title_multiple' => 'Styles',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-paragraphs_view-field_par_view_ref'.
  $field_instances['paragraphs_item-paragraphs_view-field_par_view_ref'] = array(
    'bundle' => 'paragraphs_view',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_par_view_ref',
    'label' => 'View to show',
    'required' => 1,
    'settings' => array(
      'allowed_views' => array(
        'ew_blog_post' => 'ew_blog_post',
        'ew_blog_terms' => 'ew_blog_terms',
        'ew_fe_blog_post' => 0,
        'ew_fe_blog_terms' => 0,
        'ew_user' => 'ew_user',
      ),
      'force_default' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion item content');
  t('Accordion item header');
  t('Accordion items');
  t('Add header to your slide.');
  t('Add the content of the accordion item.');
  t('Add your slide');
  t('Added link will be used to link header and sub header');
  t('Background color');
  t('Bottom');
  t('Call to action');
  t('Cover image');
  t('Display paragraphs as full row?');
  t('Extra small screens (phones, less than 768px)');
  t('Grid items');
  t('Grid split');
  t('Header');
  t('Header align');
  t('Header tag');
  t('Image');
  t('Image mask');
  t('Image style');
  t('Large screens (large desktops, 1200px and up)');
  t('Left');
  t('Left elements');
  t('Link');
  t('Link headers');
  t('Medium screens (desktops, 992px and up)');
  t('Number of item for Medium screens');
  t('Number of item for extra small screens');
  t('Number of item for large screens');
  t('Number of item for small screens');
  t('Open item on loading?');
  t('Over image');
  t('Pick the row split, One row contains 12 columns.');
  t('Right');
  t('Right elements');
  t('Select sub header tag.');
  t('Slide image');
  t('Slides');
  t('Style');
  t('Sub header');
  t('Sub header tag');
  t('Tab content');
  t('Tab name');
  t('Table');
  t('Tabs');
  t('Text');
  t('Text align');
  t('Top');
  t('View to show');
  t('small screens  (tablets, 768px and up)
');

  return $field_instances;
}
