<?php
/**
 * @file
 * bb_hr_job.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bb_hr_job_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bb_hr_job_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Standaard job.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function bb_hr_job_default_rules_link() {
  $items = array();
  $items['job_publish'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Publish",
      "link_type" : "token",
      "bundles" : { "job" : "job" },
      "entity_link" : 1
    },
    "name" : "job_publish",
    "label" : "Job Publish",
    "path" : "job_publish",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['job_unpublish'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Unpublish",
      "link_type" : "token",
      "bundles" : { "job" : "job" },
      "entity_link" : 1
    },
    "name" : "job_unpublish",
    "label" : "Job Unpublish",
    "path" : "job_unpublish",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
