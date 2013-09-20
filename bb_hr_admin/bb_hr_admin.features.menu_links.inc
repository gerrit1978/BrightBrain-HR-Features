<?php
/**
 * @file
 * bb_hr_admin.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bb_hr_admin_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/bb-hr
  $menu_links['management:admin/bb-hr'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/bb-hr',
    'router_path' => 'admin/bb-hr',
    'link_title' => 'BB HR Admin',
    'options' => array(
      'attributes' => array(
        'title' => 'Administer HR content.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -11,
    'parent_path' => 'admin',
  );
  // Exported menu link: management:admin/bb-hr/cv
  $menu_links['management:admin/bb-hr/cv'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/bb-hr/cv',
    'router_path' => 'admin/bb-hr/cv',
    'link_title' => 'CV administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage all CVs on your site.',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'admin/bb-hr',
  );
  // Exported menu link: management:admin/bb-hr/users
  $menu_links['management:admin/bb-hr/users'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/bb-hr/users',
    'router_path' => 'admin/bb-hr/users',
    'link_title' => 'User administration',
    'options' => array(
      'attributes' => array(
        'title' => 'Manage users',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'parent_path' => 'admin/bb-hr',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('BB HR Admin');
  t('CV administration');
  t('User administration');


  return $menu_links;
}
