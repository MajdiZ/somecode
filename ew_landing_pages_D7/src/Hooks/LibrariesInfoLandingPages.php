<?php

namespace Drupal\ew_landing_pages\Hooks;

/**
 * Class LibrariesInfoLandingPages.
 *
 * @package Drupal\ew_landing_pages\Hooks
 */
class LibrariesInfoLandingPages {

  /**
   * For hook_library().
   */
  public static function getHook() {

    $libraries['OwlCarousel'] = array(
      'name' => 'Owl Carousel',
      'website' => 'http://owlgraphic.com/owlcarousel',
      'vendor url' => 'https://github.com/OwlCarousel2/OwlCarousel2',
      'download url' => 'https://github.com/OwlCarousel2/OwlCarousel2/archive/2.3.4.zip',
      'version' => '2.3.4',
      'files' => array(
        'js' => array(
          'dist/owl.carousel.min.js' => array(
            'scope' => 'footer',
          ),
        ),
        'css' => array(
          'dist/assets/owl.carousel.min.css' => array(
            'type' => 'file',
            'media' => 'screen',
          ),
          'dist/assets/owl.theme.green.min..css' => array(
            'type' => 'file',
            'media' => 'screen',
          ),
        ),
      ),
      'callbacks' => array(
        'post-load' => array(
          'slideshowScriptCallback',
        ),
      ),
    );

    $libraries['animate.css'] = array(
      'name' => 'Animate css',
      'vendor url' => 'https://github.com/daneden/animate.css',
      'download url' => 'https://github.com/daneden/animate.css/archive/3.7.0.zip',
      'version' => '3.7.0',
      'files' => array(
        'css' => array(
          'animate.min.css' => array(
            'type' => 'file',
            'media' => 'screen',
            'scope' => 'header',
          ),
        ),
      ),
    );

    $libraries['jquery-backstretch'] = array(
      'name' => 'jquery backstretch',
      'website' => 'http://www.jquery-backstretch.com/',
      'vendor url' => 'https://github.com/jquery-backstretch/jquery-backstretch',
      'download url' => 'https://github.com/jquery-backstretch/jquery-backstretch/archive/2.1.16.zip',
      'version' => '2.1.16',
      'files' => array(
        'js' => array(
          'jquery.backstretch.min.js' => array(
            'scope' => 'footer',
          ),
        ),
      ),
    );

    $libraries['jquery-match-height'] = array(
      'name' => 'jquery matchHeight',
      'website' => 'http://brm.io/jquery-match-height/',
      'vendor url' => 'https://github.com/liabru/jquery-match-height',
      'download url' => 'https://github.com/liabru/jquery-match-height/archive/0.7.2.zip',
      'version' => '0.7.2',
      'files' => array(
        'js' => array(
          'dist/jquery.matchHeight-min.js' => array(
            'scope' => 'footer',
          ),
        ),
      ),
    );

    return $libraries;
  }

  public static function slideshowScriptCallback() {
    drupal_add_js(drupal_get_path('module', 'ew_landing_pages') . '/assets/js/paragraph-slideshow.js');
  }

}