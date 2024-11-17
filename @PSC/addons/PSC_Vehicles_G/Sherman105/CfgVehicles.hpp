class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
	class UserActions;
	class Components;

	class HitTurret;
	class HitGun;
	class SensorTemplateLaser;
	class SensorTemplateDataLink;

class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
	class VehicleSystemsTemplateLeftDriver: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
	class VehicleSystemsTemplateRightDriver: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
	class VehicleSystemsTemplateLeftCommander: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
	class VehicleSystemsTemplateRightCommander: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
	class VehicleSystemsTemplateLeftGunner: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
	class VehicleSystemsTemplateRightGunner: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class All {
	class ViewCargo;	// External class reference
	class ViewOptics;	// External class reference
};

class AllVehicles : All {
	class NewTurret {
		class ViewGunner;	// External class reference
		class ViewOptics;	// External class reference
		
		class HitPoints {
			class HitTurret;	// External class reference
			class HitGun;	// External class reference
		};
	};
	class ViewPilot;	// External class reference
	class ViewCargo;	// External class reference
	class ViewOptics;	// External class reference
	
	class CargoTurret : NewTurret {
		class ViewGunner : ViewCargo {};
	};
};

class Land : AllVehicles {};

class LandVehicle : Land {
	class CommanderOptics : NewTurret {
		class ViewOptics : ViewOptics {};
		class ViewGunner : ViewCargo {};
	};
};

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
		class MainTurret: NewTurret
		{
			class ViewGunner;
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
		class HitFuel;
		class HitEngine;
		class HitLTrack;
		class HitRTrack;
	};
	class Sounds: Sounds
	{
		class Engine;
		class Movement;
	};
	class EventHandlers;
	class Reflectors {
		class Left;	// External class reference
		class Right : Left {};
		class Right2 : Right {};
		class Left2 : Left {};
	};
};

class PSC_Newton_Base_VE: Tank_F
{
	scope = 1; 
	scopeCurator = 1;
	scopeArsenal = 1;
	author = "Luca + Queen";
	displayName = "M1 (105) (BASE)";
	side = 1; //West
	faction	= "BLU_F";
	crew = "I_Survivor_F";
	hiddenSelections[] = 
	{
		"camo_body","camo_details","camo_turret","camo_50cal","camo_plow_1","camo_plow_2"
	};
	hiddenSelectionsTextures[] = 
	{
		"\PSC_Vehicles_G\Sherman105\data\body_co.paa",
		"\PSC_Vehicles_G\Sherman105\data\detail_co.paa",
		"\PSC_Vehicles_G\Sherman105\data\turret_co.paa",
		"\PSC_Vehicles_G\Sherman105\data\hmg_co.paa",
		"\PSC_Vehicles_G\Sherman105\data\plow_1_co.paa",
		"\PSC_Vehicles_G\Sherman105\data\plow_2_co.paa"
	};

	model = "\PSC_Vehicles_G\Sherman105\PSC_Sherman105.p3d";
//	picture	= "15thNCR_Tank\data\ui\pic_ca.paa";
//	icon = "15thNCR_Tank\data\ui\map_icon_ca.paa";

	accuracy = 0.3;
	acceleration = 12;
	terrainCoef = 0.7;
	maxFordingDepth = -0.7;
	waterLeakiness = 40;

	memoryPointsGetInDriver="pos driver";
	memoryPointsGetInDriverDir="pos driver dir";	
	memoryPointsGetInGunner="pos gunner";
	memoryPointsGetInGunnerDir="pos gunner dir";
	memoryPointsGetInCommander="pos commander";
	memoryPointsGetInCommanderDir="pos commander dir";
	memoryPointDriverOptics="driverview";
	driverForceOptics=1;
	driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
	
	crewCrashProtection = 0.95;
	crewExplosionProtection = 0.99;
	
	forceHideDriver = 1;
	driverAction = "Driver_MBT_03_cannon_F_out";
	driverInAction = "Driver_MBT_03_cannon_F_in";
	getInAction = GetInLow; 		/// how does driver look while getting in
	getOutAction = GetOutLow; 		/// and out
	maximumLoad=1000;
	attenuationEffectType = "TankAttenuation";
	enableGPS = 1;
	
