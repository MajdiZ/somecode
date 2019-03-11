<?php

/**
 * @file
 * Default theme implementation for accordion item.
 *
 * Available variables:
 * - $item_id: accordion item id.
 * - $accordion_id: the parent accordion ID.
 * - $active: True if item should be open on loading otherwise False.
 * - $header: accordion item header.
 * - $content: The content of the accordion item.
 *
 * @see \Drupal\ew_landing_pages\Hooks\PreprocessLandingPages::paragraphsItemAccordionItem().
 */
?>

<div class="panel panel-default">
    <div class="panel-heading" role="tab" id="headingOne-<?php print $item_id; ?>">
        <h4 class="panel-title expand">
            <div class="right-arrow pull-right"><?php print $active ? '-' : '+'; ?></div>
            <a role="button" data-toggle="collapse" data-parent="#<?php print $accordion_id; ?>" href="#collapse-<?php print $item_id; ?>" aria-expanded="true" aria-controls="collapse-<?php print $item_id; ?>">
              <?php print $header; ?>
            </a>
        </h4>
    </div>
    <div id="collapse-<?php print $item_id; ?>" class="panel-collapse collapse <?php print $active ? 'in' : ''; ?>" role="tabpanel" aria-labelledby="heading-<?php print $item_id; ?>">
        <div class="panel-body">
          <?php print $content;?>
        </div>
    </div>
</div>
