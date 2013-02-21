(function ($) {

  Drupal.behaviors.bgstretcher = {
    attach: function (context, settings) {


    $('body', context).once('removeElements', function () {
      $('body').bind('responsivelayout', function (e, d) {
        if (d.from == 'mobile' || d.to == 'mobile') {
          console.log(d);
          if (d.to == 'mobile') {
            $('#block-block-8').detach();
          } else {
            
            }
          }
        });
      });

    // Don't run this for IE 7.  IE6 is completely borked, so who cares.
    if ($.browser.msie && $.browser.version == "7.0") {
      return;
      } else if ($('body').hasClass('responsive-layout-mobile')) {
        return;
        }
      else {
// http://snook.ca/archives/javascript/simplest-jquery-slideshow
      $('#block-block-8 p img:gt(0)').hide();
      setInterval(function(){
        $('#block-block-8 p :first-child')
        .fadeOut(4000)
        .next('img')
        .fadeIn()
        .end()
        .appendTo('#block-block-8 p');},
        8000);
    }
    }
  };

})(jQuery);
