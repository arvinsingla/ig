<?php
/**
 * @file
 * Enables modules and site configuration for a staples site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function staples_form_install_configure_form_alter(&$form, $form_state) {
  // Set initial Regional/Timezone settings.
  $form['regional_settings']['site_default_country']['#default_value'] = 'US';
  // Source: https://www.drupal.org/node/1017020#comment-6897960
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/New_York';
  unset($form['server_settings']['date_default_timezone']['#attributes']);
}

/**
 * Implements hook_environment().

function staples_environment() {
  $environments = array();
  $environments['local'] = array(
    'label' => t('Local'),
    'description' => t('Private development environment.'),
  );
  $environments['dev'] = array(
    'label' => t('Development'),
    'description' => t('Code integration and developer testing'),
  );
  $environments['stage'] = array(
    'label' => t('Staging'),
    'description' => t('Content creation before publication.'),
  );
  $environment['prod'] = array(
    'label' => t('Production'),
    'description' => t('Full production and browsable on the web.'),
    'workflow' => 'public',
  );
  return $environments;
}
 */

/**
 * Implements hook_environment_switch().

function staples_environment_switch($target_env, $current_env, $workflow = NULL) {
  // Declare development-related modules.
  $dev_modules = array(
    'stp_dev',
    'devel',
    'coder',
    'coder_review',
  );

  // Control behavior on an env switch.
  switch ($target_env) {
    case 'local':
    case 'dev':
    case 'stage':
      // Enable modules.
      module_enable($dev_modules);
      drupal_set_message('Enabled development modules.');
      break;

    case 'prod':
      module_disable($dev_modules);
      drupal_uninstall_modules($dev_modules);
      drupal_set_message('Uninstalled development modules.');
      break;
  }
}
*/
