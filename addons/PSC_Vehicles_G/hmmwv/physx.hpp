        thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		fuelCapacity = 50;
		wheelCircumference = 2.5;
		antiRollbarForceCoef = 1.9;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 150;
		idleRpm = 400;
		redRpm = 3500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.475,"N",0,"D1",2.367,"D2",1.67,"D3",1.238,"D4",0.99,"D5",0.802,"D6",0.601};
			TransmissionRatios[] = {"High",6};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 2;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20;
		enginePower = 150;
		maxOmega = 450;
		peakTorque = 425;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0,0.15},{0.25,0.65},{0.35,0.75},{0.461,1},{0.6,0.95},{0.7,0.85},{0.8,0.75},{1,0.5}};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.126";
				mass = 35;
				MOI = 12.8;
				dampingRate = 0.1;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 400;
				springStrength = 14400;
				springDamperRate = 4120;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 2.5;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3500;
			};
		};