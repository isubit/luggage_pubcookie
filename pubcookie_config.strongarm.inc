<?php
/**
 * @file
 * pubcookie_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pubcookie_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_ldap_basedn';
  $strongarm->value = 'dc=iastate,dc=edu';
  $export['pubcookie_ldap_basedn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_ldap_server';
  $strongarm->value = 'ldap.iastate.edu';
  $export['pubcookie_ldap_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_login_dir';
  $strongarm->value = 'login';
  $export['pubcookie_login_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_success_url';
  $strongarm->value = '';
  $export['pubcookie_success_url'] = $strongarm;

  return $export;
}
