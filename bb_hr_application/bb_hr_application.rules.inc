<?php

/**
 * @file
 * Rules integration for Recruiter Job Application.
 */

/**
 * Implements hook_rules_condition_info().
 */
function bb_hr_application_rules_condition_info() {
  return array(
    'bb_hr_application_exists_job' => array(
      'label' => t('Job application exists for job'),
      'group' => t('BB HR job application'),
      'parameter' => array(
        'applicant' => array(
          'label' => t('Applicant'),
          'description' => t('The applicant/user who has the application.'),
          'type' => 'user',
        ),
        'job' => array(
          'label' => t('Job'),
          'description' => t('The job for which the application should be.'),
          'type' => 'node',
        ),
      ),
      'base' => 'bb_hr_application_exists_for_job',
    ),
  );
}
