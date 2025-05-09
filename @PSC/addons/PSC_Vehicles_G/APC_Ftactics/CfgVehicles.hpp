class CfgMovesBasic
{
	class DefaultDie;	
	class ManActions
	{
		PSC_APC_Ftactics_driver="PSC_APC_Ftactics_driver";
		PSC_APC_Ftactics_browning="PSC_APC_Ftactics_browning";
		PSC_APC_Ftactics_grenade_launcher="PSC_APC_Ftactics_grenade_launcher";
		PSC_APC_Ftactics_gunner_in="PSC_APC_Ftactics_gunner_in";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class Crew;	
		
		class PSC_APC_Ftactics_driver : Crew
		{
			file = "psc_vehicles_g\APC_Ftactics\rtm\APC_Ftactics_driver.rtm";
			interpolateTo[] = {"PSC_APC_Ftactics_driver", 1};
		};
		class PSC_APC_Ftactics_browning : Crew
		{
			file = "psc_vehicles_g\APC_Ftactics\rtm\APC_Ftactics_browning.rtm";
			interpolateTo[] = {"PSC_APC_Ftactics_browning", 1};
			speed = 1e+10;
			boundingSphere = 2.5;
		};
		class PSC_APC_Ftactics_grenade_launcher : Crew
		{
			file = "psc_vehicles_g\APC_Ftactics\rtm\APC_Ftactics_grenade_launcher.rtm";
			interpolateTo[] = {"PSC_APC_Ftactics_grenade_launcher", 1};
			speed = 1e+10;
			boundingSphere = 2.5;
		};
		class PSC_APC_Ftactics_gunner_in : Crew
		{
			file = "psc_vehicles_g\APC_Ftactics\rtm\APC_Ftactics_gunner_in.rtm";
			interpolateTo[] = {"PSC_APC_Ftactics_gunner_in", 1};
		};
	};
};

