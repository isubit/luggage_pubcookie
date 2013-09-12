<?php
/**
 * @file
 * pubcookie_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pubcookie_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer pubcookie site access'.
  $permissions['administer pubcookie site access'] = array(
    'name' => 'administer pubcookie site access',
    'roles' => array(
      'pubcookie user admin' => 'pubcookie user admin',
    ),
    'module' => 'pubcookiesiteaccess',
  );

  return $permissions;
}
