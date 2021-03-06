// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVEBASE_H
#define DRIVEBASE_H
#include "frc/commands/Subsystem.h"
#include "frc/WPILib.h"
//#include "rev/CanSparkMax.h"
#include "ctre/Phoenix.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveBase: public frc::Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	
	std::shared_ptr<WPI_TalonSRX> sparkyLeftLead;
	std::shared_ptr<WPI_TalonSRX> sparkyRightLead;
	std::shared_ptr<frc::DifferentialDrive> differentialDrive1;
	std::shared_ptr<WPI_TalonSRX> sparkyLeftFollow;
	std::shared_ptr<WPI_TalonSRX> sparkyRightFollow;

    
public:
	DriveBase();
	void InitDefaultCommand() override;
	void Periodic() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
void JoyDrive();



//stuff for driving straight with pigeon
double DB(double axisVal);
double Cap(double value, double peak);
double MaxCorrection(double forwardThrot, double scalor);
enum {
		GoStraightOff, GoStraightWithPidgeon, GoStraightSameThrottle
	} _goStraight = GoStraightOff;
double kPgain = 0.04; /* percent throttle per degree of error */
double kDgain = 0.0004; /* percent throttle per angular velocity dps */
double kMaxCorrectionRatio = 0.30; /* cap corrective turning throttle to 30 percent of forward throttle */
/** holds the current angle to servo to */
double _targetAngle = 0;

//rev::CANEncoder left_encoder(rev::CANSparkMax *sparkyLeftLead);
//rev::CANEncoder right_encoder(rev::CANSparkMax *sparkyRightLead);


};

#endif
