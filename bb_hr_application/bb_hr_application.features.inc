<?php
/**
 * @file
 * bb_hr_application.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bb_hr_application_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function bb_hr_application_node_info() {
  $items = array(
    'application' => array(
      'name' => t('Application'),
      'base' => 'node_content',
      'description' => t('Een sollicitatie.'),
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
function bb_hr_application_default_rules_link() {
  $items = array();
  $items['job_add_application'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Apply",
      "link_type" : "token",
      "bundles" : { "job" : "job" },
      "entity_link" : 1
    },
    "name" : "job_add_application",
    "label" : "Job Add Application",
    "path" : "job_application_add",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
