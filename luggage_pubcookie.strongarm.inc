<?php
/**
 * @file
 * luggage_pubcookie.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function luggage_pubcookie_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_domain';
  $strongarm->value = 'iastate.edu';
  $export['pubcookie_domain'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_id_is_email';
  $strongarm->value = 1;
  $export['pubcookie_id_is_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_ldap_basedn';
  $strongarm->value = 'dc=iastate,dc=edu';
  $export['pubcookie_ldap_basedn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_ldap_searchfield';
  $strongarm->value = '(|(uid=%username))';
  $export['pubcookie_ldap_searchfield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_ldap_server';
  $strongarm->value = 'ldap.iastate.edu';
  $export['pubcookie_ldap_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_ldap_usernamefield';
  $strongarm->value = '';
  $export['pubcookie_ldap_usernamefield'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_login_dir';
  $strongarm->value = 'pubcookie';
  $export['pubcookie_login_dir'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pubcookie_success_url';
  $strongarm->value = '';
  $export['pubcookie_success_url'] = $strongarm;

  return $export;
}
