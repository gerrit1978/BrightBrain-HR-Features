<?php
/**
 * @file
 * bb_hr_recruiter.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bb_hr_recruiter_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_application_put_in_shortlist'] = entity_import('rules_config', '{ "rules_link_condition_application_put_in_shortlist" : {
      "LABEL" : "Rules link: Application Put in Shortlist condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_application_shortlist" } },
        { "data_is" : { "data" : [ "node:field-application-shortlist" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_condition_application_remove_from_shortlis'] = entity_import('rules_config', '{ "rules_link_condition_application_remove_from_shortlis" : {
      "LABEL" : "Rules link: Application Remove from Shortlist condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_application_shortlist" } },
        { "data_is" : { "data" : [ "node:field-application-shortlist" ], "value" : "1" } }
      ]
    }
  }');
  $items['rules_link_set_application_put_in_shortlist'] = entity_import('rules_config', '{ "rules_link_set_application_put_in_shortlist" : {
      "LABEL" : "Rules link: Application Put in Shortlist rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_application_shortlist" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-application-shortlist" ], "value" : "1" } }
            ],
            "LABEL" : "Put in Shortlist"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_application_remove_from_shortlis'] = entity_import('rules_config', '{ "rules_link_set_application_remove_from_shortlis" : {
      "LABEL" : "Rules link: Application Remove from Shortlist rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_application_shortlist" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-application-shortlist" ], "value" : "0" } }
            ],
            "LABEL" : "Remove from Shortlist"
          }
        }
      ]
    }
  }');
  return $items;
}
