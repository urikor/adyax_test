<?php
/**
 * @file
 * Views integration for the mydons custom module
 */

/**
 * Implements hook_views_data().
 */
function adyax_test_views_data() {
  $table = array(
    'adyax_table' => array(
      'table' => array(
        'group' => t('Adyax'),
        'base' => array(
          'field' => 'id',
          'title' => 'Adyax field table',
          'help' => 'Adyax field table',
        ),
      ),
      'id' => array(
        'title' => t('Id'),
        'help' => t('Adyax field Id'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
      'nid' => array(
        'title' => t('Nid'),
        'help' => t('Node nid'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
      'title' => array(
        'title' => t('Node title'),
        'help' => t('Node title'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
      'adyax_field' => array(
        'title' => t('Adyax field'),
        'help' => t('Adyax field'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string',
        ),
        'sort' => array(
          'handler' => 'views_handler_sort',
        ),
      ),
    ),
  );
  return $table;
}
