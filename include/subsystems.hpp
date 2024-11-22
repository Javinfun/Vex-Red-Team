#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples
inline pros::Motor claw(7);  //EACH NUMBER IS A PORT
// inline pros::Motor claw_2(2);  //EACH NUMBER IS A PORT
// inline pros::Motor_group claws({5, -8}); //WHEN CLAWS IS CALLED, BOTH MOTORS MOVE AT THE SAME TIME
// inline pros::Optical eye(10);
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');