<?php

/**
 * @file
 * template.php
 */


/**
 * Implements hook_css_alter().
 */
function ig_live_theme_css_alter(&$css) {
  if (arg(0) == 'live' && is_numeric(arg(1))) {
    /* Remove some default Drupal css */
    $exclude = array(
      'modules/aggregator/aggregator.css' => FALSE,
      'modules/block/block.css' => FALSE,
      'modules/book/book.css' => FALSE,
      'modules/comment/comment.css' => FALSE,
      'modules/dblog/dblog.css' => FALSE,
      'modules/field/theme/field.css' => FALSE,
      'modules/file/file.css' => FALSE,
      'modules/filter/filter.css' => FALSE,
      'modules/forum/forum.css' => FALSE,
      'modules/help/help.css' => FALSE,
      'modules/menu/menu.css' => FALSE,
      'modules/node/node.css' => FALSE,
      'modules/openid/openid.css' => FALSE,
      'modules/poll/poll.css' => FALSE,
      'modules/profile/profile.css' => FALSE,
      'modules/search/search.css' => FALSE,
      'modules/statistics/statistics.css' => FALSE,
      'modules/syslog/syslog.css' => FALSE,
      'modules/system/admin.css' => FALSE,
      'modules/system/maintenance.css' => FALSE,
      'modules/system/system.css' => FALSE,
      'modules/system/system.admin.css' => FALSE,
      'modules/system/system.base.css' => FALSE,
      'modules/system/system.maintenance.css' => FALSE,
      'modules/system/system.messages.css' => FALSE,
      'modules/system/system.theme.css' => FALSE,
      'modules/system/system.menus.css' => FALSE,
      'modules/taxonomy/taxonomy.css' => FALSE,
      'modules/tracker/tracker.css' => FALSE,
      'modules/update/update.css' => FALSE,
      'modules/user/user.css' => FALSE,
      drupal_get_path('module', 'views') . '/css/views.css' => FALSE,
      drupal_get_path('module', 'ctools') . '/css/ctools.css' => FALSE,
      drupal_get_path('module', 'toolbar') . '/toolbar.css' => FALSE,
      drupal_get_path('module', 'date_api') . '/date.css' => FALSE,
    );
    $css = array_diff_key($css, $exclude);
  }
}