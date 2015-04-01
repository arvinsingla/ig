(function($) {
  $(function() {
    Stripe.setPublishableKey(Drupal.settings.stripeform.pubkey);
  });
  Drupal.behaviors.ig_purchase_event = {
    attach: function(context, settings) {
      $("#" + settings.stripeform.form_selector, context).submit(function(e) {
        e.preventDefault();
        var $form = $(this);
        var $submitBtn = $("#edit-submit", context);
        settings.stripeform.submitBtnText = $submitBtn.val();
        $submitBtn.val('Please wait...').attr('disabled', true);
        Stripe.createToken($form, stripeResponseHandler);
        return false;
      });
    }
  }

  var stripeResponseHandler = function(status, response) {
    var $form = $("#" + Drupal.settings.stripeform.form_selector);
    // token contains id, last4, and card type
    var token = response.id;
    // Insert the token into the form so it gets submitted to the server
    $('input[name=stripeToken]', $form).val(token);
    // and re-submit
    $form.get(0).submit();
  };
}(jQuery));
