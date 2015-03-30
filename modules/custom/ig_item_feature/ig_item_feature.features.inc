<?php
/**
 * @file
 * ig_item_feature.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ig_item_feature_node_info() {
  $items = array(
    'ig' => array(
      'name' => t('Instragram Item'),
      'base' => 'node_content',
      'description' => t('An instragram item (photo or video)'),
      'has_title' => '1',
      'title_label' => t('id'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
