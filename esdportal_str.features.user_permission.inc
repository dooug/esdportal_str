<?php
/**
 * @file
 * esdportal_str.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function esdportal_str_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access school scores.
  $permissions['access school scores'] = array(
    'name' => 'access school scores',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'School Leader' => 'School Leader',
      'Superintendent' => 'Superintendent',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_scoresbybcode',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'School Leader' => 'School Leader',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: choose taxonomy term revisions.
  $permissions['choose taxonomy term revisions'] = array(
    'name' => 'choose taxonomy term revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_revision',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create school_profile content.
  $permissions['create school_profile content'] = array(
    'name' => 'create school_profile content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any school_profile content.
  $permissions['delete any school_profile content'] = array(
    'name' => 'delete any school_profile content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own school_profile content.
  $permissions['delete own school_profile content'] = array(
    'name' => 'delete own school_profile content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete taxonomy term revisions.
  $permissions['delete taxonomy term revisions'] = array(
    'name' => 'delete taxonomy term revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_revision',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any field_school.
  $permissions['edit any field_school'] = array(
    'name' => 'edit any field_school',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_str',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any school_profile content.
  $permissions['edit any school_profile content'] = array(
    'name' => 'edit any school_profile content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own field_school.
  $permissions['edit own field_school'] = array(
    'name' => 'edit own field_school',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_str',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own school_profile content.
  $permissions['edit own school_profile content'] = array(
    'name' => 'edit own school_profile content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'School Leader' => 'School Leader',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: revert taxonomy term revisions.
  $permissions['revert taxonomy term revisions'] = array(
    'name' => 'revert taxonomy term revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_revision',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: view any field_school.
  $permissions['view any field_school'] = array(
    'name' => 'view any field_school',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_str',
  );

  // Exported permission: view own field_school.
  $permissions['view own field_school'] = array(
    'name' => 'view own field_school',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'administrator' => 'administrator',
    ),
    'module' => 'esdportal_str',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'School Leader' => 'School Leader',
      'Superintendent' => 'Superintendent',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'Logistics Coordinator' => 'Logistics Coordinator',
      'School Leader' => 'School Leader',
      'Superintendent' => 'Superintendent',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view taxonomy term revisions.
  $permissions['view taxonomy term revisions'] = array(
    'name' => 'view taxonomy term revisions',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_revision',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'ESD Administrator' => 'ESD Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
