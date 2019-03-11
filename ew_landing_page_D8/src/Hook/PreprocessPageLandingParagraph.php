<?php

namespace Drupal\ew_landing_page\Hook;

use Drupal\Core\Template\Attribute;
use Drupal\ew_core\EaglesWeb\Standard\Interfaces\Hook\Preprocess\PreprocessParagraphHookInterface;
use Drupal\ew_landing_page\Constant\ConstantsLandingPage;
use Drupal\ew_landing_page\Service\GridServiceInterface;
use Drupal\paragraphs\Entity\Paragraph;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Class PreprocessPageLandingParagraph.
 *
 * @package Drupal\ew_landing_page\Hook
 */
class PreprocessPageLandingParagraph implements PreprocessParagraphHookInterface {

  /**
   * @return \Drupal\ew_landing_page\Service\GridServiceInterface
   */
  private static function getGridService() {
    return \Drupal::service('eagles.landing_page.grid_service');
  }

  /**
   * {@inheritdoc}
   *
   * @uses rowParagraph, columnParagraph
   */
  public static function getHookPreprocessParagraph(&$variables) {
    /** @var \Drupal\paragraphs\Entity\Paragraph $paragraph */
    $paragraph = $variables['paragraph'];
    $paragraphMethod = $paragraph->bundle() . 'Paragraph';
    // Prepare variables attributes to be passed as reference object.
    $variables['attributes'] = new Attribute($variables['attributes']);
    /** @var \Drupal\Core\Template\Attribute $paragraphAttributes */
    $paragraphAttributes = &$variables['attributes'];

    // Pre process.
    self::generalPrePreprocess($variables, $paragraph, $paragraphAttributes);
    // Call paragraph process based on bundle.
    if (method_exists(__CLASS__, $paragraphMethod)) {
      call_user_func_array([__CLASS__, $paragraphMethod], [
        &$variables,
        $paragraph,
        &$paragraphAttributes,
      ]);
    }
    // Post process.
    self::generalPostPreprocess($variables, $paragraph, $paragraphAttributes);

  }

  /**
   * Preprocess preGeneral for all paragraph.
   */
  private static function generalPrePreprocess(&$variables, Paragraph $paragraph, Attribute &$paragraphAttributes) {

  }

  /**
   * Preprocess postGeneral for all paragraph.
   */
  private static function generalPostPreprocess(&$variables, Paragraph $paragraph, Attribute &$paragraphAttributes) {
  }

  /**
   * Preprocess for row paragraph.
   */
  private static function rowParagraph(&$variables, Paragraph $paragraph, Attribute &$paragraphAttributes) {
    // Add container class.
    $containerType = $paragraph->get(ConstantsLandingPage::FIELD_PARAGRAPH_CONTAINER_TYPE)->value;
    $classes = self::getGridService()->getContainerClass($containerType);
    $paragraphAttributes->addClass($classes);
  }

  /**
   * Preprocess for column paragraph.
   */
  private static function columnParagraph(&$variables, Paragraph $paragraph, Attribute &$paragraphAttributes) {
    $columnSize = $paragraph->get(ConstantsLandingPage::FIELD_PARAGRAPH_GRID_12)->value;
    $classes = self::getGridService()->getColumnClass($columnSize);
    $paragraphAttributes->addClass($classes);
  }

}
