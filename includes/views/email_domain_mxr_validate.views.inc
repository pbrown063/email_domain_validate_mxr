<?php

/**
 * @file
 * Views file for email domain mxr validate failures.
 */

/**
 * Default email domain mxr validate views.
 *
 * @return array
 *   Returns the $view.
 */
function email_domain_mxr_validate_views_default_views() {
  if (!variable_get('email_domain_mxr_validate_fail_entity_creation', FALSE)) {
    return array();
  }
  $views = array();

  $email_domain_mxr_validate_view = email_domain_mxr_validate_failures_view();
  $views[$email_domain_mxr_validate_view->name] = $email_domain_mxr_validate_view;

  return $views;
}

/**
 * View for email domain mxr validation errors.
 *
 * @return \view
 *   Returns the $view object for drupal to import.
 */
function email_domain_mxr_validate_failures_view() {
  $view = new view();
  $view->name = 'email_domain_mxr_validate_failures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'email_domain_mxr_validate_fail';
  $view->human_name = 'Email Domain MXR Validate Failures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Email Domain MXR Validate Failures';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access email domain mxr validation failure report';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Email Domain MXR Validate Fail: Uid */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Email Domain MXR Validate Fail: Email domain mxr validate fail ID */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Email Domain MXR Validate Fail: Email_address */
  $handler->display->display_options['fields']['email_address']['id'] = 'email_address';
  $handler->display->display_options['fields']['email_address']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['fields']['email_address']['field'] = 'email_address';
  $handler->display->display_options['fields']['email_address']['label'] = 'Offending Email Address';
  /* Field: Email Domain MXR Validate Fail: Form_id */
  $handler->display->display_options['fields']['form_id']['id'] = 'form_id';
  $handler->display->display_options['fields']['form_id']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['fields']['form_id']['field'] = 'form_id';
  $handler->display->display_options['fields']['form_id']['label'] = 'Offending Form ID';
  /* Field: Email Domain MXR Validate Fail: Timestamp */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'custom';
  $handler->display->display_options['fields']['timestamp']['custom_date_format'] = 'M d Y - H:i';
  $handler->display->display_options['fields']['timestamp']['second_date_format'] = 'long';
  /* Field: Email Domain MXR Validate Fail: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Submitting User';
  /* Sort criterion: Email Domain MXR Validate Fail: Timestamp */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'uid';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['group'] = 1;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['description'] = 'Submitting user contains';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
  );
  /* Filter criterion: Email Domain MXR Validate Fail: Email_address */
  $handler->display->display_options['filters']['email_address']['id'] = 'email_address';
  $handler->display->display_options['filters']['email_address']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['filters']['email_address']['field'] = 'email_address';
  $handler->display->display_options['filters']['email_address']['operator'] = 'contains';
  $handler->display->display_options['filters']['email_address']['group'] = 1;
  $handler->display->display_options['filters']['email_address']['exposed'] = TRUE;
  $handler->display->display_options['filters']['email_address']['expose']['operator_id'] = 'email_address_op';
  $handler->display->display_options['filters']['email_address']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['email_address']['expose']['description'] = 'Offending email contains';
  $handler->display->display_options['filters']['email_address']['expose']['operator'] = 'email_address_op';
  $handler->display->display_options['filters']['email_address']['expose']['identifier'] = 'email_address';
  $handler->display->display_options['filters']['email_address']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
  );
  /* Filter criterion: Date: Date (email_domain_mxr_validate_fail) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Time WIndow Start Date';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'email_domain_mxr_validate_fail.timestamp' => 'email_domain_mxr_validate_fail.timestamp',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  /* Filter criterion: Date: Date (email_domain_mxr_validate_fail) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'email_domain_mxr_validate_fail';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '<=';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Time Window End Date';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
    14 => 0,
    15 => 0,
    16 => 0,
    17 => 0,
    18 => 0,
    19 => 0,
    20 => 0,
    21 => 0,
    22 => 0,
    23 => 0,
    24 => 0,
    25 => 0,
    26 => 0,
    27 => 0,
    28 => 0,
    29 => 0,
    30 => 0,
    31 => 0,
    32 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'email_domain_mxr_validate_fail.timestamp' => 'email_domain_mxr_validate_fail.timestamp',
  );
  $handler->display->display_options['filters']['date_filter_1']['date_method'] = 'AND';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  // Do not overwrite this configurable path.
  $handler->display->display_options['path'] = variable_get('email_domain_mxr_validate_report_path', '');
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Email Domain MXR Validate Failures';
  $handler->display->display_options['menu']['name'] = 'management';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  // Do not overwrite this configurable path.
  $handler->display->display_options['path'] = variable_get('email_domain_mxr_validate_report_path', '') . '/export.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  // Do not overwrite this configurable path.
  $handler->display->display_options['return_path'] = variable_get('email_domain_mxr_validate_report_path', '');
  $handler->display->display_options['segment_size'] = '50';
  $translatables['email_domain_mxr_validate_failures'] = array(
    t('Master'),
    t('Email Domain MXR Validate Failures'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User'),
    t('Email domain mxr validate fail ID'),
    t('.'),
    t(','),
    t('Offending Email Address'),
    t('Offending Form ID'),
    t('Timestamp'),
    t('Uid'),
    t('Submitting User'),
    t('Name'),
    t('Submitting user contains'),
    t('Email'),
    t('Offending email contains'),
    t('Time WIndow Start Date'),
    t('Time Window End Date'),
    t('Page'),
    t('Data export'),
  );

  return $view;
}
