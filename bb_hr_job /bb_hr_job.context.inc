<?php
/**
 * @file
 * bb_hr_job.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bb_hr_job_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'job_detail_page';
  $context->description = 'Add blocks to job detail page';
  $context->tag = 'BrightBrain';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'job' => 'job',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bb_hr_job-bb_hr_job_linkedin' => array(
          'module' => 'bb_hr_job',
          'delta' => 'bb_hr_job_linkedin',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add blocks to job detail page');
  t('BrightBrain');
  $export['job_detail_page'] = $context;

  return $export;
}
