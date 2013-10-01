<?php
/**
 * @file
 * bb_hr_job.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bb_hr_job_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link job_publish'.
  $permissions['access rules link job_publish'] = array(
    'name' => 'access rules link job_publish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link job_unpublish'.
  $permissions['access rules link job_unpublish'] = array(
    'name' => 'access rules link job_unpublish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules_link',
  );

  return $permissions;
}
