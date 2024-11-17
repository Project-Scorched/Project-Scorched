tracksSpeed=-1;
simulation="tankX";
fuelCapacity=17;
brakeIdleSpeed=0.1;
maxSpeed=55;
normalSpeedForwardCoef=0.75;
slowSpeedForwardCoef=0.25;
waterResistanceCoef=0.25;
enginePower=1100;
maxOmega=345.57501;
minOmega=146.608;
redRpm=3300;
idleRpm=1400;
peakTorque=5000;
torqueCurve[]=
{
	{0.42424199,0.80000001},
	{0.54545498,0.94999999},
	{0.60606098,0.99000001},
	{0.63636398,1},
	{0.66666698,0.98000002},
	{0.72727299,0.93000001},
	{0.87878799,0.75999999},
	{1,0.60000002}
};
thrustDelay=0.050000001;
engineMOI=15;
dampingRateFullThrottle=1.3;
dampingRateZeroThrottleClutchEngaged=6;
dampingRateZeroThrottleClutchDisengaged=1;
clutchStrength=40;
latency=1.2;
switchTime=0;
changeGearType="rpmratio";
changeGearOmegaRatios[]={1,0.42424199,0.45454499,0.33333299,0.98484802,0.42424199,0.98484802,0.60606098,0.98484802,0.57575798,1,0.54545498};
class complexGearbox
{
	GearboxRatios[]=
	{
		"R1",
		-3.4000001,
		"N",
		0,
		"D1",
		4.3000002,
		"D2",
		2.9000001,
		"D3",
		1.8,
		"D4",
		1
	};
	transmissionRatios[]=
	{
		"High",
		13
	};
	gearBoxMode="auto";
	moveOffGear=1;
	driveString="D";
	neutralString="N";
	reverseString="R";
};
tankTurnForce=900000;
tankTurnForceAngMinSpd=0.75999999;
tankTurnForceAngSpd=0.80000001;
accelAidForceCoef=1.5;
accelAidForceYOffset=-1;
accelAidForceSpd=1.4;

class Wheels
{
	class L2
	{
		side="left";
		suspTravelDirection[]={0,-1,0};
		boneName="wheel_podkoloL1";
		center="wheel_1_2_axis";
		boundary="wheel_1_2_bound";
		steering=0;
		width=0.5;
		mass=200;
		MOI=9;
		//MOI=8.5;
		dampingRate=1150;
		dampingRateInAir=1150;
		dampingRateDestroyed=3000;
		maxDroop=0.09;
		maxCompression=0.09;
		//maxCompression=0;
		sprungMass=4580;
		//sprungMass=8700;
		springStrength=350000;
		springDamperRate=20000;
		maxBrakeTorque=30000;
		latStiffX=1;
		latStiffY=35;
		longitudinalStiffnessPerUnitGravity=14000;
		frictionVsSlipGraph[] = { { 0.0, 1.0 }, { 0.5, 2.0 }, { 1.0, 3.0 } };
		//frictionVsSlipGraph[] = { { 0.0, 1.0 }, { 0.5, 2.0 }, { 1.0, 3.0 } };
	};
	class L3: L2
	{
		boneName="wheel_podkolol2";
		center="wheel_1_3_axis";
		boundary="wheel_1_3_bound";
	};
	class L4: L2
	{
		boneName="wheel_podkolol3";
		center="wheel_1_4_axis";
		boundary="wheel_1_4_bound";
	};
	class L5: L2
	{
		boneName="wheel_podkolol4";
		center="wheel_1_5_axis";
		boundary="wheel_1_5_bound";
	};
	class L6: L2
	{
		boneName="wheel_podkolol5";
		center="wheel_1_6_axis";
		boundary="wheel_1_6_bound";
	};
	class L7: L2
	{
		boneName="wheel_podkolol6";
		center="wheel_1_7_axis";
		boundary="wheel_1_7_bound";
	};
	class L8: L2
	{
		boneName="";
		center="wheel_1_8_axis";
		boundary="wheel_1_8_bound";
		maxDroop=0;
		maxCompression=0;
		sprungMass=0;
	};
	class L9: L2
	{
		boneName="";
		center="wheel_1_8_axis";
		boundary="wheel_1_8_bound";
		maxDroop=0;
		maxCompression=0;
		sprungMass=0;
	};
	class L1: L2
	{
		boneName="";
		center="wheel_1_1_axis";
		boundary="wheel_1_1_bound";
		maxDroop=0;
		maxCompression=0;
		sprungMass=0;
	};
	class R2: L2
	{
		side="right";
		suspTravelDirection[]={0,-1,0};
		boneName="wheel_podkolop1";
		center="wheel_2_2_axis";
		boundary="wheel_2_2_bound";
	};
	class R3: R2
	{
		boneName="wheel_podkolop2";
		center="wheel_2_3_axis";
		boundary="wheel_2_3_bound";
	};
	class R4: R2
	{
		boneName="wheel_podkolop3";
		center="wheel_2_4_axis";
		boundary="wheel_2_4_bound";
	};
	class R5: R2
	{
		boneName="wheel_podkolop4";
		center="wheel_2_5_axis";
		boundary="wheel_2_5_bound";
	};
	class R6: R2
	{
		boneName="wheel_podkolop5";
		center="wheel_2_6_axis";
		boundary="wheel_2_6_bound";
	};
	class R7: R2
	{
		boneName="wheel_podkolop6";
		center="wheel_2_7_axis";
		boundary="wheel_2_7_bound";
	};
	class R8: R2
	{
		boneName="";
		center="wheel_2_8_axis";
		boundary="wheel_2_8_bound";
		maxDroop=0;
		maxCompression=0;
		sprungMass=0;
	};
	class R9: R2
	{
		boneName="";
		center="wheel_2_8_axis";
		boundary="wheel_2_8_bound";
		maxDroop=0;
		maxCompression=0;
		sprungMass=0;
	};
	class R1: R2
	{
		boneName="";
		center="wheel_2_1_axis";
		boundary="wheel_2_1_bound";
		maxDroop=0;
		maxCompression=0;
		sprungMass=0;
	};
};