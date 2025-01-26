		wheelCircumference = 3.805;
		waterLeakiness = 2.5;
		normalSpeedForwardCoef = 0.54;
		accelAidForceYOffset = -1;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 30;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 45;
		brakeIdleSpeed = 1.78;
		maxSpeed = 105;
		fuelCapacity = 24;
		//idleRpm = 500;
		//redRpm = 2200;
		idleRpm = 500;
		redRpm = 4000;
maxFordingDepth = 1.0;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.84,"N",0,"D1",3.43,"D2",2.01,"D3",1.42,"D4",1,"D5",0.83,"D6",0.59};
			TransmissionRatios[] = {"High",8};
			AmphibiousRatios[] = {"R1",-10,"N",0,"D1",25};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 3.3;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 250;
		maxOmega = 230;
		minOmega = 50;
		peakTorque = 1000;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{"(0/2200)","(0/1630)"},{"(900/2200)","(1200/1630)"},{"(1250/2200)","(1500/1630)"},{"(1300/2200)","(1630/1630)"},{"(1350/2200)","(1600/1630)"},{"(1600/2200)","(1400/1630)"},{"(2200/2200)","(1200/1630)"},{"(5800/2200)","(0/1630)"}};
		changeGearMinEffectivity[] = {0.5,0.15,0.97,0.97,0.97,0.97,0.97,0.985};
		switchTime = 0.1;
		latency = 0.5;
		thrustDelay = 0.1;
		class Wheels
		{
			class L1
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_1_1_damper";
				steering = 1;
				center = "wheel_1_1_center";
				boundary = "wheel_1_1_bound";
				width = "0.35";
				mass = 50;
				MOI = 25;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 5500;
				maxHandBrakeTorque = 0;
				suspForceAppPointOffset = "wheel_1_1_center";
				tireForceAppPointOffset = "wheel_1_1_center";
				maxCompression = 0.075;
				maxDroop = 0.075;
				sprungMass = 850;
				springStrength = 125000;
				springDamperRate = 12000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 20;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_center";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_center";
				tireForceAppPointOffset = "wheel_1_2_center";
			};
			class L3: L1
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_center";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_center";
				tireForceAppPointOffset = "wheel_1_3_center";
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_center";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_center";
				tireForceAppPointOffset = "wheel_2_1_center";
			};
			class R2: R1
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_center";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_center";
				tireForceAppPointOffset = "wheel_2_2_center";
			};
			class R3: R1
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_center";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_center";
				tireForceAppPointOffset = "wheel_2_3_center";
				maxHandBrakeTorque = 300000;
			};
		};