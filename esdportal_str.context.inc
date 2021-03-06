<?php
/**
 * @file
 * esdportal_str.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function esdportal_str_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'post_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['home'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'scoresbycode';
  $context->description = 'schoolscores/[bcode] pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'schoolscores/*' => 'schoolscores/*',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('schoolscores/[bcode] pages');
  $export['scoresbycode'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_admin';
  $context->description = 'ESD Administrator role';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'ESD Administrator' => 'ESD Administrator',
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'views-54e4930dd771c60a38e87c5edbc733bb' => array(
          'module' => 'views',
          'delta' => '54e4930dd771c60a38e87c5edbc733bb',
          'region' => 'branding',
          'weight' => '-9',
        ),
        'menu-menu-moderator-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-moderator-menu',
          'region' => 'branding',
          'weight' => '-8',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'branding',
          'weight' => '-7',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'branding',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ESD Administrator role');
  $export['sitewide_admin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_moderator';
  $context->description = 'Logistics Coordinator role';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'Logistics Coordinator' => 'Logistics Coordinator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-moderator-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-moderator-menu',
          'region' => 'branding',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Logistics Coordinator role');
  $export['sitewide_moderator'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide_schoolrep';
  $context->description = 'School Leader and Superintendent roles';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'School Leader' => 'School Leader',
        'Superintendent' => 'Superintendent',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'esdportal_dash-my_schools' => array(
          'module' => 'esdportal_dash',
          'delta' => 'my_schools',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'branding',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('School Leader and Superintendent roles');
  $export['sitewide_schoolrep'] = $context;

  return $export;
}
