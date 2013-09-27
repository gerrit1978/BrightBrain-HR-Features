<?php
/**
 * @file
 * bb_hr_recruiter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bb_hr_recruiter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access rules link application_put_in_shortlist'.
  $permissions['access rules link application_put_in_shortlist'] = array(
    'name' => 'access rules link application_put_in_shortlist',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link application_remove_from_shortlis'.
  $permissions['access rules link application_remove_from_shortlis'] = array(
    'name' => 'access rules link application_remove_from_shortlis',
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

  // Exported permission: 'delete own job content'.
  $permissions['delete own job content'] = array(
    'name' => 'delete own job content',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
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

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'system',
  );

  return $permissions;
}
