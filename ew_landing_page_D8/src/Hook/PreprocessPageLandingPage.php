<?php

namespace Drupal\ew_landing_page\Hook;

use Drupal\ew_core\EaglesWeb\Standard\Interfaces\Hook\Preprocess\PreprocessPageHookInterface;
use Drupal\ew_landing_page\Constant\ConstantsLandingPage;
use Drupal\node\Entity\Node;

/**
 * Class PreprocessPageLandingPage.
 *
 * @package Drupal\ew_landing_page\Hook
 */
class PreprocessPageLandingPage implements PreprocessPageHookInterface {

  /**
   * {@inheritdoc}
   */
  public static function getHookPreprocessPage(&$variables) {
    self::setLandingPageFlag($variables);
  }

  /**
   * Set flag for landing page.
   *
   * If the page contain node object and node is landing page type we set the
   * isLandingPage flag to true. Otherwise its false.
   */
  private static function setLandingPageFlag(&$variables) {
    $variables['page']['isLandingPage'] = FALSE;
    if (!empty($variables['node'])) {
      /** @var \Drupal\node\NodeInterface $nodeEntity */
      $nodeEntity = $variables['node'];
      if ($nodeEntity  instanceof Node && $nodeEntity->bundle() == ConstantsLandingPage::NODE_TYPE_LANDING_PAGE) {
        $variables['page']['isLandingPage'] = TRUE;
      }
    }
  }

}