	// AI references
	cost = 2500000;
	damageResistance = 0.02;
	crewVulnerable = false;

	// Damage setup
	armor = 750;
	armorStructural = 6;	// Two hulls of same type should take same amount of damage. Use armorStructural to counter the effect of vehicle size on its armor.

	//	Weak spots parameters
		// 	name: selection in HitPoints LOD - create selections first!
		// 	radius: radius of weak spot spheres generated around vertices in HitPoints LOD, tweak before armor
		// 	armor: multiplier of total vehicle armor required to destroy given component, tweak after radius
		// 	explosionShielding: multiplier of damage caused by explosive rounds, tweak after armor
		//	minimalHit: minimum hit required to receive damage, tweak after explosionSielding
		// 	passThrough: how much damage is passed to total vehicle damage
		// 	visual: section in Resource LODs and CfgModels section of model.cfg
		// 	material: unneeded, leave at -1

		// The values are sample. Every vehicle needs to be finetuned separately.
	class HitPoints: HitPoints
	{
		class HitHull: HitHull
		{
			armor = 1.2;
			material = -1;
			armorComponent = "hull";
			name = "hull";
			visual = "body";
			passThrough = true;
			minimalHit = 0.2;
			explosionShielding = 0.2;
			radius = 0.3;
		};
		class HitEngine: HitEngine
		{
			armor = 0.6;
			material = -1;
			armorComponent = "engine";
			name = "engine";
			visual = "-";
			passThrough = 0.2;
			minimalHit = 0.2;
			explosionShielding = 0.2;
			radius = 0.3;
		};
		class HitFuel: HitFuel
		{
			armor = 0.5;
			material = -1;
			armorComponent = "palivo";
			name = "palivo";
			visual = "-";
			passThrough = 0.1;
			minimalHit = 0.1;
			explosionShielding = 0.6;
			radius = 0.3;
		};
		class HitLTrack: HitLTrack
		{
			material = -1;
			armorComponent = "pas_L";
			name = "pas_L";
			visual = "track_l_hit";
			radius = 0.2;
			armor = -650;
			minimalHit = 0.0738462;
			explosionShielding = 0.8;
			passThrough = 0;
		};
		class HitRTrack: HitRTrack
		{
			material = -1;
			armorComponent = "pas_P";
			name = "pas_P";
			visual = "track_r_hit";
			radius = 0.2;
			armor = -650;
			minimalHit = 0.0738462;
			explosionShielding = 0.8;
			passThrough = 0;
		};
	};
	
