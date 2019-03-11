<?php

namespace Drupal\ew_landing_pages\Hooks;

use Drupal\ew_landing_pages\Constants\ConstantsLandingPages;

/**
 * Class NodeInfoLandingPages.
 *
 * @package Drupal\ew_landing_pages\Hooks
 */
class NodeInfoLandingPages {

  /**
   * Return info for hook_node_info().
   */
  public static function getHookNodeInfo() {
    $items = array();
    $items += self::createLandingPageContentType();
    return $items;
  }

  /**
   * Info for landing page.
   */
  private static function createLandingPageContentType() {
    $items = array(
      ConstantsLandingPages::NODE_TYPE_LANDING_PAGE => array(
        'name' => t('Landing page'),
        'description' => t('A content type for creating a landing page.'),
        'has_title' => TRUE,
        'title_label' => t('Page title'),
        'base' => 'node_content',
        'locked' => TRUE,
        'custom' => FALSE,
      ),
    );
    return $items;
  }

}
