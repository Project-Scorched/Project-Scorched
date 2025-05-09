/// PhysX part
tracksSpeed         = 5;
simulation			= tankX;
enginePower			= 750;
maxOmega 			= 320;
peakTorque 			= 5500;
torqueCurve[] = {
    {0, 0},
    {0.2, 0.7},
    {0.5, 0.98},
    {0.8, 0.9},
    {1.0, 0.8}
};
thrustDelay			= 0.05;
clutchStrength 		= 220.0;
fuelCapacity		= 1885;
brakeIdleSpeed		= 1.78;
latency 			= 0.1;
tankTurnForce		= 600000;

idleRpm = 700;
redRpm = 2640;

engineLosses = 25;
transmissionLosses = 15;

class complexGearbox {
	 GearboxRatios[] = {
        "R2", -3.5,
        "N", 0,
        "D1", 4.0,
        "D2", 3.0,
        "D3", 2.2,
        "D4", 1.6,
        "D5", 1.2,
        "D6", 0.9,
        "D7", 0.65
    };
	TransmissionRatios[] = {"High", 12};
	gearBoxMode        = "auto";
	moveOffGear        = 1;
	driveString        = "D";
	neutralString      = "N";
	reverseString      = "R";
	transmissionDelay  = 0.05;
};
/// end of gearbox

class Wheels {
	class L2 {
		boneName="wheel_podkoloL2";
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		damping  = 80.0;
		steering = 0;
		side = "left";
		weight = 180;
		mass = 180;
		MOI = 28;
		latStiffX = 30;
		latStiffY = 320;
		longitudinalStiffnessPerUnitGravity = 2000000;
		maxBrakeTorque = 35000;
		sprungMass = 3500.0;
		springStrength = 300000;
		springDamperRate = 38000;
		dampingRate = 0.5;
		dampingRateInAir = 8830.0;
		dampingRateDamaged = 10.0;
		dampingRateDestroyed = 10000.0;
		maxDroop = 0.18;
		maxCompression = 0.18;
	};
	class L3: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		mass = 120;
        sprungMass = 3000.0;
        springStrength = 250000;
        longitudinalStiffnessPerUnitGravity = 800000;
	};
	class L6: L1 {
		boneName = "";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};

	class R2: L2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		mass = 120;
        sprungMass = 3000.0;
        springStrength = 250000;
        longitudinalStiffnessPerUnitGravity = 800000;
	};
	class R6: R1 {
		boneName = "";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
};