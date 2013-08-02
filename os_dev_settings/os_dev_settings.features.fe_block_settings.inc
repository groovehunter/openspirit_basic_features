<?php
/**
 * @file
 * os_dev_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function os_dev_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['devel_node_access-dna_node'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'dna_node',
    'module' => 'devel_node_access',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'bartik',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['devel_node_access-dna_user'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'dna_user',
    'module' => 'devel_node_access',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
