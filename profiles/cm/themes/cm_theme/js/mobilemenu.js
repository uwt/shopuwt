/*  Mobile Menu */
(function ($) {

  // Store our function as a property of Drupal.behaviors.
  Drupal.behaviors.MobileMenu = {
    attach: function (context, settings) {
      //console.log('bobo here');
      //console.log(context);
      //console.log(settings);

      // Only run this code once
      $('#region-menu ul.menu', context).once('MobileMenu', function () {
        // Define the toggling list item
        var mobilemenumarkup = $('<li>Menu</li>');
        mobilemenumarkup.attr("id", "mobile-menu-link");
        // Add the toggling list item to the top of the menu
        $('#region-menu ul.menu').prepend(mobilemenumarkup);
        // Add the expanded/collapsed classes depending on front page or not
        $('.front #mobile-menu-link').addClass('expanded');
        $('.not-front #mobile-menu-link').addClass('collapsed');
      });

      $('#mobile-menu-link').click(function(){
        // Toggle the menu when clicking on the top item
        $("#mobile-menu-link").toggleClass('collapsed');
        $("#mobile-menu-link").toggleClass('expanded');
        
        $("#region-menu ul.menu li:not('#mobile-menu-link')").slideToggle();
        //$('#mobile-menu-link').slideToggle();
      });
    }
  };

// You could add additional behaviors here.
Drupal.behaviors.MobileElementMover = {

  attach: function (context, settings) {
    $('body', context).once('movePageElements', function () {
      $('body').bind('responsivelayout', function (e, d) {
        if (d.from == 'mobile' || d.to == 'mobile') {
          console.log(d);
          if (d.to == 'mobile') {
            $('#region-footer-first').append($('#landing-image-container'));
          } else {
            $('#event-landing .inside:first').prepend($('#landing-image-container'));
            }
          }
        });
      });
  }


//detach: function (context, settings) { }
};

  }(jQuery));
