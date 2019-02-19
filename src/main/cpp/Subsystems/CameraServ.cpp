// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Subsystems/CameraServ.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/CameraJoy.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

CameraServ::CameraServ() : frc::Subsystem("CameraServ") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    servoCamera.reset(new frc::Servo(3));

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void CameraServ::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND

        SetDefaultCommand(new CameraJoy());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void CameraServ::Periodic() {
    // Put code here to be run every loop

}

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.
void CameraServ::CameraWithJoy(){
    double upControl = Robot::oi->getJoystick1()->GetRawAxis(3);
    double releaseControl = Robot::oi->getJoystick1()->GetRawAxis(2);
    if (releaseControl <.25){
        if(upControl > 0.1){
            servoCamera->Set(upControl);
        }
    }
    
    
}
void CameraServ::Cameraup(){
    servoCamera->Set(0.3);
}
void CameraServ::CameraDown(){
    servoCamera->Set(-0.3);
}
void CameraServ::CameraStop(){
    
}
