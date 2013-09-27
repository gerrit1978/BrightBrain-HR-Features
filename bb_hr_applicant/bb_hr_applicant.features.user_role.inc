<?php
/**
 * @file
 * bb_hr_applicant.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bb_hr_applicant_user_default_roles() {
  $roles = array();

  // Exported role: applicant.
  $roles['applicant'] = array(
    'name' => 'applicant',
    'weight' => 4,
    'machine_name' => '',
  );

  return $roles;
}
