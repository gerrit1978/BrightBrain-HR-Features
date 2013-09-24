<?php
/**
 * @file
 * bb_hr_application.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bb_hr_application_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'admin_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Admin Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Admin Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_application_job_ref_target_id']['id'] = 'field_application_job_ref_target_id';
  $handler->display->display_options['relationships']['field_application_job_ref_target_id']['table'] = 'field_data_field_application_job_ref';
  $handler->display->display_options['relationships']['field_application_job_ref_target_id']['field'] = 'field_application_job_ref_target_id';
  $handler->display->display_options['relationships']['field_application_job_ref_target_id']['label'] = 'Job';
  $handler->display->display_options['relationships']['field_application_job_ref_target_id']['required'] = TRUE;
  /* Relationship: Inhoud: Auteur */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Gebruiker: Profiel */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'cv' => 'cv',
  );
  /* Relationship: Profiel: Personal Information (field_cv_personal_information) */
  $handler->display->display_options['relationships']['field_cv_personal_information_value']['id'] = 'field_cv_personal_information_value';
  $handler->display->display_options['relationships']['field_cv_personal_information_value']['table'] = 'field_data_field_cv_personal_information';
  $handler->display->display_options['relationships']['field_cv_personal_information_value']['field'] = 'field_cv_personal_information_value';
  $handler->display->display_options['relationships']['field_cv_personal_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_cv_personal_information_value']['delta'] = '0';
  /* Veld: Gebruiker: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Veld: Inhoud: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Veld: Inhoud: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_application_job_ref_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Job Title';
  /* Veld: Field collection item: Firstname */
  $handler->display->display_options['fields']['field_cv_pers_firstname']['id'] = 'field_cv_pers_firstname';
  $handler->display->display_options['fields']['field_cv_pers_firstname']['table'] = 'field_data_field_cv_pers_firstname';
  $handler->display->display_options['fields']['field_cv_pers_firstname']['field'] = 'field_cv_pers_firstname';
  $handler->display->display_options['fields']['field_cv_pers_firstname']['relationship'] = 'field_cv_personal_information_value';
  $handler->display->display_options['fields']['field_cv_pers_firstname']['exclude'] = TRUE;
  /* Veld: Field collection item: Lastname */
  $handler->display->display_options['fields']['field_cv_pers_lastname']['id'] = 'field_cv_pers_lastname';
  $handler->display->display_options['fields']['field_cv_pers_lastname']['table'] = 'field_data_field_cv_pers_lastname';
  $handler->display->display_options['fields']['field_cv_pers_lastname']['field'] = 'field_cv_pers_lastname';
  $handler->display->display_options['fields']['field_cv_pers_lastname']['relationship'] = 'field_cv_personal_information_value';
  $handler->display->display_options['fields']['field_cv_pers_lastname']['label'] = 'Applicant';
  $handler->display->display_options['fields']['field_cv_pers_lastname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cv_pers_lastname']['alter']['text'] = '[field_cv_pers_firstname] [field_cv_pers_lastname]';
  $handler->display->display_options['fields']['field_cv_pers_lastname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cv_pers_lastname']['alter']['path'] = 'profile-cv/[uid]';
  /* Sort criterion: Inhoud: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Inhoud: Gepubliceerd */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Inhoud: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/bb-hr/applications';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Applications Administration';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['admin_applications'] = array(
    t('Master'),
    t('Admin Applications'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« eerste'),
    t('‹ vorige'),
    t('volgende ›'),
    t('laatste »'),
    t('Job'),
    t('author'),
    t('Profiel'),
    t('field collection item from field_cv_personal_information'),
    t('Post date'),
    t('Titel'),
    t('Job Title'),
    t('Firstname'),
    t('Applicant'),
    t('[field_cv_pers_firstname] [field_cv_pers_lastname]'),
    t('Page'),
  );
  $export['admin_applications'] = $view;

  return $export;
}
