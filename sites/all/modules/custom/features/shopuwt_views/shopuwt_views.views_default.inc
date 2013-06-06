<?php
/**
 * @file
 * shopuwt_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function shopuwt_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'location_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Location Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_location_location' => 'field_location_location',
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
    'field_location_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No results label';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_location']['id'] = 'field_location_location';
  $handler->display->display_options['fields']['field_location_location']['table'] = 'field_data_field_location_location';
  $handler->display->display_options['fields']['field_location_location']['field'] = 'field_location_location';
  $handler->display->display_options['fields']['field_location_location']['label'] = '';
  $handler->display->display_options['fields']['field_location_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_location']['type'] = 'gmaplink_formatter';
  $handler->display->display_options['fields']['field_location_location']['settings'] = array(
    'display_type' => 'addr_parts',
    'link_text' => 'Go to map',
    'addr_parts_display' => array(
      'thoroughfare' => 'thoroughfare',
      'locality' => 0,
      'administrative_area' => 0,
      'postal_code' => 0,
    ),
  );
  $handler->display->display_options['fields']['field_location_location']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['term_node_tid_depth']['set_breadcrumb'] = 0;
  $handler->display->display_options['arguments']['term_node_tid_depth']['use_taxonomy_term_path'] = 0;
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
    'location' => 'location',
  );
  /* Filter criterion: Content: Cost per person (field_location_cost) */
  $handler->display->display_options['filters']['field_location_cost_value']['id'] = 'field_location_cost_value';
  $handler->display->display_options['filters']['field_location_cost_value']['table'] = 'field_data_field_location_cost';
  $handler->display->display_options['filters']['field_location_cost_value']['field'] = 'field_location_cost_value';
  $handler->display->display_options['filters']['field_location_cost_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_cost_value']['expose']['operator_id'] = 'field_location_cost_value_op';
  $handler->display->display_options['filters']['field_location_cost_value']['expose']['label'] = 'Cost per person';
  $handler->display->display_options['filters']['field_location_cost_value']['expose']['operator'] = 'field_location_cost_value_op';
  $handler->display->display_options['filters']['field_location_cost_value']['expose']['identifier'] = 'field_location_cost_value';
  $handler->display->display_options['filters']['field_location_cost_value']['expose']['reduce'] = 0;

  /* Display: Location Listing Pane */
  $handler = $view->new_display('panel_pane', 'Location Listing Pane', 'panel_pane_1');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Deals */
  $handler = $view->new_display('page', 'Deals', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Awesome student deals';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'The following local retailers offer great deals to current UW Tacoma students. Just show your student ID to get in on the action.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_location']['id'] = 'field_location_location';
  $handler->display->display_options['fields']['field_location_location']['table'] = 'field_data_field_location_location';
  $handler->display->display_options['fields']['field_location_location']['field'] = 'field_location_location';
  $handler->display->display_options['fields']['field_location_location']['label'] = '';
  $handler->display->display_options['fields']['field_location_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_location']['type'] = 'gmaplink_formatter';
  $handler->display->display_options['fields']['field_location_location']['settings'] = array(
    'display_type' => 'addr_parts',
    'link_text' => 'Go to map',
    'addr_parts_display' => array(
      'thoroughfare' => 'thoroughfare',
      'locality' => 0,
      'administrative_area' => 0,
      'postal_code' => 0,
    ),
  );
  $handler->display->display_options['fields']['field_location_location']['field_api_classes'] = 0;
  /* Field: Content: Discount */
  $handler->display->display_options['fields']['field_location_discount']['id'] = 'field_location_discount';
  $handler->display->display_options['fields']['field_location_discount']['table'] = 'field_data_field_location_discount';
  $handler->display->display_options['fields']['field_location_discount']['field'] = 'field_location_discount';
  $handler->display->display_options['fields']['field_location_discount']['label'] = 'Student Discount';
  $handler->display->display_options['fields']['field_location_discount']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_discount']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_discount']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location_discount']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_discount']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_discount']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_discount']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'location' => 'location',
  );
  /* Filter criterion: Content: Discount (field_location_discount) */
  $handler->display->display_options['filters']['field_location_discount_value']['id'] = 'field_location_discount_value';
  $handler->display->display_options['filters']['field_location_discount_value']['table'] = 'field_data_field_location_discount';
  $handler->display->display_options['filters']['field_location_discount_value']['field'] = 'field_location_discount_value';
  $handler->display->display_options['filters']['field_location_discount_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'deals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Deals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Grab n Go */
  $handler = $view->new_display('page', 'Grab n Go', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Grab \'n Go';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = 'The following local retailers offer great deals to current UW Tacoma students. Just show your student ID to get in on the action.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_location']['id'] = 'field_location_location';
  $handler->display->display_options['fields']['field_location_location']['table'] = 'field_data_field_location_location';
  $handler->display->display_options['fields']['field_location_location']['field'] = 'field_location_location';
  $handler->display->display_options['fields']['field_location_location']['label'] = '';
  $handler->display->display_options['fields']['field_location_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_location']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_location_location']['type'] = 'gmaplink_formatter';
  $handler->display->display_options['fields']['field_location_location']['settings'] = array(
    'display_type' => 'addr_parts',
    'link_text' => 'Go to map',
    'addr_parts_display' => array(
      'thoroughfare' => 'thoroughfare',
      'locality' => 0,
      'administrative_area' => 0,
      'postal_code' => 0,
    ),
  );
  $handler->display->display_options['fields']['field_location_location']['field_api_classes'] = 0;
  /* Field: Content: Grab n' Go */
  $handler->display->display_options['fields']['field_grab_n_go']['id'] = 'field_grab_n_go';
  $handler->display->display_options['fields']['field_grab_n_go']['table'] = 'field_data_field_grab_n_go';
  $handler->display->display_options['fields']['field_grab_n_go']['field'] = 'field_grab_n_go';
  $handler->display->display_options['fields']['field_grab_n_go']['label'] = 'Grab n\' Go details';
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_grab_n_go']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_grab_n_go']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_grab_n_go']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_grab_n_go']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'location' => 'location',
  );
  /* Filter criterion: Content: Grab n&#039; Go (field_grab_n_go) */
  $handler->display->display_options['filters']['field_grab_n_go_value']['id'] = 'field_grab_n_go_value';
  $handler->display->display_options['filters']['field_grab_n_go_value']['table'] = 'field_data_field_grab_n_go';
  $handler->display->display_options['filters']['field_grab_n_go_value']['field'] = 'field_grab_n_go_value';
  $handler->display->display_options['filters']['field_grab_n_go_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'grab-n-go';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Grab n\' Go';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $export['location_listing'] = $view;

  $view = new view;
  $view->name = 'term_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Term Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'minimal';
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['caption_field'] = 'none';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_cat_slideshow_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_cat_slideshow_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Slideshow images */
  $handler->display->display_options['fields']['field_cat_slideshow_images']['id'] = 'field_cat_slideshow_images';
  $handler->display->display_options['fields']['field_cat_slideshow_images']['table'] = 'field_data_field_cat_slideshow_images';
  $handler->display->display_options['fields']['field_cat_slideshow_images']['field'] = 'field_cat_slideshow_images';
  $handler->display->display_options['fields']['field_cat_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cat_slideshow_images']['settings'] = array(
    'image_style' => 'category_slideshow',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_cat_slideshow_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_cat_slideshow_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_cat_slideshow_images']['field_api_classes'] = 0;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['tid']['not'] = 0;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'category' => 'category',
  );

  /* Display: Term Slideshow Pane */
  $handler = $view->new_display('panel_pane', 'Term Slideshow Pane', 'panel_pane_1');
  $export['term_slideshow'] = $view;

  return $export;
}
