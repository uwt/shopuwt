<?php
/**
 * @file
 * cm_panel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cm_panel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cm_panel_node_info() {
  $items = array(
    'cm_panel' => array(
      'name' => t('Panel'),
      'base' => 'node_content',
      'description' => t('A page with customizable content and layout characteristics.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
