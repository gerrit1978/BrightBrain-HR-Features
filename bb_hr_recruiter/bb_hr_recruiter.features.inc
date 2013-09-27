<?php
/**
 * @file
 * bb_hr_recruiter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bb_hr_recruiter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bb_hr_recruiter_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_rules_link().
 */
function bb_hr_recruiter_default_rules_link() {
  $items = array();
  $items['application_put_in_shortlist'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Put in shortlist",
      "link_type" : "token",
      "bundles" : { "application" : "application" },
      "entity_link" : 1
    },
    "name" : "application_put_in_shortlist",
    "label" : "Application Put in Shortlist",
    "path" : "application_put_in_shortlist",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['application_remove_from_shortlis'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Remove from shortlist",
      "link_type" : "token",
      "bundles" : { "application" : "application" },
      "entity_link" : 1
    },
    "name" : "application_remove_from_shortlis",
    "label" : "Application Remove from Shortlist",
    "path" : "application_remove_in_shortlist",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