	//enableManualFire = 0;
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					body = "ObsTurret";
					gun = "ObsGun";
					memoryPointGunnerOutOptics="commanderview";
					memoryPointGunnerOptics="commanderview";
					minElev=-8;
					maxElev=45;
					initElev=0;
					minTurn=-360;
					maxTurn=360;
					initTurn=0;
					minCamElev=-90;
					maxCamElev=90;
					memoryPointGun = "konec hlavne2";
					gunBeg = "usti hlavne2";
					gunEnd = "konec hlavne2";
					weapons[]={};
					magazines[]={};
					discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
					discreteDistanceInitIndex = 2;
					soundServo[]=
					{
						"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
						0.17782794,
						1,
						10
					};
					soundServoVertical[]=
					{
						"A3\Sounds_F\vehicles\soft\noises\servo_turret_MRAP01",
						0.17782794,
						1,
						10
					};
					forceHideGunner=false;
					gunnerAction = "Gunner_MBT_02_arty_F_out";
					gunnerInAction = "Gunner_MBT_02_arty_F_in";
					gunnerGetInAction="GetInLow";
					gunnerGetOutAction="GetOutLow";
					gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
					gunnerOutOpticsModel="";
					gunnerOpticsEffect[]={};
					isPersonTurret=0;
					outGunnerMayFire = false;
					inGunnerMayFire = true;
					personTurretAction="vehicle_turnout_1";
					minOutElev=-45;
					maxOutElev=65;
					initOutElev=0;
					minOutTurn=-90;
					maxOutTurn=90;
					initOutTurn=0;
					gunnerForceOptics=1;
					class ViewGunner: ViewGunner
					{
					};
					class ViewOptics: ViewOptics
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.6;
						minFov=0.6;
						maxFov=0.6;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
					};
					class OpticsIn {
						class Wide: ViewOptics {
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=+30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=+100;
							initFov=0.6;
							minFov=0.6;
							maxFov=0.6;
							visionMode[] = {"Normal","NVG"};
							thermalMode[] = {0,1};
							gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_w_F.p3d";
							gunnerOpticsEffect[] = {};
						};
						class Medium: Wide {
							gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_m_F.p3d";
							initFov=0.07;
							minFov=0.07;
							maxFov=0.07;
						};
						class Narrow: Wide {
							gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_01_n_F.p3d";
							initFov=0.028;
							minFov=0.028;
							maxFov=0.028;
						};
					};
					turretInfoType = "RscOptics_MBT_01_commander";
					usePip=1;
					showCrewAim=1;
					startEngine=0;
					class HitPoints
					{
						class HitComTurret
						{
							armor=0.1;
							material=-1;
							name="commander_turret_hit";
							visual="ObsTurret";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=1;
							radius=0.30000001;
							isTurret=1;
						};
						class HitComGun
						{
							armor=0.1;
							material=-1;
							name="commander_gun_hit";
							visual="ObsGun";
							passThrough=0;
							minimalHit=0.1;
							explosionShielding=1;
							radius=0.5;
							isGun=1;
						};
					};
					stabilizedInAxes=3;
					maxHorizontalRotSpeed = 3;
					maxVerticalRotSpeed = 3;
					viewGunnerInExternal=0;
				};
			};
			
			startEngine = false;
			commanding = 2;
			body="mainTurret";
			gun="mainGun";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			weapons[] = {"PSC_Sherman_105_Cannon","PSC_Sherman_Coax"};
			magazines[] = {"PSC_12Rnd_105mm_APFSDS_Red","PSC_12Rnd_105mm_HEAT_Red","PSC_16Rnd_105mm_HE_Red","1000Rnd_762x51_Belt_Yellow","1000Rnd_762x51_Belt_Yellow"};
			
			memoryPointGun = "usti hlavne1";
			selectionFireAnim = "zasleh1";
			
			maxHorizontalRotSpeed=1.4;
			maxVerticalRotSpeed=1.5;
			
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",0.19952622,1,50};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",0.19952622,1,50};
			
			gunnerAction = "Commander_MBT_01_cannon_F_out";
			gunnerInAction = "Commander_MBT_01_cannon_F_in";
			isPersonTurret=0;
			outGunnerMayFire = false;
			inGunnerMayFire = true;
			personTurretAction="vehicle_turnout_2";
			minOutElev=-45;
			maxOutElev=65;
			initOutElev=0;
			minOutTurn=-90;
			maxOutTurn=90;
			initOutTurn=0;
			forceHideGunner = true;
			gunnerGetInAction="GetInLow";
			gunnerGetOutAction="GetOutLow";
			viewGunnerInExternal=1;
			castGunnerShadow=1;
			stabilizedInAxes=3;
			memoryPointGunnerOptics="gunnerview";
			//memoryPointGunnerOptics="usti hlavne";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
			discreteDistanceInitIndex = 5;
			turretInfoType = "RscOptics_MBT_02_gunner";
			usePip=0;
			minElev=-5;
			maxElev=25;
			initElev=10;
			minTurn=-360;
			maxTurn=360;
			initTurn=0;				
			gunnerForceOptics=1;
			gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
			class OpticsIn {
				class Wide: ViewOptics {
					initAngleX=0;
					minAngleX=-30;
					maxAngleX=+30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=+100;
					initFov=0.5;
					minFov=0.5;
					maxFov=0.5;
					visionMode[] = {"Normal","NVG"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
					gunnerOpticsEffect[] = {};
				};
				class Medium: Wide {
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_m_F.p3d";
					initFov=0.07;
					minFov=0.07;
					maxFov=0.07;
				};
				class Narrow: Wide {
					gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_n_F.p3d";
					initFov=0.028;
					minFov=0.028;
					maxFov=0.028;
				};
			};
			
			class ViewOptics: ViewOptics
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=30;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=100;
				initFov=0.5;
				minFov=0.5;
				maxFov=0.5;
				visionMode[] = {"Normal","NVG"};			
			};
			class ViewGunner: ViewOptics
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=15;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=100;					
				minFov=0.25;
				maxFov=1.25;
				initFov=0.75;
				visionMode[]={};
			};
			class HitPoints: HitPoints
			{
				class HitTurret : HitTurret
				{
					armor = 2*(19+2*19+19)/((18+2*9+9) + (19+2*19+19));
					name = "vez";
					visual = "OtocVez";
				};
				class HitGun : HitGun
				{
					armor = 4*100/((18+2*9+9) + (19+2*19+19));
					name = "zbran";
					visual = "OtocHlaven";
				};
			};
			gunnerDoor = "";
			showCrewAim = 2;
		};
		
		class HullTurret: NewTurret
		{
			startEngine = false;
			proxyIndex = 2;
			body="ObsATurret";
			gun="ObsAGun";
			gunBeg = "usti hlavne2";
			gunEnd = "konec hlavne2";
			animationSourceBody = "ObsATurret";
			animationSourceGun = "ObsAGun";
			gunnerName = "Radio Operator";
			weapons[] = {"PSC_Sherman_Hull_MG"};
			magazines[] = {"1000Rnd_762x51_Belt_Yellow", "1000Rnd_762x51_Belt_Yellow"};
			
			memoryPointGun = "usti hlavne2";
			selectionFireAnim = "zasleh2";
			
			maxHorizontalRotSpeed = 0.75;
			maxVerticalRotSpeed = 0.65;
			
			soundServo[]=
			{
			};
			soundServoVertical[]=
			{
			};
			gunnerAction = "mbt2_slot2b_out";
			gunnerInAction = "mbt2_slot2b_in";
			forceHideGunner = true;
			gunnerGetInAction="GetInLow";
			gunnerGetOutAction="GetOutLow";
			viewGunnerInExternal=1;
			castGunnerShadow=1;
			stabilizedInAxes=0;
			primaryGunner = 0;
			commanding = -1;
			memoryPointGunnerOptics = "gunnerview1";
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			turretInfoType="";
			usePip=0;
			minElev=0;
			maxElev=15;
			initElev=0;
			minTurn=-22;
			maxTurn=22;
			initTurn=0;		
			gunnerForceOptics=1;
			gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
			personTurretAction="vehicle_turnout_1";
			class ViewOptics: ViewOptics
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=30;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=100;
				initFov=0.3;
				minFov=0.3;
				maxFov=0.3;
				visionMode[]=
				{
					"Normal","NVG"
				};
			};
			class ViewGunner: ViewOptics
			{
				initAngleX=0;
				minAngleX=-30;
				maxAngleX=15;
				initAngleY=0;
				minAngleY=-100;
				maxAngleY=100;					
				minFov=0.25;
				maxFov=1.25;
				initFov=0.75;
				visionMode[]={};
			};
			gunnerDoor = "";
			
			class HitPoints {};
		};
	};


	class AnimationSources : AnimationSources
	{
		class tankPlow1_Hide 
		{
			displayName = "Hide Tank Plow (Spikes)";
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class tankPlow2_Hide 
		{
			displayName = "Hide Tank Plow (Bulldozer)";
			source = "user";
			animPeriod = 1;
			initPhase = 1;
		};
		class recoil_source 
		{
			source = "reload";
			weapon = "PSC_Sherman_105_Cannon";
		};
	};

	class Damage {
		tex[] = {};
		mat[] = {
			"PSC_Vehicles_G\Sherman105\data\body.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
			
			"PSC_Vehicles_G\Sherman105\data\detail.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
			
			"PSC_Vehicles_G\Sherman105\data\turret.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
			
			"PSC_Vehicles_G\Sherman105\data\hmg.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
			
			"PSC_Vehicles_G\Sherman105\data\tracks.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
			"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"
		};
	};

	class TextureSources
	{
		class Sand
		{
			displayName = "Sand";
			author = "Moose";
		//	textures[] = {"\15thNCR_Tank\data\textures\body_co.paa","\15thNCR_Tank\data\textures\details_co.paa","\15thNCR_Tank\data\textures\turret_co.paa","\15thNCR_Tank\data\textures\50cal_co.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
			factions[] = {};
		};
	};
	textureList[] =
	{
		"Sand", 1
	};

	#include "tank_sounds.hpp"
	#include "tank_physx.hpp"
	
	class Exhausts {
		class Exhaust1 {
			position = "exhaust1_pos";
			direction = "exhaust1_dir";
			effect = "ExhaustEffectTankBack";
		};
		
		class Exhaust2 {
			position = "exhaust2_pos";
			direction = "exhaust2_dir";
			effect = "ExhaustEffectTankBack";
		};
	};

	class Reflectors
	{
		class LightCarHeadL01
		{
			color[]={1900,1800,1700};
			ambient[]={5,5,5};
			position="LightCarHeadL01";
			direction="LightCarHeadL01_end";
			hitpoint="Light_L";
			selection="Light_L";
			size=1;
			innerAngle=100;
			outerAngle=179;
			coneFadeCoef=10;
			intensity=1;
			useFlare=1;
			dayLight=0;
			flareSize=1;

			class Attenuation
			{
				start 			= 0;
				constant 		= 0;
				linear 			= 1;
				quadratic 		= 1;
				hardLimitStart 	= 100;
				hardLimitEnd 	= 200;
			};
		};
		class LightCarHeadL02: LightCarHeadL01
		{
			position 	= "lightcarheadl02";
			direction 	= "lightcarheadl02_end";
			hitpoint 		= "Light_L1";
			selection 		= "light_l1";
		};
		class LightCarHeadL03: LightCarHeadL01
		{
			position 	= "lightcarheadl03";
			direction 	= "lightcarheadl03_end";
			hitpoint 		= "Light_L2";
			selection 		= "light_l2";
			
			innerAngle=60;
			outerAngle=80;
			coneFadeCoef=8;

			class Attenuation
			{
				start 			= 0;
				constant 		= 0;
				linear 			= 1;
				quadratic 		= 1;
				hardLimitStart 	= 200;
				hardLimitEnd 	= 250;
			};
		};

		class LightCarHeadR01: LightCarHeadL01
		{
			position 	= "LightCarHeadR01";
			direction 	= "LightCarHeadR01_end";
			hitpoint 		= "Light_R";
			selection 		= "Light_R";
		};
		class LightCarHeadR02: LightCarHeadR01
		{
			position 	= "lightcarheadr02";
			direction 	= "lightcarheadr02_end";
			hitpoint 		= "Light_R1";
			selection 		= "light_r1";
		};
		class LightCarHeadR03: LightCarHeadR01
		{
			position 	= "lightcarheadr03";
			direction 	= "lightcarheadr03_end";
			hitpoint 		= "Light_R2";
			selection 		= "light_r2";
			
			innerAngle=60;
			outerAngle=80;
			coneFadeCoef=8;

			class Attenuation
			{
				start 			= 0;
				constant 		= 0;
				linear 			= 1;
				quadratic 		= 1;
				hardLimitStart 	= 200;
				hardLimitEnd 	= 250;
			};
		};
	};

	aggregateReflectors[] = {{"LightCarHeadR01","LightCarHeadL01"}};
	
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	
	//ACE stuff
	ace_vehicle_damage_hullDetonationProb = 0.15;
	ace_vehicle_damage_turretDetonationProb = 0.2;
	ace_vehicle_damage_engineDetonationProb = 0.2;
	ace_vehicle_damage_hullFireProb = 0.2;
	ace_vehicle_damage_turretFireProb = 0.1;
	ace_vehicle_damage_engineFireProb = 0.3;
	ace_vehicle_damage_detonationDuringFireProb = 0.3;
	ace_vehicle_damage_canHaveFireRing = 0;
	ace_vehicle_damage_slatHitpoints[] = {};
	ace_vehicle_damage_eraHitpoints[] = {};
	ace_vehicle_damage_turret = "";
	
	//TFAR Stuff
	tf_RadioType = "TFAR_anprc155";
	tf_hasLRradio = 1;
	tf_isolatedAmount = 0.85;
};

class PSC_Newton_VE: PSC_Newton_Base_VE
{
	scope = 2; 
	scopeCurator = 2;
	scopeArsenal = 2;
	author = "Luca + Queen";
	displayName = "M1 Newton (105)";
	faction	= "BLU_F";
	crew = "B_Survivor_F";
	side = 1;
	editorpreview = "";
};