<?php

/**
 * @file
 * Default theme implementation for a slideshow paragraph item.
 *
 * Available variables:
 * - $paragraph_wrapper_attributes: rendered attributes for the wrapper div.
 * - $paragraph_attributes: rendered attributes for the paragraph div contains
 *    mainly the container class.
 * - $slides: rendered slides items.
 *
 * Slideshow library: The library used here is Owlcarousel
 * https://owlcarousel2.github.io/OwlCarousel2/ Also animate css library is
 * available https://daneden.github.io/animate.css/.
 *
 * Libraries where added using Libraries API 2 in Preprocess function.
 *
 * To customize the slideshow, copy the template file based on the id and
 * Remove the default javascript implementation and the class
 * default-implementation from Owlcarousel div.
 *
 * @see \Drupal\ew_landing_pages\Hooks\PreprocessLandingPages::paragraphsItemSlideshow().
 */
?>


<div <?php print $paragraph_wrapper_attributes; ?>>
    <div <?php print $paragraph_attributes; ?>>
        <div class="row">
            <div class="col-xs-12">
                <div class="default-implementation owl-carousel owl-theme">
                  <?php print $slides;?>
                </div>
            </div>
        </div>
    </div>
</div>
<div class="clearfix"></div>
