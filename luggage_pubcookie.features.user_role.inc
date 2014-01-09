<?php
/**
 * @file
 * luggage_pubcookie.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function luggage_pubcookie_user_default_roles() {
  $roles = array();

  // Exported role: pubcookie user admin.
  $roles['pubcookie user admin'] = array(
    'name' => 'pubcookie user admin',
    'weight' => 8,
  );

  return $roles;
}
