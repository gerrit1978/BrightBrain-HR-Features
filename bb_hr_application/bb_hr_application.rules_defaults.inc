<?php
/**
 * @file
 * bb_hr_application.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bb_hr_application_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_job_add_application'] = entity_import('rules_config', '{ "rules_link_condition_job_add_application" : {
      "LABEL" : "Rules link: Job Add Application condition",
      "PLUGIN" : "and",
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "AND" : []
    }
  }');
  $items['rules_link_set_job_add_application'] = entity_import('rules_config', '{ "rules_link_set_job_add_application" : {
      "LABEL" : "Rules link: Job Add Application rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [ { "redirect" : { "url" : "node\\/[node:nid]\\/apply" } } ],
            "LABEL" : "Redirect to job application"
          }
        }
      ]
    }
  }');
  return $items;
}
