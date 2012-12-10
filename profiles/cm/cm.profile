<?php

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function cm_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

function cm_install_tasks() {
  return array(
    'cm_initialize_content_types' => array(
      'display_name' => st('Initialize Content Types'),
      'type' => 'normal',
    ),
    'cm_initialize_taxonomy_terms' => array(
      'display_name' => st('Initialize Taxonomy Terms'),
      'type' => 'normal',
    ),
    'cm_initialize_themes' => array(
      'display_name' => st('Initialize Themes'),
      'type' => 'normal',
    ),
    'cm_initialize_front_page' => array(
      'display_name' => st('Initialize Front Page'),
      'type' => 'normal',
    ),
  );
}

/**
 * Initialize default content types.
 */
function cm_initialize_content_types() {
  cm_log('Initializing content types');
  node_type_delete('page');
}

/**
 * Initialize default taxonomy terms.
 */
function cm_initialize_taxonomy_terms() {
  cm_log('Initializing taxonomy terms');
  // _cm_create_taxonomy_term($vid, $name, $tid)

  _cm_create_taxonomy_term(1, 'Sample Content', 1);
  _cm_create_taxonomy_term(1, 'Documentation', 2);
  _cm_create_taxonomy_term(1, 'Getting Started', 3);
  _cm_create_taxonomy_term(1, 'Customization', 4);
}

/**
 * Initialize default theme and admin theme.
 */
function cm_initialize_themes() {
  cm_log('Initializing themes');
  // Set the default and admin themes
  variable_set("theme_default", "cm_theme");
  //variable_set("admin_theme", "rubik");
  variable_set("node_admin_theme", '1');
  theme_enable(array("cm_theme"));
}

/**
 * Initialize the front page.
 */
function cm_initialize_front_page() {
  // Force cron to run here or else EntityFieldQuery won't find any nodes
  drupal_cron_run();

  cm_log('Initializing front page');
 
  // Find the front page by Title
  $query = new EntityFieldQuery;
  $result = $query
    ->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'cm_page')
    ->propertyCondition('title', 'Welcome to Cm', '=')
    ->execute();
  if ($result['node']) {
    $result = array_shift($result['node']);
    variable_set('site_frontpage', 'node/' . $result->nid); // Set the front page
  }
}

function _cm_create_taxonomy_term($vid, $name, $tid) {
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  taxonomy_term_save($term);
  return $term->tid;
}

/**
 * Log a message, environment agnostic.
 *
 * @param $message
 *   The message to log.
 * @param $severity
 *   The severity of the message: status, warning or error.
 */
function cm_log($message, $severity = 'status') {
  if (function_exists('drush_verify_cli')) {
    $message = strip_tags($message);
    if ($severity == 'status') {
      $severity = 'ok';
    }
    elseif ($severity == 'error') {
      drush_set_error($message);
      return;
    }
    drush_log($message, $severity);
    return;
  }
  drupal_set_message($message, $severity, FALSE);
}

