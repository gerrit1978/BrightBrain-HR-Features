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
      'recruiter' => 'recruiter',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link job_unpublish'.
  $permissions['access rules link job_unpublish'] = array(
    'name' => 'access rules link job_unpublish',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'create job content'.
  $permissions['create job content'] = array(
    'name' => 'create job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any job content'.
  $permissions['delete any job content'] = array(
    'name' => 'delete any job content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any job content'.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own job content'.
  $permissions['edit own job content'] = array(
    'name' => 'edit own job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'node',
  );

  return $permissions;
}
