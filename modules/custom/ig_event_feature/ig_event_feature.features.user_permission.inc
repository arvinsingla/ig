<?php
/**
 * @file
 * ig_event_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ig_event_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_event_id'.
  $permissions['create field_event_id'] = array(
    'name' => 'create field_event_id',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_event_payment'.
  $permissions['create field_event_payment'] = array(
    'name' => 'create field_event_payment',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_id'.
  $permissions['edit field_event_id'] = array(
    'name' => 'edit field_event_id',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_event_payment'.
  $permissions['edit field_event_payment'] = array(
    'name' => 'edit field_event_payment',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_id'.
  $permissions['edit own field_event_id'] = array(
    'name' => 'edit own field_event_id',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_event_payment'.
  $permissions['edit own field_event_payment'] = array(
    'name' => 'edit own field_event_payment',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view any event content'.
  $permissions['view any event content'] = array(
    'name' => 'view any event content',
    'roles' => array(),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view field_event_id'.
  $permissions['view field_event_id'] = array(
    'name' => 'view field_event_id',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_event_payment'.
  $permissions['view field_event_payment'] = array(
    'name' => 'view field_event_payment',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own event content'.
  $permissions['view own event content'] = array(
    'name' => 'view own event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node_view_permissions',
  );

  // Exported permission: 'view own field_event_id'.
  $permissions['view own field_event_id'] = array(
    'name' => 'view own field_event_id',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_event_payment'.
  $permissions['view own field_event_payment'] = array(
    'name' => 'view own field_event_payment',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  return $permissions;
}
