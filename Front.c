#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     LeftMotor,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     RightMotor,    tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C2_1,    little,               tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
wait1Msec(1000);
motor[LeftMotor] = -26;
motor[RightMotor] = 26;
wait1Msec(1345);

motor[LeftMotor] = -25;
motor[RightMotor] = -25;
wait1Msec(750);

motor[LeftMotor] = -25;
motor[RightMotor] = 25;
wait1Msec(1000);

motor[LeftMotor] = -25;
motor[RightMotor] = -25;
wait1Msec(700);

motor[LeftMotor] = -25;
motor[RightMotor] = 25;
wait1Msec(420);

motor[LeftMotor] = 25;
motor[RightMotor] = 25;
wait1Msec(650);

motor[LeftMotor] = -25;
motor[RightMotor] = 25;
wait1Msec(1000);

motor[LeftMotor] = -25;
motor[RightMotor] = -25;
wait1Msec(700);

motor[LeftMotor] = -25;
motor[RightMotor] = 25;
wait1Msec(1400);



































































}