$(document).ready(function () {

    let width = $('.traffic-lights').width();
    // Start animation
    $("#go").click(function () {
        $(".car-container").animate({
            left: `+=${width}`
        }, 3000);
    });

    // Stop animation when button is clicked
    $("#stop").click(function () {
        $(".car-container").stop();
    });

    // Start animation in the opposite direction
    $("#back").click(function () {
        $(".car-container").animate({
            left: `-=${width}`
        }, 3000);
    });
});