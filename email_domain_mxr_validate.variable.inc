<?php

/**
 * @file
 * Include variable info for email domain mxr validate module.
 */

/**
 * Implements hook_variable_info().
 */
function email_domain_mxr_validate_variable_info($options = array()) {
  $variables['email_domain_mxr_validate_error_message'] = array(
    'title' => t('Email Domain MXR Validate Error Message'),
    'description' => t('Configurable error message to display when validation fails.'),
    'type' => 'string',
    'default' => EMAIL_DOMAIN_MXR_VALIDATE_DEFAULT_ERROR_MESSAGE,
    'localize' => TRUE,
    'group' => 'email_domain_mxr_validation',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function email_domain_mxr_validate_variable_group_info() {
  $groups['email_domain_mxr_validation'] = array(
    'title' => t('Email Domain MXR Validation'),
    'description' => t('Email domain mxr validation variables.'),
    'access' => 'administer email domain mxr validate configuration',
    'path' => array('admin/config/development/email-domain-mxr-validate/configure'),
  );

  return $groups;
}
