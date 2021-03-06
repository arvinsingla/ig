<?php

/**
 * @file
 * template.php
 */

/**
 * Implements hook_form_alter().
 */
function ig_theme_form_alter(&$form, &$form_state, $form_id) {
  // dpm($form);
  switch($form_id) {
    case 'ig_purchase_event_form':
      $form['event']['hashtag']['#input_group'] = TRUE;
      $form['event']['hashtag']['#field_prefix'] = '#';
      $form['credit_card']['exp_month']['#prefix'] = '<div class="row"><div class="col-xs-6">';
      $form['credit_card']['exp_month']['#suffix'] = '</div>';
      $form['credit_card']['exp_year']['#prefix'] = '<div class="col-xs-6">';
      $form['credit_card']['exp_year']['#suffix'] = '</div></div>';
      $form['submit']['#value'] = '<span class="glyphicon glyphicon-ok" aria-hidden="true"></span> ' . t('Submit');
      $form['submit']['#attributes'] = array(
        'class' => array(
          'pull-right',
        ),
      );
      break;

    case 'ig_event_feature_publish_form':
      $form['publish_event']['#attributes'] = array(
        'class' => array(
          'btn-success'
        )
      );
      break;

    case strpos($form_id, 'ig_item_feature_remove_event_form'):
      $form['remove_event']['#value'] = '<span class="glyphicon glyphicon-remove" aria-hidden="true"></span>';
      $form['remove_event']['#attributes'] = array(
        'class' => array(
          'btn-sm',
        ),
      );
      $form['remove_event']['#ajax'] = array(
        'callback' => 'ig_theme_form_remove_event_callback',
      );
      break;
  }
}

/**
 * Remove event callback.
 */
function ig_theme_form_remove_event_callback($form, $form_state) {
  $commands = array();
  $commands[] = ajax_command_remove('#grid-col-' . $form_state['values']['item_nid']);
  return array(
    '#type' => 'ajax',
    '#commands' => $commands,
  );
}