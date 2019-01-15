<?php

/**
 * @file
 * Include variable info for email domain validate mxr module.
 */

/**
 * Implements hook_variable_info().
 */
function email_domain_validate_mxr_variable_info($options = array()) {
  $variables['email_domain_validate_mxr_error_message'] = array(
    'title' => t('Email Domain Validate MXR Error Message'),
    'description' => t('Configurable error message to display when validation fails.'),
    'type' => 'string',
    'default' => EMAIL_DOMAIN_VALIDATE_MXR_DEFAULT_ERROR_MESSAGE,
    'localize' => TRUE,
    'group' => 'email_domain_validate_mxr',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function email_domain_validate_mxr_variable_group_info() {
  $groups['email_domain_validate_mxr'] = array(
    'title' => t('Email Domain Validate MXR'),
    'description' => t('Email domain validate mxr variables.'),
    'access' => 'administer email domain validate mxr configuration',
    'path' => array('admin/config/development/email-domain-validate-mxr/configure'),
  );

  return $groups;
}
