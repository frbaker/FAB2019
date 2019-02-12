// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "frc/smartdashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/CloseClaw.h"
#include "Commands/DownShift.h"
#include "Commands/DriveBackJackedUp.h"
#include "Commands/DriveForwardJackedUp.h"
#include "Commands/DriveWithJoy.h"
#include "Commands/ExtendArm.h"
#include "Commands/LowerBackJacks.h"
#include "Commands/LowerBoom.h"
#include "Commands/LowerBothJacks.h"
#include "Commands/LowerClaw.h"
#include "Commands/LowerFontJacks.h"
#include "Commands/OpenClaw.h"
#include "Commands/PunchBall.h"
#include "Commands/RaiseBackJacks.h"
#include "Commands/RaiseBoom.h"
#include "Commands/RaiseBothJacks.h"
#include "Commands/RaiseClaw.h"
#include "Commands/RaiseFrontJacks.h"
#include "Commands/RetractArm.h"
#include "Commands/UpShift.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    joystick2.reset(new frc::Joystick(1));
    
    lBumper6.reset(new frc::JoystickButton(joystick2.get(), 6));
    lBumper6->WhileHeld(new LowerBoom());
    rBumper5.reset(new frc::JoystickButton(joystick2.get(), 5));
    rBumper5->WhileHeld(new RaiseBoom());
    y4.reset(new frc::JoystickButton(joystick2.get(), 4));
    y4->WhileHeld(new PunchBall());
    b2.reset(new frc::JoystickButton(joystick2.get(), 2));
    b2->WhileHeld(new CloseClaw());
    a1.reset(new frc::JoystickButton(joystick2.get(), 1));
    a1->WhileHeld(new OpenClaw());
    joystick1.reset(new frc::Joystick(0));
    
    rB6.reset(new frc::JoystickButton(joystick1.get(), 6));
    rB6->WhileHeld(new RaiseBothJacks());
    lB5.reset(new frc::JoystickButton(joystick1.get(), 5));
    lB5->WhileHeld(new LowerBothJacks());
    ltrig11.reset(new frc::JoystickButton(joystick1.get(), 11));
    ltrig11->WhenPressed(new DownShift());
    rtrig12.reset(new frc::JoystickButton(joystick1.get(), 12));
    rtrig12->WhenPressed(new UpShift());

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("RaiseBothJacks", new RaiseBothJacks());
    frc::SmartDashboard::PutData("LowerBothJacks", new LowerBothJacks());
    frc::SmartDashboard::PutData("LowerBackJacks", new LowerBackJacks());
    frc::SmartDashboard::PutData("RaiseBackJacks", new RaiseBackJacks());
    frc::SmartDashboard::PutData("RetractArm", new RetractArm());
    frc::SmartDashboard::PutData("ExtendArm", new ExtendArm());
    frc::SmartDashboard::PutData("PunchBall", new PunchBall());
    frc::SmartDashboard::PutData("DownShift", new DownShift());
    frc::SmartDashboard::PutData("UpShift", new UpShift());
    frc::SmartDashboard::PutData("DriveBackJackedUp", new DriveBackJackedUp());
    frc::SmartDashboard::PutData("DriveForwardJackedUp", new DriveForwardJackedUp());
    frc::SmartDashboard::PutData("LowerClaw", new LowerClaw());
    frc::SmartDashboard::PutData("RaiseClaw", new RaiseClaw());
    frc::SmartDashboard::PutData("LowerBoom", new LowerBoom());
    frc::SmartDashboard::PutData("RaiseBoom", new RaiseBoom());
    frc::SmartDashboard::PutData("LowerFontJacks", new LowerFontJacks());
    frc::SmartDashboard::PutData("RaiseFrontJacks", new RaiseFrontJacks());
    frc::SmartDashboard::PutData("CloseClaw", new CloseClaw());
    frc::SmartDashboard::PutData("OpenClaw", new OpenClaw());
    frc::SmartDashboard::PutData("DriveWithJoy", new DriveWithJoy());
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getJoystick1() {
   return joystick1;
}

std::shared_ptr<frc::Joystick> OI::getJoystick2() {
   return joystick2;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
