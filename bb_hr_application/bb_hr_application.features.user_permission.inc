<?php
/**
 * @file
 * bb_hr_application.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bb_hr_application_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link job_add_application'.
  $permissions['access rules link job_add_application'] = array(
    'name' => 'access rules link job_add_application',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'applicant' => 'applicant',
    ),
    'module' => 'rules_link',
  );

  return $permissions;
}
