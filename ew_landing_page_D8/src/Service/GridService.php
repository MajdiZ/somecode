<?php

namespace Drupal\ew_landing_page\Service;

use Drupal\Core\Config\ConfigFactoryInterface;
use Drupal\Core\Theme\ThemeManagerInterface;
use Drupal\ew_landing_page\Constant\ConstantsLandingPage;

/**
 * Class GridService.
 *
 * @package Drupal\ew_landing_page\Service
 */
class GridService implements GridServiceInterface {

  /**
   * Theme manager.
   *
   * @var \Drupal\Core\Theme\ThemeManagerInterface
   */
  protected $themeManager;

  /**
   * Config factory.
   *
   * @var \Drupal\Core\Config\ConfigFactoryInterface
   */
  protected $configFactory;

  /**
   * GridService constructor.
   *
   * @param \Drupal\Core\Theme\ThemeManagerInterface $themeManager
   *   The theme manager.
   * @param \Drupal\Core\Config\ConfigFactoryInterface $configFactory
   *   The config factory.
   */
  public function __construct(ThemeManagerInterface $themeManager, ConfigFactoryInterface $configFactory) {
    $this->themeManager = $themeManager;
    $this->configFactory = $configFactory;
  }

  /**
   * {@inheritdoc}
   */
  public function getContainerClass($containerType) {
    $classes = [];
    /*
     * We suppose to get the grid type from the system config of landing page.
     * @ToDo inject the config and start and return the right grid.
     */
    $gridType = 'bootstrap3';
    if ($gridType == 'bootstrap3') {

      switch ($containerType) {
        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_SYSTEM:
          // Get current theme.
          $currentTheme = $this->themeManager->getActiveTheme();
          // Get theme settings.
          $themeSettingsConfigName = $currentTheme->getName() . '.settings';
          $currentThemeConfig = $this->configFactory->get($themeSettingsConfigName);
          if ($currentThemeConfig->get('fluid_container')) {
            $classes[] = 'container-fluid';
          }
          else {
            $classes[] = 'container';
          }
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_FLUID:
          $classes[] = 'container-fluid';
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_FULL:
          $classes[] = 'container-fluid-full';
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_CONTAINER_TYPE_NORMAL:
          $classes[] = 'container';
          break;
      }
    }

    return $classes;

  }

  /**
   * {@inheritdoc}
   */
  public function getColumnClass($columnSize) {
    $classes = [];
    $gridType = 'bootstrap3';
    if ($gridType == 'bootstrap3') {

      switch ($columnSize) {
        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_GRID_12_FULL:
          $classes[] = 'col-md-12';
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_GRID_12_HALF:
          $classes[] = 'col-md-6';
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_GRID_12_ONE_QUARTER:
          $classes[] = 'col-md-3';
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_GRID_12_ONE_THIRD:
          $classes[] = 'col-md-4';
          break;

        case ConstantsLandingPage::OPTION_FIELD_PARAGRAPH_GRID_12_TWO_THIRDS:
          $classes[] = 'col-md-8';
          break;
      }
    }
    return $classes;
  }

}
