<?php

/**
 * @file
 * Default theme implementation for accordion.
 *
 * Available variables:
 * - $paragraph_wrapper_attributes: rendered attributes for the wrapper div.
 * - $paragraph_attributes: rendered attributes for the paragraph div contains
 *    mainly the container class.
 * - $accordion_id: unique id for accordion.
 * - $items: rendered accordion items.
 *
 * @see \Drupal\ew_landing_pages\Hooks\PreprocessLandingPages::paragraphsItemAccordion().
 */
?>
<div <?php print $paragraph_wrapper_attributes; ?>>
    <div <?php print $paragraph_attributes; ?>>
        <div class="row">
            <div class="col-xs-12">
                <div id="<?php print $accordion_id; ?>" class="panel-group">
                  <?php print $items;?>
                </div>
            </div>
        </div>
    </div>
</div>
