#include "main.h"


using namespace pros;
//Initializing the motors and gyro
extern Controller control;
extern Motor LeftDrive;
extern Motor RightDrive;
extern Motor Mmotor;
extern Motor leftLift;
extern Motor rightLift;
extern Motor leftIntake;
extern Motor rightIntake;
extern Imu Inertial;
extern pros::ADIGyro gyro;
//Ports
const int LDPort = 9; //Left front motor
const int RDPort = 13; //Right front motor
const int LBPort = 12; //leftBack motor
const int RBPort = 2; //Right back motor
const int LIntake = 16;//Left intake motor
const int RIntake = 6;//Right Intake motor
const int Roll = 5;//Roller motor
const int Fw = 11;//Flywheel motor
//Toggle the True and False values if the motors run backwards
//True = motor reversed
//False = motor not reversed
Controller control(CONTROLLER_MASTER);
Motor LeftDrive(LDPort, false);
Motor RightDrive(RDPort, true);
Motor LeftBack(LBPort, false);
Motor RightBack(RBPort, true);
Motor LeftIntake(LIntake, false);
Motor RightIntake(RIntake, true);
Motor Rollers(Roll, false);
Motor FlyWheel(Fw, true);
//Define gyro with port letter
pros::ADIGyro gyro('A');
