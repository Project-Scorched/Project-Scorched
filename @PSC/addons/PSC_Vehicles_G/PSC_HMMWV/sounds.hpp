        attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_ext_getout","db+5",1,9};
		soundGetOut[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_int_getout","db+8",1,25};
		soundDammage[] = {"","db-5",1};
		soundEngineOnInt[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_start","db+3",1.0};
		soundEngineOnExt[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_start","db+3",1.0,200};
		soundEngineOffInt[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_stop","db+3",1.0};
		soundEngineOffExt[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_stop","db+3",1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1","db0",1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2","db0",1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3","db0",1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4","db0",1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1","db0",1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1","db0",1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2","db0",1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3","db0",1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4","db0",1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm0","db-13",1,150};
				frequency = "0.9 + ((rpm/2100) factor[(400/2100),(1150/2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/2100) factor[(400/2100),(700/2100)]) * ((rpm/2100) factor[(1100/2100),(900/2100)]))";
			};
			class Engine
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm1","db-11",1,200};
				frequency = "0.8 + ((rpm/2100) factor[(900/2100),(2100/2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/2100) factor[(870/2100),(1100/2100)]) * ((rpm/2100) factor[(2100/2100),(1300/2100)]))";
			};
			class Engine1_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm1","db-9",1,240};
				frequency = "0.8 + ((rpm/2100) factor[(1300/2100),(3100/2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/2100) factor[(1250/2100),(2050/2100)]) * ((rpm/2100) factor[(3100/2100),(2300/2100)]))";
			};
			class Engine2_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm2","db-8",1,280};
				frequency = "0.8 + ((rpm/2100) factor[(2200/2100),(4100/2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/2100) factor[(2250/2100),(3050/2100)]) * ((rpm/2100) factor[(4100/2100),(3300/2100)]))";
			};
			class Engine3_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm2","db-7",1,320};
				frequency = "0.8 + ((rpm/2100) factor[(3300/2100),(4900/2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/2100) factor[(3250/2100),(4050/2100)]) * ((rpm/2100) factor[(4870/2100),(4200/2100)]))";
			};
			class Engine4_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm2","db-6",1,360};
				frequency = "0.8 + ((rpm/2100) factor[(4200/2100),(6200/2100)])*0.2";
				volume = "engineOn*camPos*(((rpm/2100) factor[(4150/2100),(4800/2100)]) * ((rpm/2100) factor[(6150/2100),(5150/2100)]))";
			};
			class Engine5_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_rpm2","db-5",1,420};
				frequency = "0.95 + ((rpm/2100) factor[(5100/2100),(6900/2100)])*0.15";
				volume = "engineOn*camPos*((rpm/2100) factor[(5100/2100),(6100/2100)])";
			};
			class IdleThrust
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_idle_exhaust","db-6",1,200};
				frequency = "0.9 + ((rpm/2100) factor[(400/2100),(1150/2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(400/2100),(700/2100)]) * ((rpm/2100) factor[(1100/2100),(900/2100)]))";
			};
			class EngineThrust
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_low1_exhaust","db-5",1,250};
				frequency = "0.8 + ((rpm/2100) factor[(900/2100),(2100/2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(870/2100),(1100/2100)]) * ((rpm/2100) factor[(2100/2100),(1300/2100)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_low1_exhaust","db-4",1,280};
				frequency = "0.8 + ((rpm/2100) factor[(1300/2100),(3100/2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(1250/2100),(2050/2100)]) * ((rpm/2100) factor[(3100/2100),(2300/2100)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_high1_exhaust","db-3",1,320};
				frequency = "0.8 + ((rpm/2100) factor[(2200/2100),(4100/2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(2250/2100),(3050/2100)]) * ((rpm/2100) factor[(4100/2100),(3300/2100)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_high1_exhaust","db-2",1,360};
				frequency = "0.8 + ((rpm/2100) factor[(3300/2100),(4900/2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(3250/2100),(4050/2100)]) * ((rpm/2100) factor[(4870/2100),(4200/2100)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_high1_exhaust","db0",1,400};
				frequency = "0.8 + ((rpm/2100) factor[(4200/2100),(6200/2100)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(4150/2100),(4800/2100)]) * ((rpm/2100) factor[(6150/2100),(5150/2100)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_ext_high1_exhaust","db2",1,450};
				frequency = "0.9 + ((rpm/2100) factor[(5100/2100),(6900/2100)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2100) factor[(5100/2100),(6100/2100)])";
			};
			class Idle_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm0","db-15",1};
				frequency = "0.9 + ((rpm/2100) factor[(400/2100),(1150/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2100) factor[(400/2100),(700/2100)]) * ((rpm/2100) factor[(1100/2100),(900/2100)]))";
			};
			class Engine_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm1","db-14",1};
				frequency = "0.8 + ((rpm/2100) factor[(900/2100),(2100/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2100) factor[(870/2100),(1100/2100)]) * ((rpm/2100) factor[(2100/2100),(1300/2100)]))";
			};
			class Engine1_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm1","db-12",1};
				frequency = "0.8 + ((rpm/2100) factor[(1300/2100),(3100/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2100) factor[(1250/2100),(2050/2100)]) * ((rpm/2100) factor[(3100/2100),(2300/2100)]))";
			};
			class Engine2_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm2","db-11",1};
				frequency = "0.8 + ((rpm/2100) factor[(2200/2100),(4100/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2100) factor[(2250/2100),(3050/2100)]) * ((rpm/2100) factor[(4100/2100),(3300/2100)]))";
			};
			class Engine3_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm2","db-10",1};
				frequency = "0.8 + ((rpm/2100) factor[(3300/2100),(4900/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2100) factor[(3250/2100),(4050/2100)]) * ((rpm/2100) factor[(4870/2100),(4200/2100)]))";
			};
			class Engine4_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm2","db-9",1};
				frequency = "0.8 + ((rpm/2100) factor[(4200/2100),(6200/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/2100) factor[(4150/2100),(4800/2100)]) * ((rpm/2100) factor[(6150/2100),(5150/2100)]))";
			};
			class Engine5_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_rpm2","db-6",1};
				frequency = "0.95 + ((rpm/2100) factor[(5100/2100),(6900/2100)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/2100) factor[(5100/2100),(6100/2100)])";
			};
			class IdleThrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_idle_exhaust","db-10",1};
				frequency = "0.9 + ((rpm/2100) factor[(400/2100),(1150/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(400/2100),(700/2100)]) * ((rpm/2100) factor[(1100/2100),(900/2100)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_low1_exhaust","db-9",1};
				frequency = "0.8 + ((rpm/2100) factor[(900/2100),(2100/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(870/2100),(1100/2100)]) * ((rpm/2100) factor[(2100/2100),(1300/2100)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_low1_exhaust","db-8",1};
				frequency = "0.8 + ((rpm/2100) factor[(1300/2100),(3100/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(1250/2100),(2050/2100)]) * ((rpm/2100) factor[(3100/2100),(2300/2100)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_high1_exhaust","db-7",1};
				frequency = "0.8 + ((rpm/2100) factor[(2200/2100),(4100/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(2250/2100),(3050/2100)]) * ((rpm/2100) factor[(4100/2100),(3300/2100)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_high1_exhaust","db-6",1};
				frequency = "0.8 + ((rpm/2100) factor[(3300/2100),(4900/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(3250/2100),(4050/2100)]) * ((rpm/2100) factor[(4870/2100),(4200/2100)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_high1_exhaust","db-5",1};
				frequency = "0.8 + ((rpm/2100) factor[(4200/2100),(6200/2100)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/2100) factor[(4150/2100),(4800/2100)]) * ((rpm/2100) factor[(6150/2100),(5150/2100)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"PSC_Vehicles_G\PSC_HMMWV\HMMWV_sound\hmmwv_engine_int_high1_exhaust","db-4",1};
				frequency = "0.9 + ((rpm/2100) factor[(5100/2100),(6900/2100)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/2100) factor[(5100/2100),(6100/2100)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2","db-6",1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3","db-8",1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2","db-6",1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3","db-12",1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02","db-3",1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt","db-3",1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int","db-10",1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int","db-10",1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};