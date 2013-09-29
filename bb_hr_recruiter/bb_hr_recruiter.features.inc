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
 * Implements hook_flag_default_flags().
 */
function bb_hr_recruiter_flag_default_flags() {
  $flags = array();
  // Exported flag: "Resume bookmarks".
  $flags['resume_bookmarks'] = array(
    'entity_type' => 'profile2',
    'title' => 'Resume bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'cv',
    ),
    'flag_short' => 'Mark CV',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Unmark CV',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'account' => 'account',
      'page' => 'page',
      'teaser' => 'teaser',
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'api_version' => 3,
    'module' => 'bb_hr_recruiter',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

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
