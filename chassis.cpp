#include "main.h"
using namespace okapi::literals;


  const int8_t leftFront = 1;
  const int8_t leftBack = 2;
  const int8_t rightFront = 3;
  const int8_t rightBack = 4;


  std::shared_ptr<okapi::ChassisController> chassis = okapi::ChassisControllerBuilder()
  .withMotors({leftFront,leftBack},{rightFront,rightBack})
  .withDimensions(okapi::AbstractMotor::gearset::green, {{4_in,11.5_in},okapi::imev5GreenTPR})
  .build();

/*
void SetDriveMotors()
{
int leftJoystick = controller.get_analog(pros:: E_CONTROLLER_ANALOG_LEFT_Y);
int rightJoystick = controller.get_analog(pros:: E_CONTROLLER_ANALOG_RIGHT_Y);
SetDrive(leftJoystick, rightJoystick);
}
*/
