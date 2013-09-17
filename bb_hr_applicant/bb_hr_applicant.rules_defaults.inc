<?php
/**
 * @file
 * bb_hr_applicant.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bb_hr_applicant_default_rules_configuration() {
  $items = array();
  $items['rules_cv_initiate'] = entity_import('rules_config', '{ "rules_cv_initiate" : {
      "LABEL" : "CV initiate",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "user_insert" : [], "profile2_update" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "3" : "3", "5" : "5" } },
            "operation" : "OR"
          }
        },
        { "data_is_empty" : { "data" : [ "account:profile-cv" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "profile2", "param_type" : "cv", "param_user" : [ "account" ] },
            "PROVIDE" : { "entity_created" : { "cv" : "CV" } }
          }
        },
        { "entity_save" : { "data" : [ "cv" ], "immediate" : 1 } }
      ]
    }
  }');
  return $items;
}
