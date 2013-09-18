<?php
/**
 * @file
 * bb_hr_applicant.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bb_hr_applicant_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_cv_attachment_file'.
  $permissions['create field_cv_attachment_file'] = array(
    'name' => 'create field_cv_attachment_file',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cv_pers_photo'.
  $permissions['create field_cv_pers_photo'] = array(
    'name' => 'create field_cv_pers_photo',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cv_attachment_file'.
  $permissions['edit field_cv_attachment_file'] = array(
    'name' => 'edit field_cv_attachment_file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cv_pers_photo'.
  $permissions['edit field_cv_pers_photo'] = array(
    'name' => 'edit field_cv_pers_photo',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: 'edit own field_cv_attachment_file'.
  $permissions['edit own field_cv_attachment_file'] = array(
    'name' => 'edit own field_cv_attachment_file',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cv_pers_photo'.
  $permissions['edit own field_cv_pers_photo'] = array(
    'name' => 'edit own field_cv_pers_photo',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cv_attachment_file'.
  $permissions['view field_cv_attachment_file'] = array(
    'name' => 'view field_cv_attachment_file',
    'roles' => array(
      'administrator' => 'administrator',
      'recruiter' => 'recruiter',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cv_pers_photo'.
  $permissions['view field_cv_pers_photo'] = array(
    'name' => 'view field_cv_pers_photo',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
      'recruiter' => 'recruiter',
    ),
    'module' => 'field_permissions',
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

  // Exported permission: 'view own field_cv_attachment_file'.
  $permissions['view own field_cv_attachment_file'] = array(
    'name' => 'view own field_cv_attachment_file',
    'roles' => array(
      'administrator' => 'administrator',
      'applicant' => 'applicant',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cv_pers_photo'.
  $permissions['view own field_cv_pers_photo'] = array(
    'name' => 'view own field_cv_pers_photo',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
