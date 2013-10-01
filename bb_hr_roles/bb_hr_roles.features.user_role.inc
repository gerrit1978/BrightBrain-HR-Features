<?php
/**
 * @file
 * bb_hr_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bb_hr_roles_user_default_roles() {
  $roles = array();

  // Exported role: applicant.
  $roles['applicant'] = array(
    'name' => 'applicant',
    'weight' => 4,
    'machine_name' => '',
  );

  // Exported role: recruiter.
  $roles['recruiter'] = array(
    'name' => 'recruiter',
    'weight' => 3,
    'machine_name' => '',
  );

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 5,
    'machine_name' => '',
  );

  return $roles;
}
