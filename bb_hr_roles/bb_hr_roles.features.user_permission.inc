<?php
/**
 * @file
 * bb_hr_roles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bb_hr_roles_user_default_permissions() {
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

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
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

  // Exported permission: 'edit any cv profile'.
  $permissions['edit any cv profile'] = array(
    'name' => 'edit any cv profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any job content'.
  $permissions['edit any job content'] = array(
    'name' => 'edit any job content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cv profile'.
  $permissions['edit own cv profile'] = array(
    'name' => 'edit own cv profile',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'profile2',
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

  // Exported permission: 'view any cv profile'.
  $permissions['view any cv profile'] = array(
    'name' => 'view any cv profile',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own cv profile'.
  $permissions['view own cv profile'] = array(
    'name' => 'view own cv profile',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'profile2',
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
