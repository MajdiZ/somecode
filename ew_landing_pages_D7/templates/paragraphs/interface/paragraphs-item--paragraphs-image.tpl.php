<?php

/**
 * @file
 * Default theme implementation for a image paragraph item.
 *
 * Available variables:
 * - $paragraph_wrapper_attributes: rendered attributes for the wrapper div.
 * - $paragraph_attributes: rendered attributes for the paragraph div contains
 *    mainly the container class.
 * - $header: text for header.
 * - $link_url: URL to link image.
 * - $link_target: URL target for link, default if _self.
 * - $image: rendered image tag.
 *
 * To customize the slide item, copy the template file to your theme
 *
 * @see \Drupal\ew_landing_pages\Hooks\PreprocessLandingPages::paragraphsItemImage().
 */
?>
<div <?php print $paragraph_wrapper_attributes; ?>>
    <div <?php print $paragraph_attributes; ?>>
        <?php if ($link_url): ?>
        <a href="<?php print $link_url; ?>" <?php print ($link_target) ? 'target="' . $link_target . '."' : ''?>>
        <?php endif;?>
            <div class="img-wrapper">
              <?php print $image?>
                <?php if ($header): ?>
                <div class="header-wrapper">
                  <?php print $header; ?>
                </div>
                <?php endif;?>
            </div>
         <?php if ($link_url): ?>
        </a>
         <?php endif; ?>
    </div>
</div>