class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret:NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	class PSC_APC_Ftactics_Base: Tank_F
	{
		scope = 0;
		vehicleClass = "Support";
		accuracy = 0.3;
		author = "Project Scorched";

		model = "\psc_vehicles_g\APC_Ftactics\APC_Ftactics\APC_Ftactics.p3d";
		picture = "\psc_vehicles_g\APC_Ftactics\UI\picture_APC_Ftactics_ca.paa";
		icon =	"\psc_vehicles_g\APC_Ftactics\UI\Icon_APC_Ftactics_CA.paa";
		
		extCameraPosition[]	= {0,4,-13};

	    #include "sounds.hpp"
		#include "physx.hpp"

		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = 0;

		armor = 500;
		armorStructural = 6;

		class HitPoints: HitPoints {
			class HitHull: HitHull {
				armor=0.8;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit = 0.14;
				explosionShielding = 2.0;
				radius = 0.25;
			};
			class HitEngine: HitEngine {
				armor=1;
				material=-1;
				name="motor";
				passThrough=0.8;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
		};
		
		class compartmentsLights
		{
   		 class Comp1
 		 {
 		       class Light1
 		       {
					point = "light_interior1";
					color[] = {4, 8, 3};
					ambient[] = {0, 0.5, 0};
					
					intensity=60;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					class Attenuation
					{
						start=0;
						constant=0;
						linear=1;
						quadratic=50;
						hardLimitStart=0.15;
						hardLimitEnd=1.2;
					};
    		   };
  		    };
			/*class Comp2
 		    {
 		       class Light3
    		   {
    		        point = "light_interior2";
                    color[] = {255, 30, 10};
                    ambient[] = {1.0, 0.1, 0.05};
					
                    intensity=100;
					size=0;
					useFlare=0;
					flareSize=0;
					flareMaxDistance=0;
					dayLight=0;
					blinking=0;
					angle = 180;
					class Attenuation
					{
						start=0.1;
						constant=0;
						linear=0.8;
						quadratic=50;
						hardLimitStart=0.4;
						hardLimitEnd=2.5;
					};
    		     };
		    };*/
		};
		class Reflectors
		{
			class Left
			{
				position 	= "Light_L";
				direction 	= "Light_L_end";
				hitpoint 	= "Light_L";
				selection	= "Light_L";
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				size = 1;
				innerAngle = 30;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position 	= "Light_R";
				direction 	= "Light_R_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class Left2: Left
			{
				position 	= "light_L_flare";
				useFlare 	= 1;
			};
			class Right2: Right
			{
				position 	= "light_R_flare";
				useFlare 	= 1;
			};
			class Left_TOP
			{
				position 	= "Light_TOP_L";
				direction 	= "Light_TOP_L_end";
				hitpoint 	= "Light_TOP_L";
				selection	= "Light_TOP_L";
				color[] 		= {1900, 1800, 1700};
				ambient[]		= {5, 5, 5};
				size 			= 1;
				innerAngle 		= 100;
				outerAngle 		= 179;
				coneFadeCoef 	= 10;
				intensity 		= 1;
				useFlare 		= 0;	
				dayLight 		= 0;
				flareSize 		= 1.0;

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;
					hardLimitEnd 	= 60;
				};
			};
			class Right_TOP: Left_TOP
			{
				position 	= "Light_TOP_R";
				direction 	= "Light_TOP_R_end";
				hitpoint 	= "Light_TOP_R";
				selection 	= "Light_TOP_R";
			};
			class Left2_TOP: Left_TOP
			{
				position 	= "light_TOP_L_flare";
				useFlare 	= 1;
			};
			class Right2_TOP: Right_TOP
			{
				position 	= "light_TOP_R_flare";
				useFlare 	= 1;
			};
			class light1_ramp
			{
				position = "light1_ramp";
				direction = "";
				hitpoint = "light1_ramp_hit";
				selection = "light1_ramp";
				color[] = {255, 30, 10};
                ambient[] = {1.0, 0.1, 0.05};
				size = 1;
				intensity = 100;
				useFlare = 0;
				flareSize = 100;
				flareMaxDistance = 5;
				coneFadeCoef = 0.1;
				innerAngle = 360;
				outerAngle = 360;
				dayLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 70;
					hardLimitStart = 0.4;
					hardLimitEnd = 1.2;
				};
			};
			class light2_ramp: light1_ramp
			{
				position = "light2_ramp";
				direction = "";
				hitpoint = "light2_ramp_hit";
				selection = "light2_ramp";
			};
			class Light_Rear_1L
			{
				position 	= "Light_Rear_1L_pos";
				direction 	= "Light_Rear_1L_dir";
				hitpoint 	= "Light_Rear_1L_hit";
				selection 	= "Light_Rear_1L";
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				useFlare = 1;
				flareSize = 1.5;	
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0.5;
					quadratic = 0.5;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
			class Light_Rear_2L: Light_Rear_1L
			{
				position 	= "Light_Rear_2L_pos";
				direction 	= "Light_Rear_2L_dir";
				hitpoint 	= "Light_Rear_2L_hit";
				selection 	= "Light_Rear_2L";
			};
			class Light_Rear_3L: Light_Rear_1L
			{
				position 	= "Light_Rear_3L_pos";
				direction 	= "Light_Rear_3L_dir";
				hitpoint 	= "Light_Rear_3L_hit";
				selection 	= "Light_Rear_3L";
			};
			class Light_Rear_1R: Light_Rear_1L
			{
				position 	= "Light_Rear_1R_pos";
				direction 	= "Light_Rear_1R_dir";
				hitpoint 	= "Light_Rear_1R_hit";
				selection 	= "Light_Rear_1R";
			};
			class Light_Rear_2R: Light_Rear_1L
			{
				position 	= "Light_Rear_2R_pos";
				direction 	= "Light_Rear_2R_dir";
				hitpoint 	= "Light_Rear_2R_hit";
				selection 	= "Light_Rear_2R";
			};
			class Light_Rear_3R: Light_Rear_1L
			{
				position 	= "Light_Rear_3R_pos";
				direction 	= "Light_Rear_3R_dir";
				hitpoint 	= "Light_Rear_3R_hit";
				selection 	= "Light_Rear_3R";
			};
		};
		aggregateReflectors[] =
		{
			{"Left","Right","Left2","Right2"},
			{"Left_TOP","Right_TOP","Left2_TOP","Right2_TOP"},
			{"light1_ramp"},
			{"light2_ramp"},
			{"Light_Rear_1L"},
			{"Light_Rear_2L"},
			{"Light_Rear_3L"},
			{"Light_Rear_1R"},
			{"Light_Rear_2R"},
			{"Light_Rear_3R"}
		};
		armorLights = 0.1;
		
		class Turrets: Turrets
		{
			class Light_Rear_1L: MainTurret
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 3-Left";
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerCompartments="Compartment2";
				gunnerAction = "passenger_generic01_foldhands";
				gunnerInAction = "passenger_generic01_foldhands";
				body = "Light_Rear_1L_MainTurret";
				gun = "Light_Rear_1L_mainGun";
				animationSourceBody = "Light_Rear_1L_MainTurret";
				animationSourceGun = "Light_Rear_1L_mainGun";
				gunBeg = "";
				gunEnd = "";
				memoryPointGunnerOptics = "Light_Rear_1L_view";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				initTurn = 140;
				minTurn = 50;
                maxTurn = 180;
				animationSourceElevation = "";
				initElev = -40;
				minElev = -30;
				maxElev = 30;
				minCamElev = -90;
				maxCamElev = 90;
				gunnerHasFlares = 1;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				hasGunner = 1;
				primary = 0;
				canHideGunner = -1;
				//hideProxyInCombat = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				optics = 0;
				lockWhenDriverOut = 0;
				turretFollowFreeLook = 0;
				animationSourceHatch = "";
				primaryGunner = 0;
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				disableSoundAttenuation=1;
				LODOpticsIn = 1000;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				LODOpticsOut = 1000;
				canUseScanners = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.31622776,1,30};
				commanding = 0;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 1;
				startEngine = 0;
				stabilizedInAxes = 0;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 3;
				turretInfoType = "RscWeaponRangeFinder";
				selectionFireAnim = "";
				showCrewAim = 2;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal"
					};
				};
			};
			class Light_Rear_1R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 3-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 4;
				body = "Light_Rear_1R_MainTurret";
				gun = "Light_Rear_1R_mainGun";
				animationSourceBody = "Light_Rear_1R_MainTurret";
				animationSourceGun = "Light_Rear_1R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_1R_view";
				initTurn = -140;
				minTurn = -180;
                maxTurn = -50;
			};
			class Light_Rear_2L: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 2-Left";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 2;
				body = "Light_Rear_2L_MainTurret";
				gun = "Light_Rear_2L_mainGun";
				animationSourceBody = "Light_Rear_2L_MainTurret";
				animationSourceGun = "Light_Rear_2L_mainGun";
				memoryPointGunnerOptics = "Light_Rear_2L_view";
				initTurn = 90;
				minTurn = 30;
                maxTurn = 150;
			};
			class Light_Rear_2R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 2-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 5;
				body = "Light_Rear_2R_MainTurret";
				gun = "Light_Rear_2R_mainGun";
				animationSourceBody = "Light_Rear_2R_MainTurret";
				animationSourceGun = "Light_Rear_2R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_2R_view";
				initTurn = -90;
				minTurn = -150;
                maxTurn = -30;
			};
			class Light_Rear_3L: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 1-Left";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 3;
				body = "Light_Rear_3L_MainTurret";
				gun = "Light_Rear_3L_mainGun";
				animationSourceBody = "Light_Rear_3L_MainTurret";
				animationSourceGun = "Light_Rear_3L_mainGun";
				memoryPointGunnerOptics = "Light_Rear_3L_view";
				initTurn = 45;
				minTurn = 45;
                maxTurn = 130;
			};
			class Light_Rear_3R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 1-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 6;
				body = "Light_Rear_3R_MainTurret";
				gun = "Light_Rear_3R_mainGun";
				animationSourceBody = "Light_Rear_3R_MainTurret";
				animationSourceGun = "Light_Rear_3R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_3R_view";
				initTurn = -45;
				minTurn = -130;
                maxTurn = -45;
			};
		};
		
		smokeLauncherGrenadeCount = 0;
		smokeLauncherVelocity = 0;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 0;
		
		hiddenSelections[]=
		{
			"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8"
		};
		hiddenSelectionsTextures[]=
		{
			"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			"\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
			"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",
			"\psc_vehicles_g\apc_ftactics\data\common\black\cabine_low_co.paa",
			"\psc_vehicles_g\apc_ftactics\data\common\black\landing_compartment_low_co.paa",
			"\psc_vehicles_g\apc_ftactics\data\common\black\main_low_co.paa",
			"\psc_vehicles_g\apc_ftactics\data\common\black\cabin_inside_low_co.paa",
			"\psc_vehicles_g\apc_ftactics\data\common\black\bottom_low_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			
			"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
			"\psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
		};
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
			    "A3\data_f\Glass_veh_damage.rvmat",
			    "A3\data_f\Glass_veh_damage.rvmat",
				
				"psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_destruct.rvmat",

				"psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_body_destruct.rvmat",
				
				"psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat",
				
				"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_turret_destruct.rvmat",

				"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_02\Data\MBT_02_tracks_destruct.rvmat",
				
				"psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat",
				
				"psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_damage.rvmat",
				"A3\Armor_F_Gamma\MBT_01\Data\MBT_01_scorcher_destruct.rvmat"
			};
		};

		class EventHandlers
		{
            init = "_this call { params ['_vehicle']; _vehicle addAction ['Turn left ON', { (_this select 0) animate ['turn_left', 1]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_left"" < 0.5)']; _vehicle addAction ['Turn left OFF', { (_this select 0) animate ['turn_left', 0]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_left"" > 0.5)']; _vehicle addAction ['Turn right ON', { (_this select 0) animate ['turn_right', 1]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_right"" < 0.5)']; _vehicle addAction ['Turn right OFF', { (_this select 0) animate ['turn_right', 0]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_right"" > 0.5)']; _vehicle addAction ['Open Ramp', { (_this select 0) animate ['ramp', 1]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""ramp"" < 0.5)']; _vehicle addAction ['Close Ramp', { (_this select 0) animate ['ramp', 0]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""ramp"" > 0.5)'];_vehicle addAction ['Spotlight ON', {(_this select 0) animate ['driver_projector', 1];(_this select 0) animate ['Light_Rear_1L_projector', 1];(_this select 0) animate ['Light_Rear_2L_projector', 1];(_this select 0) animate ['Light_Rear_3L_projector', 1];(_this select 0) animate ['Light_Rear_1R_projector', 1];(_this select 0) animate ['Light_Rear_2R_projector', 1];(_this select 0) animate ['Light_Rear_3R_projector', 1];}, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""driver_projector"" < 0.5)'];_vehicle addAction ['Spotlight OFF', {(_this select 0) animate ['driver_projector', 0];(_this select 0) animate ['Light_Rear_1L_projector', 0];(_this select 0) animate ['Light_Rear_2L_projector', 0];(_this select 0) animate ['Light_Rear_3L_projector', 0];(_this select 0) animate ['Light_Rear_1R_projector', 0];(_this select 0) animate ['Light_Rear_2R_projector', 0];(_this select 0) animate ['Light_Rear_3R_projector', 0];}, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""driver_projector"" > 0.5)'];_vehicle addEventHandler ['GetIn', {params ['_vehicle', '_role', '_unit', '_turret'];if (gunner _vehicle == _unit) then {_vehicle animate ['hatch_gunner', 1];_vehicle setVariable ['hatch_gunner_user', _unit];};}];_vehicle addEventHandler ['GetOut', {params ['_vehicle', '_role', '_unit', '_turret'];if (_unit == _vehicle getVariable ['hatch_gunner_user', objNull]) then {_vehicle animate ['hatch_gunner', 0];_vehicle setVariable ['hatch_gunner_user', nil];};}];};";
        };
		
		class AnimationSources: AnimationSources
		{
			class PSC_barrels
            {
                displayName = "1. Gasoline barrels";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
			class PSC_cylinders
            {
                displayName = "2. Gas bottles";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
			/**********************/
			class turn_left
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class turn_right: turn_left
			{
			};
			/**********************/
			class ramp
			{
				source = "user";
				animPeriod = 3.285;
				initPhase = 0;
			};
			/**********************/
			class driver_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_1L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_2L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_3L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_1R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_2R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_3R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		
		class PlateInfos
		{
			name = "spz";
			color[] = {1,1,1,1.0};
			plateFont = "RobotoCondensedBold";
			plateFormat	= "###";
			plateLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		};
		
		textureList[]=
		{
			/**********************/
			"common_black",0.5,
			"common_blue",0.5,
			"common_brown",0.5,
			"common_green",0.5,
			"common_grey",0.5,
			"common_white",0.5,
			
			"star_black",0.5,
			"star_blue",0.5,
			"star_brown",0.5,
			"star_green",0.5,
			"star_grey",0.5,
			"star_white",0.5,
			
			"rust_black",0.5,
			"rust_blue",0.5,
			"rust_brown",0.5,
			"rust_green",0.5,
			"rust_grey",0.5,
			"rust_white",0.5,
			
			"rust_star_black",0.5,
			"rust_star_blue",0.5,
			"rust_star_brown",0.5,
			"rust_star_green",0.5,
			"rust_star_grey",0.5,
			"rust_star_white",0.5
			/**********************/
		};
		class TextureSources
		{
			/*******************************************************/
			class common_black
			{
				displayName="Common black";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common\black\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\black\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\black\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\black\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\black\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class common_blue
			{
				displayName="Common blue";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common\blue\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\blue\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\blue\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\blue\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\blue\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class common_brown
			{
				displayName="Common brown";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common\brown\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\brown\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\brown\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\brown\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\brown\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class common_green
			{
				displayName="Common green";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common\green\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\green\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\green\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\green\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\green\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class common_grey
			{
				displayName="Common grey";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common\grey\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\grey\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\grey\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\grey\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\grey\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class common_white
			{
				displayName="Common white";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common\white\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\white\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\white\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\white\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\white\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			/*******************************************************/
			class Star_black
			{
				displayName="Star black";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common_decale\black\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\black\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\black\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\black\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\black\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Star_blue
			{
				displayName="Star blue";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common_decale\blue\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\blue\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\blue\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\blue\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\blue\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Star_brown
			{
				displayName="Star brown";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common_decale\brown\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\brown\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\brown\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\brown\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\brown\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Star_green
			{
				displayName="Star green";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common_decale\green\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\green\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\green\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\green\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\green\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Star_grey
			{
				displayName="Star grey";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common_decale\grey\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\grey\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\grey\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\grey\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\grey\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Star_white
			{
				displayName="Star white";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\common\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\common_decale\white\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\white\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\common\white\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\common\white\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\common\white\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\common\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\common\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\common\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			/*******************************************************/
			class Rust_black
			{
				displayName="Rust black";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust\black\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\black\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\black\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\black\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\black\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_blue
			{
				displayName="Rust blue";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust\blue\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\blue\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\blue\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\blue\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\blue\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_brown
			{
				displayName="Rust brown";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust\brown\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\brown\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\brown\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\brown\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\brown\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_green
			{
				displayName="Rust green";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust\green\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\green\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\green\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\green\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\green\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_grey
			{
				displayName="Rust grey";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust\grey\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\grey\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\grey\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\grey\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\grey\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_white
			{
				displayName="Rust white";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust\white\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\white\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\white\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\white\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\white\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			/*******************************************************/
			class Rust_Star_black
			{
				displayName="Rust star black";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust_decale\black\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\black\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\black\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\black\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\black\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_star_blue
			{
				displayName="Rust star blue";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust_decale\blue\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\blue\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\blue\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\blue\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\blue\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_star_brown
			{
				displayName="Rust star brown";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust_decale\brown\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\brown\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\brown\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\brown\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\brown\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_star_green
			{
				displayName="Rust star green";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust_decale\green\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\green\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\green\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\green\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\green\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_star_grey
			{
				displayName="Rust star grey";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust_decale\grey\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\grey\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\grey\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\grey\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\grey\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			class Rust_star_white
			{
				displayName="Rust star white";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\apc_ftactics\data\glass_low_ca.paa",
			        "\psc_vehicles_g\apc_ftactics\data\panel_low_co.paa",
		           	"\psc_vehicles_g\apc_ftactics\data\rust\track_low_co.paa",

		        	"\psc_vehicles_g\apc_ftactics\data\rust_decale\white\cabine_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\white\landing_compartment_low_co.paa",
					"\psc_vehicles_g\apc_ftactics\data\rust\white\main_low_co.paa",
		        	"\psc_vehicles_g\apc_ftactics\data\rust\white\cabin_inside_low_co.paa",
		         	"\psc_vehicles_g\apc_ftactics\data\rust\white\bottom_low_co.paa"
				};
				Materials[]=
				{
					"psc_vehicles_g\apc_ftactics\data\glass_low_ca.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\panel_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\track_low_co.rvmat",

				    "psc_vehicles_g\apc_ftactics\data\rust\cabine_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\landing_compartment_low_co.rvmat",
					"psc_vehicles_g\apc_ftactics\data\rust\main_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\cabin_inside_low_co.rvmat",
				    "psc_vehicles_g\apc_ftactics\data\rust\bottom_low_co.rvmat"
				};
				factions[]=
				{
					"CIV_F"
				};
			};
			/*******************************************************/
		};
		
		class RenderTargets
		{
			class RearCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;					
				}; 			
			};			
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectTankBack";
			};
			class Exhaust
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustEffectTankBack";
			};
		};
		
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="peredacha";
		driverLeftLegAnimName="pedalL";
		driverRightLegAnimName="pedalR";
		transportSoldier=5;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",0.39810717,1.0};

		driverAction = "PSC_APC_Ftactics_driver";
		driverInAction = "PSC_APC_Ftactics_driver";
		cargoAction[] = {passenger_generic01_foldhands};
		memoryPointsGetInCargo[] =
        {
            "pos cargo1",
            "pos cargo2"
        };
		memoryPointsGetInCargoDir[] =
        {
            "pos cargo1 dir",
            "pos cargo2 dir"
        };
		
		driverforceoptics=0;
		viewDriverInExternal=1;
		forceHideDriver=0;
		viewDriverShadowAmb=0.5;
		viewDriverShadowDiff=0.050000001;
		LODDriverTurnedOut=1100;
		LODDriverOpticsIn=1202;
		driverOpticsModel="\A3\weapons_f\reticle\optics_empty";
		hideProxyInCombat=1;
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;
		driverInfoPanelCameraPos="driverview";
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal"
			};
			initFov=0.45;
			minFov=0.03;
			maxFov=0.8;
		};
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	class PSC_APC_Ftactics: PSC_APC_Ftactics_Base
	{
		displayName = "APC - Tactics";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		forceInGarage=1;
		side=3;
		
		accuracy = 1000;
		faction = "CIV_F";
		crew = "C_man_1";
	};
	
	class PSC_APC_Ftactics_browning: PSC_APC_Ftactics_Base
	{
		displayName = "APC Tactics - browning";
		model = "\psc_vehicles_g\APC_Ftactics\APC_Ftactics_browning\APC_Ftactics_browning.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		forceInGarage=1;
		side=3;
		
		accuracy = 1000;
		faction = "CIV_F";
		crew = "C_man_1";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets{};
				gunnerName = "Commander Gun";
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGun[] = {"usti hlavne"};
				proxyIndex = 7;
				proxyType = "CPGunner";
				gunnerCompartments="Compartment2";
				weapons[]=
				{
					"HMG_127"
				};
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_127x99_mag_Tracer_Yellow"
				};
				canUseScanners = 0;
				allowTabLock = 0;
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				soundServoVertical[] = {"A3\sounds_f\dummysound",0.01,1,10};
				isPersonTurret = 0;
				usePip = 0;
				commanding = 2;
				minElev = -10;
				initElev = 0;
				maxElev = 30;
				gunnerAction = "PSC_APC_Ftactics_browning";
				gunnerInAction = "";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 0;
				canHideGunner = 0;
				lodturnedout = 1000;
				lodturnedin = 1000;
				lodopticsout = 1000;
				lodopticsin = 1000;
				stabilizedInAxes = 0;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 3;
				turretInfoType = "RscOptics_Offroad_01";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				selectionFireAnim = "zasleh";
				primaryGunner = 1;
				primaryObserver = 0;
				startEngine = 0;
				maxhorizontalrotspeed = 1.5;
				maxverticalrotspeed = 1.5;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 1;
				gunnerLeftLegAnimName = "legs";
				gunnerRightLegAnimName = "legs";
				gunnerlefthandanimname = "OtocHlaven";
				gunnerrighthandanimname = "OtocHlaven";
				class ViewOptics: RCWSOptics
				{
					initFov = 0.375;
					minFov = 0.375;
					maxFov = 0.375;
					visionMode[] = {"Normal"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 0.75;
					visionMode[] = {};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner
					{
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
					};
				};
				class CommanderOptics{};
			};
			class Light_Rear_1L: MainTurret
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 3-Left";
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerCompartments="Compartment2";
				gunnerAction = "passenger_generic01_foldhands";
				gunnerInAction = "passenger_generic01_foldhands";
				body = "Light_Rear_1L_MainTurret";
				gun = "Light_Rear_1L_mainGun";
				animationSourceBody = "Light_Rear_1L_MainTurret";
				animationSourceGun = "Light_Rear_1L_mainGun";
				gunBeg = "";
				gunEnd = "";
				memoryPointGunnerOptics = "Light_Rear_1L_view";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				initTurn = 140;
				minTurn = 50;
                maxTurn = 180;
				animationSourceElevation = "";
				initElev = -40;
				minElev = -30;
				maxElev = 30;
				minCamElev = -90;
				maxCamElev = 90;
				gunnerHasFlares = 1;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				hasGunner = 1;
				primary = 0;
				canHideGunner = -1;
				//hideProxyInCombat = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				optics = 0;
				lockWhenDriverOut = 0;
				turretFollowFreeLook = 0;
				animationSourceHatch = "";
				primaryGunner = 0;
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				disableSoundAttenuation=1;
				LODOpticsIn = 1000;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				LODOpticsOut = 1000;
				canUseScanners = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.31622776,1,30};
				commanding = 0;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 1;
				startEngine = 0;
				stabilizedInAxes = 0;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 3;
				turretInfoType = "RscWeaponRangeFinder";
				selectionFireAnim = "";
				showCrewAim = 2;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal"
					};
				};
			};
			class Light_Rear_1R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 3-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 4;
				body = "Light_Rear_1R_MainTurret";
				gun = "Light_Rear_1R_mainGun";
				animationSourceBody = "Light_Rear_1R_MainTurret";
				animationSourceGun = "Light_Rear_1R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_1R_view";
				initTurn = -140;
				minTurn = -180;
                maxTurn = -50;
			};
			class Light_Rear_2L: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 2-Left";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 2;
				body = "Light_Rear_2L_MainTurret";
				gun = "Light_Rear_2L_mainGun";
				animationSourceBody = "Light_Rear_2L_MainTurret";
				animationSourceGun = "Light_Rear_2L_mainGun";
				memoryPointGunnerOptics = "Light_Rear_2L_view";
				initTurn = 90;
				minTurn = 30;
                maxTurn = 150;
			};
			class Light_Rear_2R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 2-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 5;
				body = "Light_Rear_2R_MainTurret";
				gun = "Light_Rear_2R_mainGun";
				animationSourceBody = "Light_Rear_2R_MainTurret";
				animationSourceGun = "Light_Rear_2R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_2R_view";
				initTurn = -90;
				minTurn = -150;
                maxTurn = -30;
			};
			class Light_Rear_3L: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 1-Left";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 3;
				body = "Light_Rear_3L_MainTurret";
				gun = "Light_Rear_3L_mainGun";
				animationSourceBody = "Light_Rear_3L_MainTurret";
				animationSourceGun = "Light_Rear_3L_mainGun";
				memoryPointGunnerOptics = "Light_Rear_3L_view";
				initTurn = 45;
				minTurn = 45;
                maxTurn = 130;
			};
			class Light_Rear_3R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 1-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 6;
				body = "Light_Rear_3R_MainTurret";
				gun = "Light_Rear_3R_mainGun";
				animationSourceBody = "Light_Rear_3R_MainTurret";
				animationSourceGun = "Light_Rear_3R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_3R_view";
				initTurn = -45;
				minTurn = -130;
                maxTurn = -45;
			};
		};
		
		class AnimationSources: AnimationSources
		{
			class PSC_barrels
            {
                displayName = "1. Gasoline barrels";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
			class PSC_cylinders
            {
                displayName = "2. Gas bottles";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
			/**********************/
			class turn_left
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class turn_right: turn_left
			{
			};
			/**********************/
			class ramp
			{
				source = "user";
				animPeriod = 3.285;
				initPhase = 0;
			};
			class hatch_gunner
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			/**********************/
			class driver_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_1L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_2L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_3L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_1R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_2R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_3R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			/**********************/
			class muzzle_rot {source = "ammorandom"; weapon = "HMG_127";};
			class muzzle_hide {source = "reload"; weapon = "HMG_127";};
			class recoil {source = "reload"; weapon = "HMG_127";};
			class reloadmagazine {source = "reloadmagazine"; weapon = "HMG_127";};
		};
	};
	
	class PSC_APC_Ftactics_grenade_launcher: PSC_APC_Ftactics_Base
	{
		displayName = "APC Tactics - Grenade launcher";
		model = "\psc_vehicles_g\APC_Ftactics\APC_Ftactics_grenade_launcher\APC_Ftactics_grenade_launcher.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		forceInGarage=1;
		side=3;
		
		accuracy = 1000;
		faction = "CIV_F";
		crew = "C_man_1";
		
		#include "APC_Ftactics_grenade_launcher\pip.hpp"
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets{};
				gunnerName = "Commander Gun";
				body = "mainTurret";
				gun = "mainGun";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGun[] = {"usti hlavne"};
				proxyIndex = 7;
				proxyType = "CPGunner";
				gunnerCompartments="Compartment2";
				weapons[]=
				{
					"GMG_40mm"
				};
				magazines[]=
				{
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt",
					"96Rnd_40mm_G_belt"
				};
				canUseScanners = 0;
				allowTabLock = 0;
				soundServo[] = {"A3\sounds_f\dummysound",0.01,1,10};
				soundServoVertical[] = {"A3\sounds_f\dummysound",0.01,1,10};
				isPersonTurret = 0;
				usePip = 2;
				commanding = 2;
				minElev = -10;
				initElev = 0;
				maxElev = 30;
				gunnerAction = "PSC_APC_Ftactics_grenade_launcher";
				gunnerInAction = "";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 0;
				canHideGunner = 0;
				stabilizedInAxes = 0;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 1;
				optics=1;
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				gunnerOutOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex = 1;
				turretInfoType = "RscOptics_crows";
				gunnerOutOpticsShowCursor = 0;
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				primaryGunner = 1;
				primaryObserver = 0;
				startEngine = 0;
				maxhorizontalrotspeed = 1.5;
				maxverticalrotspeed = 1.5;
				soundAttenuationTurret = "HeliAttenuationGunner";
				disableSoundAttenuation = 1;
				gunnerLeftLegAnimName = "legs";
				gunnerRightLegAnimName = "legs";
				gunnerlefthandanimname = "OtocHlaven";
				gunnerrighthandanimname = "OtocHlaven";
				class ViewOptics: RCWSOptics
				{
					initFov = 0.375;
					minFov = 0.375;
					maxFov = 0.375;
					visionMode[] = {"Normal"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -45;
					maxAngleX = 45;
					initFov = 0.75;
					minFov = 0.375;
					maxFov = 0.75;
					visionMode[] = {};
				};
				class OpticsIn
				{
					class ViewOptics: ViewGunner
					{
						gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
						gunnerOutOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
					};
				};
				class CommanderOptics{};
			};
			class Light_Rear_1L: MainTurret
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 3-Left";
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerCompartments="Compartment2";
				gunnerAction = "passenger_generic01_foldhands";
				gunnerInAction = "passenger_generic01_foldhands";
				body = "Light_Rear_1L_MainTurret";
				gun = "Light_Rear_1L_mainGun";
				animationSourceBody = "Light_Rear_1L_MainTurret";
				animationSourceGun = "Light_Rear_1L_mainGun";
				gunBeg = "";
				gunEnd = "";
				memoryPointGunnerOptics = "Light_Rear_1L_view";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				initTurn = 140;
				minTurn = 50;
                maxTurn = 180;
				animationSourceElevation = "";
				initElev = -40;
				minElev = -30;
				maxElev = 30;
				minCamElev = -90;
				maxCamElev = 90;
				gunnerHasFlares = 1;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				hasGunner = 1;
				primary = 0;
				canHideGunner = -1;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				optics = 0;
				lockWhenDriverOut = 0;
				turretFollowFreeLook = 0;
				animationSourceHatch = "";
				primaryGunner = 0;
				primaryObserver = 0;
				weapons[] = {};
				magazines[] = {};
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				disableSoundAttenuation=1;
				LODOpticsIn = 1000;
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				LODOpticsOut = 1000;
				canUseScanners = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",0.31622776,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",0.31622776,1,30};
				commanding = 0;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				forceHideGunner = 1;
				startEngine = 0;
				stabilizedInAxes = 0;
				gunnerForceOptics = 0;
				inGunnerMayFire = 1;
				outGunnerMayFire = 0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				gunnerOutOpticsModel = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 3;
				turretInfoType = "RscWeaponRangeFinder";
				selectionFireAnim = "";
				showCrewAim = 2;
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.25;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal"
					};
				};
			};
			class Light_Rear_1R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 3-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 4;
				body = "Light_Rear_1R_MainTurret";
				gun = "Light_Rear_1R_mainGun";
				animationSourceBody = "Light_Rear_1R_MainTurret";
				animationSourceGun = "Light_Rear_1R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_1R_view";
				initTurn = -140;
				minTurn = -180;
                maxTurn = -50;
			};
			class Light_Rear_2L: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 2-Left";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 2;
				body = "Light_Rear_2L_MainTurret";
				gun = "Light_Rear_2L_mainGun";
				animationSourceBody = "Light_Rear_2L_MainTurret";
				animationSourceGun = "Light_Rear_2L_mainGun";
				memoryPointGunnerOptics = "Light_Rear_2L_view";
				initTurn = 90;
				minTurn = 30;
                maxTurn = 150;
			};
			class Light_Rear_2R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 2-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 5;
				body = "Light_Rear_2R_MainTurret";
				gun = "Light_Rear_2R_mainGun";
				animationSourceBody = "Light_Rear_2R_MainTurret";
				animationSourceGun = "Light_Rear_2R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_2R_view";
				initTurn = -90;
				minTurn = -150;
                maxTurn = -30;
			};
			class Light_Rear_3L: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 1-Left";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 3;
				body = "Light_Rear_3L_MainTurret";
				gun = "Light_Rear_3L_mainGun";
				animationSourceBody = "Light_Rear_3L_MainTurret";
				animationSourceGun = "Light_Rear_3L_mainGun";
				memoryPointGunnerOptics = "Light_Rear_3L_view";
				initTurn = 45;
				minTurn = 45;
                maxTurn = 130;
			};
			class Light_Rear_3R: Light_Rear_1L
			{
				class Turrets{};
				class ViewGunner;
				gunnerName = "Light 1-Right";
				gunnerCompartments="Compartment2";
				proxyType = "CPGunner";
				proxyIndex = 6;
				body = "Light_Rear_3R_MainTurret";
				gun = "Light_Rear_3R_mainGun";
				animationSourceBody = "Light_Rear_3R_MainTurret";
				animationSourceGun = "Light_Rear_3R_mainGun";
				memoryPointGunnerOptics = "Light_Rear_3R_view";
				initTurn = -45;
				minTurn = -130;
                maxTurn = -45;
			};
		};
		
		class AnimationSources: AnimationSources
		{
			class PSC_barrels
            {
                displayName = "1. Gasoline barrels";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
			class PSC_cylinders
            {
                displayName = "2. Gas bottles";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
			/**********************/
			class turn_left
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class turn_right: turn_left
			{
			};
			/**********************/
			class ramp
			{
				source = "user";
				animPeriod = 3.285;
				initPhase = 0;
			};
			class hatch_gunner
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			/**********************/
			class driver_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_1L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_2L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_3L_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_1R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_2R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Light_Rear_3R_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			/**********************/
			class muzzle_rot {source = "ammorandom"; weapon = "GMG_40mm";};
			class muzzle_hide {source = "reload"; weapon = "GMG_40mm";};
			class recoil {source = "reload"; weapon = "GMG_40mm";};
			class reloadmagazine {source = "reloadmagazine"; weapon = "GMG_40mm";};
		};
	};
	class PSC_APC_Ftactics_transporter: PSC_APC_Ftactics_Base
	{
		displayName = "APC Tactics - Transporter";
		model = "\psc_vehicles_g\APC_Ftactics\APC_Ftactics_transporter\APC_Ftactics_transporter.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		forceInGarage=1;
		side=3;
		
		accuracy = 1000;
		faction = "CIV_F";
		crew = "C_man_1";
		
		class Turrets: Turrets {};
		
		class VehicleTransport
        {
              class Carrier
              {
                    cargoBayDimensions[]        = {"VTV_limit_1", "VTV_limit_2"};
                    disableHeightLimit          = 1;
                    maxLoadMass                 = 900000000;
                    cargoAlignment[]            = {"center"};
                    cargoSpacing[]              = {0, 0.15, 0};
                    exits[]                     = {"VTV_exit_1"};
                    unloadingInterval           = 2;
                    loadingDistance             = 10;
                    loadingAngle                = 60;
                    parachuteClassDefault       = B_Parachute_02_F;
                    parachuteHeightLimitDefault = 50;
              };
		};
		memoryPointsGetOutCargo[] =
        {
            "pos gunner"
        };
        memoryPointsGetOutCargoDir[] =
        {
            "pos gunner dir"
        };
		
		class EventHandlers
		{
            init = "_this call { params ['_vehicle']; _vehicle addAction ['Turn left ON', { (_this select 0) animate ['turn_left', 1]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_left"" < 0.5)']; _vehicle addAction ['Turn left OFF', { (_this select 0) animate ['turn_left', 0]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_left"" > 0.5)']; _vehicle addAction ['Turn right ON', { (_this select 0) animate ['turn_right', 1]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_right"" < 0.5)']; _vehicle addAction ['Turn right OFF', { (_this select 0) animate ['turn_right', 0]; }, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""turn_right"" > 0.5)']; _vehicle addAction ['Spotlight ON', {(_this select 0) animate ['driver_projector', 1];}, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""driver_projector"" < 0.5)']; _vehicle addAction ['Spotlight OFF', {(_this select 0) animate ['driver_projector', 0];}, nil, 1.5, true, true, '', 'driver _target == player && (_target animationPhase ""driver_projector"" > 0.5)'];};";
		};
		
		class AnimationSources: AnimationSources
		{
			/**********************/
			class turn_left
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class turn_right: turn_left
			{
			};
			/**********************/
			class driver_projector
			{
				source="user";
				animPeriod = 1;
				initPhase = 0;
			};
			/**********************/
		};
	};
};