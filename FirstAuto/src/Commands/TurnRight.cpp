/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "TurnRight.h"

TurnRight::TurnRight(double anglepoint) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	setpoint = anglepoint;
	Requires(CommandBase::turn);
}

// Called just before this Command runs the first time
void TurnRight::Initialize() {
	CommandBase::turn->resetEncoders();
}

// Called repeatedly when this Command is scheduled to run
void TurnRight::Execute() {
	CommandBase::turn->tankDrive(0.25, 0.5);
}

// Make this return true when this Command no longer needs to run execute()
bool TurnRight::IsFinished() {
	return (CommandBase::turn > setpoint);
}

// Called once after isFinished returns true
void TurnRight::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TurnRight::Interrupted() {

}
