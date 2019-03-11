<?php
/**
 * @file
 * ew_landing_pages_fe_paragraphs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ew_landing_pages_fe_paragraphs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta|paragraphs_item|paragraphs_header|form';
  $field_group->group_name = 'group_cta';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_header';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA',
    'weight' => '5',
    'children' => array(
      0 => 'field_par_call_to_action',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'CTA',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_cta|paragraphs_item|paragraphs_header|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_margin|paragraphs_item|paragraphs_style|form';
  $field_group->group_name = 'group_margin';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_style';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Margin settings',
    'weight' => '2',
    'children' => array(
      0 => 'field_par_margin_top',
      1 => 'field_par_margin_left',
      2 => 'field_par_margin_right',
      3 => 'field_par_margin_bottom',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Margin settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_margin|paragraphs_item|paragraphs_style|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_padding|paragraphs_item|paragraphs_style|form';
  $field_group->group_name = 'group_padding';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_style';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Padding settings',
    'weight' => '1',
    'children' => array(
      0 => 'field_par_padding_left',
      1 => 'field_par_padding_right',
      2 => 'field_par_padding_top',
      3 => 'field_par_padding_bottom',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Padding settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_padding|paragraphs_item|paragraphs_style|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subheader|paragraphs_item|paragraphs_header|form';
  $field_group->group_name = 'group_subheader';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'paragraphs_header';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sub Header',
    'weight' => '3',
    'children' => array(
      0 => 'field_par_sub_header',
      1 => 'field_par_sub_header_tag',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sub Header',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-subheader field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_subheader|paragraphs_item|paragraphs_header|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTA');
  t('Margin settings');
  t('Padding settings');
  t('Sub Header');

  return $field_groups;
}
