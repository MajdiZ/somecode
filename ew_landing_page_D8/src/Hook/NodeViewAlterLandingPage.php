<?php

namespace Drupal\ew_landing_page\Hook;

use Drupal\Core\Entity\Display\EntityViewDisplayInterface;
use Drupal\Core\Entity\EntityInterface;
use Drupal\ew_core\EaglesWeb\Standard\Interfaces\Hook\NodeViewAlterHookInterface;
use Drupal\ew_landing_page\Constant\ConstantsLandingPage;

/**
 * Class NodeViewAlterLandingPage.
 *
 * @package Drupal\ew_landing_page\Hook
 */
class NodeViewAlterLandingPage implements NodeViewAlterHookInterface {

  /**
   * {@inheritdoc}
   */
  public static function getHookNodeViewAlter(array &$build, EntityInterface $entity, EntityViewDisplayInterface $display) {
    /** @var \Drupal\node\NodeInterface $entity */
    if ($entity->getType() == ConstantsLandingPage::NODE_TYPE_LANDING_PAGE) {
      $build['#view_mode'] = ConstantsLandingPage::DISPLAY_MODE_NODE_LANDING_PAGE;
    }
  }

}
