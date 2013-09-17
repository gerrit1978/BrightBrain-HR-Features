<?php
/**
 * @file
 * bb_hr_applicant.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function bb_hr_applicant_default_profile2_type() {
  $items = array();
  $items['cv'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "cv",
    "label" : "CV",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
