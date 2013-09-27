<?php
/**
 * @file
 * bb_hr_job.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function bb_hr_job_default_rules_configuration() {
  $items = array();
  $items['rules_link_condition_job_publish'] = entity_import('rules_config', '{ "rules_link_condition_job_publish" : {
      "LABEL" : "Rules link: Job Publish condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "30037204" : "30037204", "100482362" : "100482362" } },
            "operation" : "OR"
          }
        },
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "job" : "job" } } } },
        { "data_is" : { "data" : [ "node:field-job-workflow-state" ], "value" : "unpublished" } }
      ]
    }
  }');
  $items['rules_link_condition_job_unpublish'] = entity_import('rules_config', '{ "rules_link_condition_job_unpublish" : {
      "LABEL" : "Rules link: Job Unpublish condition",
      "PLUGIN" : "and",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "30037204" : "30037204", "100482362" : "100482362" } },
            "operation" : "OR"
          }
        },
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "job" : "job" } } } },
        { "data_is" : { "data" : [ "node:field-job-workflow-state" ], "value" : "published" } }
      ]
    }
  }');
  $items['rules_link_set_job_publish'] = entity_import('rules_config', '{ "rules_link_set_job_publish" : {
      "LABEL" : "Rules link: Job Publish rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "node:type" ], "value" : "job" } } ],
            "DO" : [
              { "drupal_message" : { "message" : "The job has been published." } },
              { "data_set" : { "data" : [ "node:field-job-workflow-state" ], "value" : "published" } }
            ],
            "LABEL" : "Publish Job"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_job_unpublish'] = entity_import('rules_config', '{ "rules_link_set_job_unpublish" : {
      "LABEL" : "Rules link: Job Unpublish rules set",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [ { "data_is" : { "data" : [ "node:type" ], "value" : "job" } } ],
            "DO" : [
              { "drupal_message" : { "message" : "Job has been unpublished." } },
              { "data_set" : { "data" : [ "node:field-job-workflow-state" ], "value" : "unpublished" } }
            ],
            "LABEL" : "Unpublish job"
          }
        }
      ]
    }
  }');
  return $items;
}
