/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "CommandBase.h"
#include <iostream>

#include <Commands/Scheduler.h>



// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.


DriveTrain* CommandBase::drive = nullptr;
Turn* CommandBase::turn = nullptr;

CommandBase::CommandBase(const std::string &name) : frc::Command(name) {

}



void CommandBase::initialize()
{

	drive = new DriveTrain();
	turn = new Turn();
	std::cout << "drivetrain constructor completed" << std::endl;
	//catcher = new Catcher();
	//std::cout << "catcher constructor completed" << std::endl;
	//lift = new Lift();
	//std::cout << "lift constructor completed" << std::endl;
	//arm = new Arm();
	//std::cout << "arm constructor completed" << std::endl;
	//camera = new Camera();
	//std::cout << "camera constructor completed" << std::endl;
	//oi = std::make_unique<OI>();
	//std::cout << "commandBase initialize completed" << std::endl;


}
