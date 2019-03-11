

jQuery(document).ready(function($) {
  // Accordion.
  $(function() {
    $(".expand").on( "click", function() {
      $expand = $(this).find(">:first-child");
      if($expand.text() == "+") {
        $expand.text("-");
      } else {
        $expand.text("+");
      }
    });
  });

  // Hash changed, we open the right tab or collapse on the hash.
  $(window).on('hashchange', function () {
    // Check if hash is empty
    if (location.hash != null && location.hash != "") {
      // Switch to the right tab.
      $('a[href= ' + location.hash + ']').tab('show');
      // Open the right collapse.
      $('.collapse').removeClass('in');
      $(location.hash).closest('.paragraph-wrapper').removeClass('in')
      $(location.hash).collapse('show');
    }
  }).trigger('hashchange');

  // Background Image.
  if(jQuery().backstretch) {
    $('div[id^="paragraphs-image-cover-"]').backstretch();
  }


});


