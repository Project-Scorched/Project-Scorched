		attenuationEffectType = "HeliAttenuation"; //Attenuation in interior (Link to Attenuation.hpp in folder SOUNDS_F)

		soundGetIn[]={"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",db0, 1, 40};
		soundGetOut[]={"A3\Sounds_F\air\Plane_Fighter_03\getout",db0, 1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"PSC_Vehicles_A\XVB02_Base\Sound\EngineStart.ogg", db2, 1.0};
		soundEngineOnExt[] = {"PSC_Vehicles_A\XVB02_Base\Sound\IntStart.ogg", db8, 1.0, 500};
		soundEngineOffInt[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int", db-0, 1.0};
		soundEngineOffExt[] =  {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext", db5, 1.0, 500};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", db-20, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", db-20, 1.5};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", db-2, 1.0, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", db-2, 1.0, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", db-4, 1.0, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", db-4, 1.0, 100};

	/*	EXTERNAL SOUNDS */
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", db0, 1.0, 100};
			frequency = 1;
			volume = "(scrubLand factor[0.01, 0.20])";
		};

		class Sounds
		{

			class EngineLowOutBase
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\EngineDistance.ogg", db6, 1.0, 1200};
				frequency = "1";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};

			class EngineDistance1
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\EngineDistance.ogg", db10, 1.0, 1200};
				frequency ="1";
				volume = "camPos*2*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
				range = 3000;
				rangeCurve[] =
				{
					{ 0, 0.2 },
					{ 25, 0.7 },
					{ 50, 1 },
					{ 3000, 1 }
				};
			};

			class EngineBase
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\EngineBase.ogg", db8, 1.2, 1400};
				frequency = "1";
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};

			class ForsageOut
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\EngineDistance.ogg", db5, 0.99, 1700};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14, 3.92, 2.0, 0.5};
			};

			class WindNoiseOut
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-5, 1.0, 150};
				frequency ="(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};

	/*	INTERNAL SOUNDS */

			class EngineLowIn
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\IntThwop.ogg", db0, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = (1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]));
			};

			class EngineHighIn
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\IntThwop.ogg", db1, 1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};

			class ForsageIn
			{
				sound[] =  {"PSC_Vehicles_A\XVB02_Base\Sound\IntBase.ogg", db0, 1.0};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};

			class WindNoiseIn
			{
				sound[] =  {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-6, 1.0};
				frequency ="(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
		};