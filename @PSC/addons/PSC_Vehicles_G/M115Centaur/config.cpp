class CfgPatches
{
    class M115Centaur
    {
		requiredaddons[] = 
		{
			"A3_Soft_F",
			"A3_Armor_F",
			"A3_Characters_F"
		};
		requiredversion = 1.0;
		units[] = 
		{
			"PSC_Newton_VE" //Test
		};
		weapons[] = {};
		magazines[] = {};
		addonRootClass = "PSC_Vehicles_G"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
    };
};



#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};
		#include "CfgCloudlets.hpp"
		#include "effect.hpp"
		#include "sound.hpp"
		#include "Weapon.hpp"
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class Sounds;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class EventHandlers;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class AnimationSources;
		class CommanderOptics;
	};
	class APC_Wheeled_02_base_F: Wheeled_APC_F
	{
	};
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
	};
	class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
	{
	};
	class PSC_M115Centaur_VE: O_APC_Wheeled_02_rcws_v2_F
	{
		#include "physx.hpp"
		author = "$STR_PSC_Author";
		mapSize = 9.74;
		typicalCargo[] = {"B_soldier_F"};
		crew = "PSC_NCR_Trooper_Brown_UN";
		scope = 2;
		scopeCurator = 2;
		LODDriverOpticsIn = 1000;
		LODDriverTurnedin = 1000;
		LODDriverTurnedOut = 1100;
		side = 1;
		faction = "PSC_NCR";
		weaponsGroup1 = 2;
		weaponsGroup2 = "1 + 		4";
		weaponsGroup3 = "8 + 	16 + 	32";
		weaponsGroup4 = "64 + 		128";
		accuracy = 0.25;
		displayName = "M115 Centaur"; //STR_PSC_M115Centaur_VE
		model = "PSC_Vehicles_G\M115Centaur\M115Centaur.p3d";
		icon = "\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\map_APC_Wheeled_02_rcws_ca.paa";
		picture = "\A3\Armor_F_Beta\APC_Wheeled_02\Data\UI\APC_Wheeled_02_RCWS_CA.paa";
		unitInfoType = "RscUnitInfoTank";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\green\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\inside_crate_co.paa"};
		editorSubcategory = "EdSubcat_APCs";
		memoryPointTaskMarker = "TaskMarker_1_pos";
		terrainCoef = 1.5;
		turnCoef = 3;
		canFloat = 0;
		waterAngularDampingCoef = 10.0;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.5;
		preferRoads = 1;
		//engineShiftY = 1.1;
		wheelDestroyRadiusCoef = 0.6;
		armor = 270;
		armorStructural = 6;
		armorLights = 0.1;
		crewCrashProtection = 0.6;
		crewExplosionProtection = 0.999;
		damageResistance = 0.00719;
		//driverAction = "driver_apcwheeled2_out";
		//driverAction = "Commander_MBT_03_cannon_F_out";
		//driverInAction = "Driver_APC_tracked_02_F_in";

		driverAction = "s_driver_out"; 
		driverInAction = "s_driver_in";

		cargoAction[] = {"passenger_apc_narrow_generic01_ns","passenger_apc_narrow_generic03still_ns","passenger_apc_generic01","passenger_apc_generic04","passenger_generic01_foldhands","passenger_apc_generic03"};
		cargoCanEject = 1;
		cargoCompartments[] = {"Compartment2"};
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoIsCoDriver[] = {0};
		cargoProxyIndexes[] = {1,2,3,4,5,6};
		hideWeaponsCargo = 0;
		driverForceOptics = 1;
		driverOpticsModel = "\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics = "driverview";
		driverInfoPanelCameraPos = "driverview_old";
		forceHideDriver = 0;
		transportSoldier = 8;
		class ViewPilot: ViewPilot
		{
			initAngleX = -5;
			initAngleY = 0;
			initFov = 0.9;
			minFov = 0.25;
			maxFov = 1.25;
			minAngleX = -65;
			maxAngleX = 85;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.075;
			maxMoveX = 0.075;
			minMoveY = -0.075;
			maxMoveY = 0.075;
			minMoveZ = -0.075;
			maxMoveZ = 0.1;
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
			initFov = 0.85;
			minFov = 0.85;
			maxFov = 0.85;
		};
		extCameraPosition[] = {0,3,-8.5};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1.4;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitEngine: HitEngine
			{
				armor = -150;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.14;
				explosionShielding = 0.2;
				radius = 0.1;
				//depends = "(HitTrans_L+HitTrans_R)*0.5";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class Fire1
					{
						simulation = "particles";
						type = "ObjectDestructionFire1Tiny";
						position = "destructionEngine";
						intensity = 0.15;
						interval = 1;
						lifeTime = 40;
						enabled = "engineDamage";
					};
					class Light1
					{
						intensity = 0.001;
						interval = 1;
						lifeTime = 1;
						position = "destructionEngine";
						simulation = "light";
						type = "ObjectDestructionLightSmall";
						//enabled = "distToWater";
					};
					class Smoke1
					{
						intensity = 0.15;
						interval = 1;
						lifeTime = 60;
						position = "destructionEngine";
						simulation = "particles";
						type = "SmallWreckSmoke";
					};
					class Smoke2
					{
						intensity = 0.15;
						interval = 1;
						lifeTime = 25;
						position = "destructionEngine_low";
						simulation = "particles";
						type = "ObjectDestructionSmoke2x";
					};
					class Sound
					{
						intensity = 1;
						interval = 1;
						lifeTime = 1;
						position = "destructionEngine";
						simulation = "sound";
						type = "Fire";
					};
				};
			};
			class HitFuel: HitFuel
			{
				armor = -80;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0;
				minimalHit = 0.14;
				explosionShielding = 0.2;
				radius = 0.1;
			};
			class HitModul: HitEngine
			{
				armor = -100;
				material = -1;
				armorComponent = "hit_Modul";
				name = "hit_Modul_point";
				visual = "Modul_hit";
				passThrough = 0;
				minimalHit = 0.14;
				explosionShielding = 0.2;
				radius = 0.2;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					class Smoke2
					{
						intensity = 0.15;
						interval = 1;
						lifeTime = 25;
						position = "destructionEngine_modul";
						simulation = "particles";
						type = "ObjectDestructionSmoke2x";
					};
				};
			};
			class hitShield_L1
			{
				simulation = "Armor_SLAT";
				armorComponent = "Shield_L1";
				name = "Shield_L1_point";
				armor = -200;
				minimalHit = 0.3;
				passThrough = 0;
				visual = "-";
				explosionShielding = 1.5;
				radius = 0.2;
			};
			class hitShield_L2:hitShield_L1
			{
				armorComponent = "Shield_L2";
				name = "Shield_L2_point";
			};
			class hitShield_L3:hitShield_L1
			{
				armorComponent = "Shield_L3";
				name = "Shield_L3_point";
			};
			class hitShield_R1:hitShield_L1
			{
				armorComponent = "Shield_R1";
				name = "Shield_R1_point";
			};
			class hitShield_R2:hitShield_L1
			{
				armorComponent = "Shield_R2";
				name = "Shield_R2_point";
			};
			class hitShield_R3:hitShield_L1
			{
				armorComponent = "Shield_R3";
				name = "Shield_R3_point";
			};
			class HitLFWheel: HitLFWheel
			{
				radius = 0.33;
				visual = "wheel_1_1_hide";
				armorComponent = "wheel_1_1_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius = 0.33;
				visual = "wheel_1_2_hide";
				armorComponent = "wheel_1_2_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius = 0.33;
				visual = "wheel_1_3_hide";
				armorComponent = "wheel_1_3_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius = 0.33;
				visual = "wheel_2_1_hide";
				armorComponent = "wheel_2_1_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius = 0.33;
				visual = "wheel_2_2_hide";
				armorComponent = "wheel_2_2_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius = 0.33;
				visual = "wheel_2_3_hide";
				armorComponent = "wheel_2_3_hide";
				armor = -250;
				minimalHit = -0.016;
				explosionShielding = 4;
				passThrough = 0;
			};
		};
		wheelDamageThreshold = 0.18;
		wheelDamageRadiusCoef = 0.75;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",1.0,1};
		soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_4",0.39810717,1.0};
		smokeLauncherGrenadeCount = 0;
		smokeLauncherVelocity = 0;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 0;
		class Turrets : Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 1;
				gunnerAction = "Commander_APC_Wheeled_02_rcws_F_out";
				gunnerInAction = "Commander_APC_Wheeled_02_rcws_F_in";
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"S_cannon_105mm"};
				magazines[] = {"S_10Rnd_105mm_HE_shells_Tracer_Red"};
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				soundServo[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",1,1,30};
				soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",1,1,30};
				gunnerName = "$STR_POSITION_COMMANDER";
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				LODOpticsIn = 1000; //1000 Gunnerview. 1100 Pilotview. 1200 Cargoview
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				startEngine = 0;
				usePip = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex = 2;
				gunnerOutOpticsModel = "";
				gunnerOpticsEffect[] = {};
				stabilizedInAxes = 3;
				gunnerGetInAction = "GetInHemttBack";
				gunnerGetOutAction = "GetOutHighZamak";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "commanderview";
				selectionFireAnim = "zasleh2";
				turretInfoType = "RscOptics_crows";
				maxHorizontalRotSpeed = 1.0;
				maxVerticalRotSpeed = 1.0;
				minElev = -6;
				maxElev = 8;
				initElev = 0;
				minTurn = -144;
				maxTurn = 144;
				initTurn = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = -100;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.9;
						radius = 0.1; 
						isTurret = 1;
					};
					class HitGun
					{
						armor = -100;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.9;
						radius = 0.1;
						isGun = 1;
					};
				};
				class Turrets{};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.31;
					minFov = 0.034;
					maxFov = 0.31;
					visionMode[] = {"Normal","NVG","TI"};
				};
