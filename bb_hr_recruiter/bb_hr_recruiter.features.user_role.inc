<?php
/**
 * @file
 * bb_hr_recruiter.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bb_hr_recruiter_user_default_roles() {
  $roles = array();

  // Exported role: recruiter.
  $roles['recruiter'] = array(
    'name' => 'recruiter',
    'weight' => 3,
    'machine_name' => '',
  );

  return $roles;
}
