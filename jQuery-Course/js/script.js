$(function() {
  // jQuery goes here...

 // Uncomment this line to fade out the red box on page load
  
  $(".red-box").fadeTo(3000, 0.2);
  $(".green-box").fadeTo(3000, 0.5);
  $(".blue-box").fadeTo(3000, 0.8);

  $(".blue-box").fadeToggle();
  $(".blue-box").fadeToggle();
});