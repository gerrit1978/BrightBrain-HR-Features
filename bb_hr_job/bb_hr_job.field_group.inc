<?php
/**
 * @file
 * bb_hr_job.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bb_hr_job_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_categories|node|job|form';
  $field_group->group_name = 'group_job_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorieën',
    'weight' => '5',
    'children' => array(
      0 => 'field_job_degree_level',
      1 => 'field_job_employment_type',
      2 => 'field_job_experience',
      3 => 'field_job_field_of_study',
      4 => 'field_job_field_of_work',
      5 => 'field_job_languages',
      6 => 'field_job_skills_general',
      7 => 'field_job_skills_it',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-categories field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_categories|node|job|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_job_description|node|job|form';
  $field_group->group_name = 'group_job_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'job';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beschrijving',
    'weight' => '3',
    'children' => array(
      0 => 'field_job_call_to_action',
      1 => 'field_job_company_description',
      2 => 'field_job_description',
      3 => 'field_job_offer',
      4 => 'field_job_profile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-job-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_job_description|node|job|form'] = $field_group;

  return $export;
}
