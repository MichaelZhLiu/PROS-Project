#include  "main.h"

void SetDrive(int left, int right);

extern const int8_t leftFront;
extern const int8_t leftBack;
extern const int8_t rightFront;
extern const int8_t rightBack;

extern std::shared_ptr<okapi::ChassisController> chassis;

void SetDriveMotors();
