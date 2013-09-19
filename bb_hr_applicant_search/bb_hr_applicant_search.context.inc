<?php
/**
 * @file
 * bb_hr_applicant_search.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bb_hr_applicant_search_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cv_search';
  $context->description = 'Resume (CV) search blocks';
  $context->tag = 'BrightBrain';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'cvs' => 'cvs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-WL0kqei4KMLnhPjToM8QoegQ81LNt0Yq' => array(
          'module' => 'facetapi',
          'delta' => 'WL0kqei4KMLnhPjToM8QoegQ81LNt0Yq',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-cP1XhxsueQ9wP41iDOFYvIH6Zn7ek6iE' => array(
          'module' => 'facetapi',
          'delta' => 'cP1XhxsueQ9wP41iDOFYvIH6Zn7ek6iE',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-s11nW6SMC0RkefDyecCod10JLqE4Y3Z2' => array(
          'module' => 'facetapi',
          'delta' => 's11nW6SMC0RkefDyecCod10JLqE4Y3Z2',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-RSyJnFUNWYW0ZwvUiWVJDs0XQFNY6bw7' => array(
          'module' => 'facetapi',
          'delta' => 'RSyJnFUNWYW0ZwvUiWVJDs0XQFNY6bw7',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-h0ha0YGev69ZaTdv5GHvqXnUYYQlCaZb' => array(
          'module' => 'facetapi',
          'delta' => 'h0ha0YGev69ZaTdv5GHvqXnUYYQlCaZb',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-IDC8lQzrEb1kt0SJbKXR0Qxzs0k6vWlv' => array(
          'module' => 'facetapi',
          'delta' => 'IDC8lQzrEb1kt0SJbKXR0Qxzs0k6vWlv',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-0luSsbhlWYgSpGR1UFBLKm1lWTx8NnrV' => array(
          'module' => 'facetapi',
          'delta' => '0luSsbhlWYgSpGR1UFBLKm1lWTx8NnrV',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-a6JyMIBhYqLNDBDn1zbIrwPB9mgrM6r6' => array(
          'module' => 'facetapi',
          'delta' => 'a6JyMIBhYqLNDBDn1zbIrwPB9mgrM6r6',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('BrightBrain');
  t('Resume (CV) search blocks');
  $export['cv_search'] = $context;

  return $export;
}
