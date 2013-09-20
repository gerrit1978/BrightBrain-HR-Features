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
  $items['rules_cv_initialize'] = entity_import('rules_config', '{ "rules_cv_initialize" : {
      "LABEL" : "CV initialize",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [], "user_insert" : [] },
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
  $items['rules_cv_set_label'] = entity_import('rules_config', '{ "rules_cv_set_label" : {
      "LABEL" : "CV Set label",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "profile2" ],
      "ON" : { "profile2_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "profile2:type" ], "value" : "cv" } },
        { "NOT data_is_empty" : { "data" : [ "profile2:field-cv-job-preferences" ] } },
        { "NOT data_is" : {
            "data" : [ "profile2:label" ],
            "value" : [ "profile2:field-cv-job-preferences:field-cv-pref-desired-job-title" ]
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "profile2:label" ],
            "value" : [ "profile2:field-cv-job-preferences:field-cv-pref-desired-job-title" ]
          }
        }
      ]
    }
  }');
  return $items;
}
