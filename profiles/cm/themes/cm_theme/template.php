<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function cm_theme_preprocess_html(&$variables) {
  // Determine if we're ID 7
  if (isset($_SERVER['HTTP_USER_AGENT'])) {
    if(preg_match('/MSIE 7/i',$_SERVER['HTTP_USER_AGENT'])) {
      $variables['attributes_array']['class'][] = 'ie7';

      drupal_add_css(path_to_theme() . '/css/ie-lte-7.css', 
          array('group' => CSS_THEME, 
            'browsers' => array(
              'IE' => 'lte IE 7', 
              '!IE' => FALSE), 
            'preprocess' => FALSE)
          );  
    }
  }

  drupal_add_css(path_to_theme() . '/css/ie-lte-8.css', 
      array(
        'group' => CSS_THEME, 
        'browsers' => array(
          'IE' => 'lte IE 8',
          '!IE' => FALSE), 
        'preprocess' => FALSE)
      );  
  drupal_add_css(path_to_theme() . '/css/ie-6.css', 
      array(
        'group' => CSS_THEME, 
        'browsers' => array(
          'IE' => 'IE 6', 
          '!IE' => FALSE), 
        'preprocess' => FALSE)
      );
}
