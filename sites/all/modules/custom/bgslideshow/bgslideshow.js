(function ($) {

  Drupal.behaviors.bgslideshow = {
    attach: function (context, settings) {
      // Get the base path for the Drupal instance and the slideshow images
      var basePath = settings.basePath;
      var images = settings.bgslideshow.images;
      // Picka random image
      var bgimage = images[Math.floor(Math.random() * images.length)];
      console.log(bgimage);
      // Set up the css styles
      var styles = {
        'background' : 'url(' + basePath + bgimage + ')',
        'background-repeat' : 'no-repeat',
        'background-size' : 'cover',
        'background-position' : 'center'
      };
      // Assign the styles to the HTML element
      $("html").css(styles);

    }
  }
})(jQuery);