/*
			class OpticsIn
				{
					class Sign: ViewOptics
					{
						camPos = "gunnerview";
						opticsDisplayName = "Sign";
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
						//gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						minFov = 0.75;
						maxFov = 0.75;
						initFov = 0.75;
						gunnerOpticsEffect[] = {"OpticsCHAbera1"};
					};
					class Sign2: Sign
					{
						minFov = 0.5;
						maxFov = 0.5;
						initFov = 0.5;
					};
				};
*/
				viewGunnerShadowAmb = 0.5;
				viewGunnerShadowDiff = 0.05;
			};
			class Gun_left: NewTurret
			{
				disableSoundAttenuation = 0;
				LODOpticsIn = 1000; //1000 Gunnerview. 1100 Pilotview. 1200 Cargoview
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				LODOpticsOut = 1000;
				canUseScanners = 0;


				weapons[] = {"S_HMG_127_APC_L"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red"};

				//weapons[] = {"LMG_coax"};
				//magazines[] = {"200Rnd_762x51_Belt_Yellow"};

				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 3;
				soundServo[] = {"PSC_Vehicles_G\M115Centaur\data\sounds\turret_turn_manual",4,1,30};
				soundServoVertical[] = {"PSC_Vehicles_G\M115Centaur\data\sounds\turret_turn_manual",4,1,30};
				memoryPointGunnerOptics = "Gun_left_gunnerview";
				turretInfoType = "RscOptics_Offroad_01";
				//gunnerDoor = "PoklopL_turret_2_door";
				startEngine = 0;
				gunnerCompartments = "Compartment2";
				proxyType = "CPGunner";
				gunnerOutOpticsEffect[] = {};
				gunnerHasFlares = 1;
				stabilizedInAxes = 2;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				viewGunnerInExternal = 1;
				gunnerAction = "s_left_gunner_out";
				gunnerInAction = "s_left_gunner_in";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";

				animationSourceStickX = "Gun_left_control_x";
				animationSourceStickY = "Gun_left_control_y";

				//gunnerLeftHandAnimName = "handle_L_Bolter_L";
				gunnerRightHandAnimName = "Gun_left_control";
				//gunnerLeftLegAnimName = "leg_L_Bolter_L";
				//gunnerRightLegAnimName = "leg_R_Bolter_L";

				gunnerName = "Left gunner";
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				hasGunner = 1;
				primary = 0;
				minElev = -45;
				maxElev = 45;
				initElev = 0;
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				proxyIndex = 2;
				forceHideGunner = 0;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				//hideProxyInCombat = 0;
				outGunnerMayFire = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerForceOptics = 1;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				optics = 0;
				animationSourceHatch = "panel_left";
				lockWhenDriverOut = 0;
				//selectionFireAnim = "zasleh3";
				body = "Turret_left";
				gun = "Gun_left";
				animationSourceBody = "Turret_left";
				animationSourceGun = "Gun_left";
				gunBeg = "Gun_left_beg";
				gunEnd = "Gun_left_end";
				turretFollowFreeLook = 0;
				//gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_n_F";
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";

				class TurnIn
				{
limitsArrayTop[] = {{37.8651, -25.0657}, {32.7871, -22.4065}, {44.9772, 5.8695}, {44.9125, 45.0000}};
limitsArrayBottom[] = {{-12.5784, -33.9706}, {-24.4097, -14.7176}, {-27.0271, 13.8784}, {-29.0748, 45.0000}};
				};

				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.75;
					maxFov = 0.5;
					initFov = 0.75;
					visionMode[] = {"Normal"};
				};
				class viewGunner: ViewOptics
				{
					minFov = 0.75;
					maxFov = 0.5;
					initFov = 0.75;
				};
			class OpticsIn
				{
					class Panel: ViewOptics
					{
						camPos = "Gun_left_panel_gunnerview";
						camDir = "Gun_left_panel_gunnerview_dir";
						opticsDisplayName = "Panel";
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[] = {"OpticsCHAbera1"};
						minFov = 1.0;
						maxFov = 1.0;
						initFov = 1.0;
					};
					class Sign: ViewOptics
					{
						camPos = "Gun_left_gunnerview";
						//camDir = "gunnerview_dir";
						opticsDisplayName = "Sign";
						gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
						minFov = 0.75;
						maxFov = 0.75;
						initFov = 0.75;
						gunnerOpticsEffect[] = {"OpticsCHAbera1"};
					};
					class Sign2: Sign
					{
						minFov = 0.5;
						maxFov = 0.5;
						initFov = 0.5;
					};
				};
				class HitPoints : HitPoints
				{
					class HitTurret 
					{
						armor = -100;
						material = -1;
						armorComponent = "hit_left_turret";
						name = "hit_left_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.9;
						radius = 0.075; 
						isTurret = 1;
					};
					class HitGun 
					{				
						armor = -100;
						material = -1;
						armorComponent = "hit_left_gun";
						name = "hit_left_gun_point";
						visual = "zbran_left_gun";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.9;
						radius = 0.075;
						isGun = 1;
					};
				};
			};
			class Gun_right: Gun_left
			{
				disableSoundAttenuation = 0;
				canUseScanners = 0;
				weapons[] = {"S_HMG_127_APC_R"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Red"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 3;
				soundServo[] = {"PSC_Vehicles_G\M115Centaur\data\sounds\turret_turn_manual",4,1,30};
				soundServoVertical[] = {"PSC_Vehicles_G\M115Centaur\data\sounds\turret_turn_manual",4,1,30};
				memoryPointGunnerOptics = "Gun_right_gunnerview";
				turretInfoType = "RscOptics_Offroad_01";
				//gunnerDoor = "PoklopL_turret_2_door";
				startEngine = 0;
				gunnerCompartments = "Compartment2";
				proxyType = "CPGunner";
				gunnerOutOpticsEffect[] = {};
				gunnerHasFlares = 1;
				stabilizedInAxes = 2;
				maxHorizontalRotSpeed = 1.2;
				maxVerticalRotSpeed = 1.2;
				viewGunnerInExternal = 1;
				gunnerAction = "s_right_gunner_out";
				gunnerInAction = "s_right_gunner_in";
				memoryPointsGetInGunner = "pos cargo";
				memoryPointsGetInGunnerDir = "pos cargo dir";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";

				animationSourceStickX = "Gun_right_control_x";
				animationSourceStickY = "Gun_right_control_y";

				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "Gun_right_control";

				gunnerName = "Right gunner";
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				hasGunner = 1;
				primary = 0;
				minElev = -45;
				maxElev = 45;
				initElev = 0;
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				proxyIndex = 3;
				forceHideGunner = 0;
				canHideGunner = -1;
				inGunnerMayFire = 1;
				//hideProxyInCombat = 0;
				outGunnerMayFire = 0;
				gunnerFireAlsoInInternalCamera = 1;
				gunnerForceOptics = 1;
				gunnerOutForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				optics = 0;
				animationSourceHatch = "panel_right";
				lockWhenDriverOut = 0;
				//selectionFireAnim = "zasleh3";
				body = "Turret_right";
				gun = "Gun_right";
				animationSourceBody = "Turret_right";
				animationSourceGun = "Gun_right";
				gunBeg = "Gun_right_beg";
				gunEnd = "Gun_right_end";
				turretFollowFreeLook = 0;
				//gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_n_F";
				gunnerOutOpticsModel = "";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_02_n_F.p3d";
				class TurnIn
				{
limitsArrayTop[] = {{44.9875, -44.9205}, {44.9989, -36.5006}, {42.6578, 16.8795}, {4.0864, 38.2082}};
limitsArrayBottom[] = {{-26.4176, -44.9979}, {-25.8496, -14.6335}, {-19.6387, 14.7040}, {-0.1342, 37.8988}};
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.0625;
					minFov = 0.0625;
					maxFov = 0.0625;
					visionMode[] = {"Normal"};
				};
				class viewGunner: ViewOptics
				{
					minFov = 0.5;
					maxFov = 0.75;
					initFov = 1;
				};
				class OpticsIn
				{
					class Panel: ViewOptics
					{
						camPos = "Gun_right_panel_gunnerview";
						camDir = "Gun_right_panel_gunnerview_dir";
						opticsDisplayName = "Panel";
						gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
						gunnerOpticsEffect[] = {"OpticsCHAbera1"};
						minFov = 1.0;
						maxFov = 1.0;
						initFov = 1.0;
					};
					class Sign: ViewOptics
					{
						camPos = "Gun_right_gunnerview";
						opticsDisplayName = "Sign";
						gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
						minFov = 0.75;
						maxFov = 0.75;
						initFov = 0.75;
						gunnerOpticsEffect[] = {"OpticsCHAbera1"};
					};
					class Sign2: Sign
					{
						minFov = 0.5;
						maxFov = 0.5;
						initFov = 0.5;
					};
				};
				class HitPoints : HitPoints
				{
					class HitTurret 
					{
						armor = -100;
						material = -1;
						armorComponent = "hit_right_turret";
						name = "hit_right_turret_point";
						visual = "-";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.9;
						radius = 0.075; 
						isTurret = 1;
					};
					class HitGun 
					{				
						armor = -100;
						material = -1;
						armorComponent = "hit_right_gun";
						name = "hit_right_gun_point";
						visual = "zbran_right_gun";
						passThrough = 0;
						minimalHit = 0.15;
						explosionShielding = 0.9;
						radius = 0.075;
						isGun = 1;
					};
				};
			};
		};
		class Sounds
		{
			soundSetsExt[] = {"APC_Engine_RPM0_EXT_SoundSet","APC_Engine_RPM1_EXT_SoundSet","APC_Engine_RPM2_EXT_SoundSet","APC_Engine_RPM3_EXT_SoundSet","APC_Engine_RPM4_EXT_SoundSet","APC_Wheeled_02_Rattling_EXT_SoundSet","APC_Wheeled_02_Stress_EXT_SoundSet","APC_Wheeled_02_Rain_EXT_SoundSet","APC_Wheeled_02_Tires_Rock_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Grass_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Sand_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Gravel_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Mud_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Asphalt_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Water_Fast_EXT_SoundSet","APC_Wheeled_02_Tires_Rock_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Grass_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Sand_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Gravel_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Mud_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Asphalt_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Water_Slow_EXT_SoundSet","APC_Wheeled_02_Tires_Turn_Hard_EXT_SoundSet","APC_Wheeled_02_Tires_Turn_Soft_EXT_SoundSet","APC_Wheeled_02_Tires_Brake_Hard_EXT_SoundSet","APC_Wheeled_02_Tires_Brake_Soft_EXT_SoundSet"};
			soundSetsInt[] = {"APC_Engine_RPM0_INT_SoundSet","APC_Engine_RPM1_INT_SoundSet","APC_Engine_RPM2_INT_SoundSet","APC_Engine_RPM3_INT_SoundSet","APC_Engine_RPM4_INT_SoundSet","APC_Wheeled_02_Interior_Tone_Engine_Off_SoundSet","APC_Wheeled_02_Interior_Tone_Engine_On_SoundSet","APC_Wheeled_02_Rattling_INT_SoundSet","APC_Wheeled_02_Stress_INT_SoundSet","APC_Wheeled_02_Rain_INT_SoundSet","APC_Wheeled_02_Tires_Rock_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Grass_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Sand_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Gravel_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Mud_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Asphalt_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Water_Fast_INT_SoundSet","APC_Wheeled_02_Tires_Rock_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Grass_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Sand_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Gravel_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Mud_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Asphalt_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Water_Slow_INT_SoundSet","APC_Wheeled_02_Tires_Turn_Hard_INT_SoundSet","APC_Wheeled_02_Tires_Turn_Soft_INT_SoundSet","APC_Wheeled_02_Tires_Brake_Hard_INT_SoundSet","APC_Wheeled_02_Tires_Brake_Soft_INT_SoundSet"};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "S_cannon_102mm";
			};
			class Gun_left_muzzle_hide
			{
				source = "reload";
				weapon = "S_HMG_127_APC_L";
			};
			class Gun_right_muzzle_hide
			{
				source = "reload";
				weapon = "S_HMG_127_APC_R";
			};
			class Show_Otval
			{
				DisplayName = "Show Spikes";
				source = "user";
				author = "S";
				animPeriod = 1e-006;
				initPhase = 0;
				forceAnimatePhase = 1;
				mass = 50;
			};
			class Show_Bumper
			{
				DisplayName = "Show Bumper";
				source = "user";
				author = "S";
				animPeriod = 1e-006;
				initPhase = 0;
				forceAnimatePhase = 1;
				mass = 50;
			};
			class Show_Box
			{
				DisplayName = "Show Junk";
				source = "user";
				author = "S";
				animPeriod = 1e-006;
				initPhase = 0;
				forceAnimatePhase = 1;
				mass = 50;
			};
			class Show_Shield
			{
				DisplayName = "Show Shield";
				source = "user";
				author = "S";
				animPeriod = 1e-006;
				initPhase = 0;
				forceAnimatePhase = 1;
				mass = 50;
			};
			class Shield_L1_hide
			{
				source = "Hit";
				hitpoint = "hitShield_L1";
				raw = 1;
			};
			class Shield_L2_hide
			{
				source = "Hit";
				hitpoint = "hitShield_L2";
				raw = 1;
			};
			class Shield_L3_hide
			{
				source = "Hit";
				hitpoint = "hitShield_L3";
				raw = 1;
			};
			class Shield_R1_hide
			{
				source = "Hit";
				hitpoint = "hitShield_R1";
				raw = 1;
			};
			class Shield_R2_hide
			{
				source = "Hit";
				hitpoint = "hitShield_R2";
				raw = 1;
			};
			class Shield_R3_hide
			{
				source = "Hit";
				hitpoint = "hitShield_R3";
				raw = 1;
			};
			class Door_back
			{
				source = "door";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"PSC_Vehicles_G\M115Centaur\data\textures\additionally.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\additionally_dam.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\additionally_d.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\base.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\base_dam.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\base_d.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\detail.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\detail_dam.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\detail_d.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\inside_crate.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\inside_crate_dam.rvmat","PSC_Vehicles_G\M115Centaur\data\textures\dam\inside_crate_d.rvmat"};
		};
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportWeapons
		{
		};
		viewCargoShadowDiff = 1;
		viewCargoShadowAmb = 1;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectCrawler";
			};
		};
		engineStartSpeed = 5;
		class NVGMarkers
		{
		};
		explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5.0;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 25;
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
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				hitpoint = "Light_R";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				hitpoint = "Light_L";
				useFlare = 1;
			};
			class Left3: Left
			{
				color[] = {8000,6500,3500};
				ambient[] = {80,60,30};
				position = "Light_L_2";
				direction = "Light_L_2_end";
				hitpoint = "Light_L_2";
				selection = "Light_L_2";
				size = 1;
				innerAngle = 10;
				outerAngle = 80;
				coneFadeCoef = 10;
				intensity = 25;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 40;
					hardLimitEnd = 100;
				};
			};
			class Right3: Left3
			{
				position = "Light_R_2";
				direction = "Light_R_2_end";
				hitpoint = "Light_R_2";
				selection = "Light_R_2";
			};
		};
		aggregateReflectors[] = {{"Left","Left2","Right","Right2","Left3","Right3"}};
		selectionFireAnim = "";
		class RenderTargets
		{
			class left_gun_display
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "Gun_left_gunnerview";
					pointDirection = "Gun_left_gunnerview_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.25;
					//turret[] = {0,0};
				};
			};
			class right_gun_display
			{
				renderTarget = "rendertarget0";
				class CameraView2
				{
					pointPosition = "Gun_right_gunnerview";
					pointDirection = "Gun_right_gunnerview_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.25;
					//turret[] = {0,0};
				};
			};
			class Telefon_out_display
			{
				renderTarget = "rendertarget2";
				class CameraView3
				{
					pointPosition = "telefon_display_inside_point";
					pointDirection = "telefon_display_inside_point_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.305731;
				};
			};
			class Telefon_in_display
			{
				renderTarget = "rendertarget3";
				class CameraView4
				{
					pointPosition = "telefon_display_outside_point";
					pointDirection = "telefon_display_outside_point_dir";
					renderVisionMode = 0;
					renderQuality = 2;
					fov = 0.305731;
				};
			};
		};
		showNVGCommander = 1;
		showNVGGunner = 1;
		showNVGDriver = 1;
		numberPhysicalWheels = 6;
		class UserActions 
		{
			class Doors_open
			{
				userActionID = 55;
				displayName = "$STR_ACTION_RAMP_OPEN0";
				textToolTip = "$STR_ACTION_RAMP_OPEN0";
displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				position = "destructionTrans";
				condition = "Alive(this) AND (Alive player) AND this doorPhase ""Door_back"" < 0.5 AND speed this < 5";
				statement = "this animateDoor [""Door_back"",1]";
				priority = 1.5;
				radius = 3;
				radiusView = 2;
				showIn3D = 17;
				available = 0;
				showWindow = 0;
				onlyForPlayer = 1;
				shortcut = "";
			};
			class Doors_close: Doors_open
			{
				userActionID = 56;
				displayName = "$STR_ACTION_RAMP_CLOSE0";
				textToolTip = "$STR_ACTION_RAMP_CLOSE0";
				condition = "Alive(this) AND (Alive player) AND this doorPhase ""Door_back"" > 0.5";
				statement = "this animateDoor[""Door_back"",0]";
			};
		};
		class EventHandlers: EventHandlers
		{
		};
		class TextureSources
		{
			class Green
			{
				displayName = "Green";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\green\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class GreenStar
			{
				displayName = "Green Star";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\green\Star\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\green\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class Black
			{
				displayName = "Black";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class BlackStar
			{
				displayName = "Black Star";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\Black\Star\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Black\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class Blue
			{
				displayName = "Blue";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class BlueStar
			{
				displayName = "Blue Star";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\Blue\Star\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Blue\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class brown
			{
				displayName = "Brown";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class brownStar
			{
				displayName = "Brown Star";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\brown\Star\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\brown\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class Grey
			{
				displayName = "Grey";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class GreyStar
			{
				displayName = "Grey Star";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\Grey\Star\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\Grey\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class White
			{
				displayName = "White";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\White\origin\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\White\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\White\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\White\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
			class WhiteStar
			{
				displayName = "White Star";
				author = "S";
				textures[] = {"PSC_Vehicles_G\M115Centaur\data\textures\White\Star\additionally_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\White\origin\base_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\White\origin\detail_co.paa","PSC_Vehicles_G\M115Centaur\data\textures\White\origin\inside_crate_co.paa"};
				//factions[] = {"OPF_F"};
			};
		};
		textureList[] = {"Green",1,"GreenStar",1,"Black",1,"BlackStar",1,"Blue",1,"BlueStar",1,"brown",1,"brownStar",1,"Grey",1,"GreyStar",1,"White",1,"WhiteStar",1};
	};
};
//};


class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		s_left_gunner_in = "s_left_gunner_in";
		s_left_gunner_out = "s_left_gunner_out";

		s_right_gunner_in = "s_right_gunner_in";
		s_right_gunner_out = "s_right_gunner_out";

		s_driver_in = "s_driver_in";
		s_driver_out = "s_driver_out";
	};
/*
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions;
	};
*/
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class S_APC_driver_in: Crew
		{
			file = "PSC_Vehicles_G\M115Centaur\data\anims\s_driver_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
		};
		class s_left_gunner_in: Crew
		{
			file = "PSC_Vehicles_G\M115Centaur\data\anims\s_left_gunner_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
			//leftHandIKCurve[] = {0.1, 1, 0.15, 0};
			//rightHandIKCurve[] = {1, 1, 0.5, 0};	
		};
		class s_left_gunner_out: Crew 
		{
			file = "\A3\cargoposes_F\Anim\passenger_apc_narrow_generic03.rtm";
			speed = 0.0062893;
			interpolateTo[] = {"KIA_driver_tractor",1};
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			boundingSphere = 2.0;
		};
		class s_right_gunner_in: Crew
		{
			file = "\PSC_Vehicles_G\M115Centaur\data\anims\s_right_gunner_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
		};
		class s_right_gunner_out: Crew
		{
			file = "\A3\cargoposes_F\Anim\passenger_apc_narrow_generic03.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_driver_tractor",1};
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			boundingSphere = 2.0;
		};
		class s_driver_in: Crew
		{
			file = "\PSC_Vehicles_G\M115Centaur\data\anims\s_driver_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
		};
		class s_driver_out: Crew
		{
			file = "\PSC_Vehicles_G\M115Centaur\data\anims\s_driver_out.rtm";
			speed = 0.75;
			interpolateTo[] = {"KIA_driver_tractor",1};
			boundingSphere = 1.0;
			looped = 0;
		};
	};
};