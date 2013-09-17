<?php
/**
 * @file
 * bb_hr_webmaster.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function bb_hr_webmaster_user_default_roles() {
  $roles = array();

  // Exported role: webmaster.
  $roles['webmaster'] = array(
    'name' => 'webmaster',
    'weight' => 5,
  );

  return $roles;
}
