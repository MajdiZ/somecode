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
            <div class="col-sm-<?php print $left_split; ?>"><?php print $left_side; ?></div>
            <div class="col-sm-<?php print $right_split ?>"><?php print $right_side; ?></div>
        </div>
    </div>
</div>