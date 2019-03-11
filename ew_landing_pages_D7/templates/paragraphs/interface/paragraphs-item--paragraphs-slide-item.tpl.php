<?php

/**
 * @file
 * Default theme implementation for a slideshow paragraph item.
 *
 * Available variables:
 * - $paragraph_wrapper_attributes: rendered attributes for the wrapper div.
 * - $paragraph_attributes: rendered attributes for the paragraph div contains
 *    mainly the container class.
 * - $header: text for header.
 * - $sub_header: text for header.
 * - $cta_title: Link title for CTA link.
 * - $cta_url: URL for CTA.
 * - $cta_target: URL target for CTA, default if _self.
 * - $slide_image_url: styled image url.
 *
 * To customize the slide item, copy the template file to your theme
 *
 * @see \Drupal\ew_landing_pages\Hooks\PreprocessLandingPages::paragraphsItemSlideItem().
 */
?>
<div class="slide">
    <img  src="<?php print $slide_image_url?>">
  <?php if ($header) : ?>
    <div class="info">
    <?php print $header;?>
    </div>
  <?php endif; ?>
</div>
