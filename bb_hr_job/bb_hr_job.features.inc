<?php
/**
 * @file
 * bb_hr_job.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bb_hr_job_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Standaard job.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
