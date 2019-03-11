

  // Slideshow default.
  jQuery(document).ready(function(){
    if(jQuery().owlCarousel) {
      jQuery('.default-implementation.owl-carousel').owlCarousel({
        items: 1,
        loop: true,
        autoplay: false,
        autoplayTimeout: 3000,
        autoplayHoverPause: true,
        nav:true,
        dots:true,
        navText : ['<i class="glyphicon glyphicon-menu-left"></i>','<i class="glyphicon glyphicon-menu-right"></i>']

      }).trigger('refresh.owl.carousel');
    }
  });
