#include "main.h"
#include "subsystems.hpp"
#include "pros/optical.h"
// #include "EZ-Template/drive/drive.hpp"

// pros::Motor claw(1);
pros::Optical eye(11);
//pros::c::optical_rgb_s_t rgb = eye.get_rgb();

int redLow = 0, redHigh = 25; // Maybe higher
int blueLow = 150, blueHigh = 230; // Maybe higher
int proxi = 100; // Higher values are closer and lower is farther



void test(){
    //LED Setting Increments of 25
    eye.set_led_pwm(25);

    // double color_hue = eye.get_hue();
    // Red parameters
    if(eye.get_hue() >= redLow && eye.get_hue() <= redHigh && eye.get_proximity() >= proxi){
        claw.move(100);
    }
    //Blue Parameters
    else if(eye.get_hue() >= blueLow && eye.get_hue() <= blueHigh && eye.get_proximity() >= proxi){
        claw.move(-100);
    }
    else{
        claw.move(0);
    }
}