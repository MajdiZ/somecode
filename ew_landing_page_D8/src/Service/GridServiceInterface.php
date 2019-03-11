<?php

namespace Drupal\ew_landing_page\Service;

/**
 * Interface GridServiceInterface.
 *
 * Control the classes of the grid based on the system settings.
 *
 * @package Drupal\ew_landing_page\Service
 */
interface GridServiceInterface {

  /**
   * Get container class.
   *
   * @param string $containerType
   *    The type of the grid.
   *
   * @return array
   *   The classes names of the container.
   */
  public function getContainerClass($containerType);

  public function getColumnClass($columnSize);

}