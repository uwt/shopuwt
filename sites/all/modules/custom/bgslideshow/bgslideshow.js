(function ($) {

  Drupal.behaviors.bgstretcher = {
    attach: function (context, settings) {
// http://snook.ca/archives/javascript/simplest-jquery-slideshow
      $('#block-block-8 p img:gt(0)').hide();
      setInterval(function(){
        console.log('interval runs');
        $('#block-block-8 p :first-child')
        .fadeOut(4000)
        .next('img')
        .fadeIn()
        .end()
        .appendTo('#block-block-8 p');},
        8000);
    }
  };

})(jQuery);
