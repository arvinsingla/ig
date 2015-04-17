<?php
/**
 * @file
 * ig_item_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ig_item_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any ig content'.
  $permissions['view any ig content'] = array(
    'name' => 'view any ig content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own ig content'.
  $permissions['view own ig content'] = array(
    'name' => 'view own ig content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  return $permissions;
}
