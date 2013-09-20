<?php
/**
 * @file
 * bb_hr_admin.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bb_hr_admin_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'Het <em>Beheermenu</em> bevat links voor beheertaken.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Het <em>Beheermenu</em> bevat links voor beheertaken.');
  t('Management');


  return $menus;
}
