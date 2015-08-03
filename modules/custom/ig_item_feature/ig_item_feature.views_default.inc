<?php
/**
 * @file
 * ig_item_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ig_item_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'api';
  $view->description = 'API endpoints';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'API';
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
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Hashtag */
  $handler->display->display_options['fields']['field_event_hashtag']['id'] = 'field_event_hashtag';
  $handler->display->display_options['fields']['field_event_hashtag']['table'] = 'field_data_field_event_hashtag';
  $handler->display->display_options['fields']['field_event_hashtag']['field'] = 'field_event_hashtag';
  $handler->display->display_options['fields']['field_event_hashtag']['label'] = 'hashtag';
  $handler->display->display_options['fields']['field_event_hashtag']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['arguments']['field_ig_event_target_id']['specify_validation'] = TRUE;
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

  /* Display: Event Items */
  $handler = $view->new_display('page', 'Event Items', 'items');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_ig_caption']['id'] = 'field_ig_caption';
  $handler->display->display_options['fields']['field_ig_caption']['table'] = 'field_data_field_ig_caption';
  $handler->display->display_options['fields']['field_ig_caption']['field'] = 'field_ig_caption';
  $handler->display->display_options['fields']['field_ig_caption']['label'] = 'caption';
  /* Field: Content: Full Name */
  $handler->display->display_options['fields']['field_ig_fullname']['id'] = 'field_ig_fullname';
  $handler->display->display_options['fields']['field_ig_fullname']['table'] = 'field_data_field_ig_fullname';
  $handler->display->display_options['fields']['field_ig_fullname']['field'] = 'field_ig_fullname';
  $handler->display->display_options['fields']['field_ig_fullname']['label'] = 'fullName';
  /* Field: Content: Item */
  $handler->display->display_options['fields']['field_ig_item']['id'] = 'field_ig_item';
  $handler->display->display_options['fields']['field_ig_item']['table'] = 'field_data_field_ig_item';
  $handler->display->display_options['fields']['field_ig_item']['field'] = 'field_ig_item';
  $handler->display->display_options['fields']['field_ig_item']['label'] = 'item';
  /* Field: Content: Profile Picture */
  $handler->display->display_options['fields']['field_ig_profile']['id'] = 'field_ig_profile';
  $handler->display->display_options['fields']['field_ig_profile']['table'] = 'field_data_field_ig_profile';
  $handler->display->display_options['fields']['field_ig_profile']['field'] = 'field_ig_profile';
  $handler->display->display_options['fields']['field_ig_profile']['label'] = 'profilePicture';
  /* Field: Content: User Name */
  $handler->display->display_options['fields']['field_ig_username']['id'] = 'field_ig_username';
  $handler->display->display_options['fields']['field_ig_username']['table'] = 'field_data_field_ig_username';
  $handler->display->display_options['fields']['field_ig_username']['field'] = 'field_ig_username';
  $handler->display->display_options['fields']['field_ig_username']['label'] = 'userName';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['path'] = 'api/event/%';
  $export['api'] = $view;

  return $export;
}
