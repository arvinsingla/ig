<?php
/**
 * @file
 * ig_event_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ig_event_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = 'Collection of a users events';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'You do not have any events. <a href="/create">Click here to create an event</a>.';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Event';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Live';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Fetch */
  $handler->display->display_options['fields']['field_event_fetch']['id'] = 'field_event_fetch';
  $handler->display->display_options['fields']['field_event_fetch']['table'] = 'field_data_field_event_fetch';
  $handler->display->display_options['fields']['field_event_fetch']['field'] = 'field_event_fetch';
  $handler->display->display_options['fields']['field_event_fetch']['type'] = 'ig_event_field_fetch_formatter';
  /* Field: Content: Live */
  $handler->display->display_options['fields']['field_event_live']['id'] = 'field_event_live';
  $handler->display->display_options['fields']['field_event_live']['table'] = 'field_data_field_event_live';
  $handler->display->display_options['fields']['field_event_live']['field'] = 'field_event_live';
  $handler->display->display_options['fields']['field_event_live']['type'] = 'ig_event_field_live_formatter';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $export['events'] = $view;

  $view = new view();
  $view->name = 'manage_event';
  $view->description = 'Allow event owners to manage their images';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no images associated with this event.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Item */
  $handler->display->display_options['fields']['field_ig_item']['id'] = 'field_ig_item';
  $handler->display->display_options['fields']['field_ig_item']['table'] = 'field_data_field_ig_item';
  $handler->display->display_options['fields']['field_ig_item']['field'] = 'field_ig_item';
  $handler->display->display_options['fields']['field_ig_item']['label'] = '';
  $handler->display->display_options['fields']['field_ig_item']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ig_item']['alter']['text'] = '<img src="[field_ig_item-value]" width="200" height="200" />';
  $handler->display->display_options['fields']['field_ig_item']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ig_item']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_ig_event']['id'] = 'field_ig_event';
  $handler->display->display_options['fields']['field_ig_event']['table'] = 'field_data_field_ig_event';
  $handler->display->display_options['fields']['field_ig_event']['field'] = 'field_ig_event';
  $handler->display->display_options['fields']['field_ig_event']['label'] = '';
  $handler->display->display_options['fields']['field_ig_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ig_event']['type'] = 'ig_item_field_event_formatter';
  $handler->display->display_options['fields']['field_ig_event']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_ig_event']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Event (field_ig_event) */
  $handler->display->display_options['arguments']['field_ig_event_target_id']['id'] = 'field_ig_event_target_id';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['table'] = 'field_data_field_ig_event';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['field'] = 'field_ig_event_target_id';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_ig_event_target_id']['validate_options']['types'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['arguments']['field_ig_event_target_id']['validate']['fail'] = 'access denied';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ig' => 'ig',
  );
  $export['manage_event'] = $view;

  return $export;
}
