<?php

/**
 * @file
 * Default theme implementation for the tabs paragraph item.
 *
 * Available variables:
 * - $paragraph_wrapper_attributes: rendered attributes for the wrapper div.
 * - $paragraph_attributes: rendered attributes for the paragraph div contains
 *    mainly the container class.
 * - $tabs_list: rendered nav items as li elements for the tabs items.
 * - $tabs_content: render contents for the tabs.
 *
 * @see \Drupal\ew_landing_pages\Hooks\PreprocessLandingPages::paragraphsItemTabs().
 */
?>
<div <?php print $paragraph_wrapper_attributes; ?>>
    <div <?php print $paragraph_attributes; ?>>
        <!-- Nav tabs -->
            <ul class="nav nav-tabs" role="tablist">
              <?php print $tabs_list; ?>
            </ul>
            <!-- Tab panes -->
            <div class="tab-content">
              <?php print $tabs_content; ?>
            </div>
    </div>
</div>
