class CfgPatches
{
    class PSC_Wasteland_Sherman
    {
        requiredAddons[] = 
        {
            "PSC_Core"
        };
        units[] = 
        {

        };
        weapons[] = 
        {

        };
        requiredVersion = 0.1;
        version = 0.1;
        addonRootClass = "PSC_Vehicles";
        author = "$STR_PSC_Author";
        fileName = "PSC_Vehicles";
    };
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class ViewOptics;
class Mode_FullAuto;
class Mode_SemiAuto;
class AnimationSources;
class EventHandlers;
class Turrets;
class HitPoints;
class HitHull;
class HitEngine;	// External class reference
class HitRGlass;	// External class reference
class HitLGlass;	// External class reference
class HitBody;	// External class reference
class HitFuel;	// External class reference
class HitLFWheel;	// External class reference
class HitRFWheel;	// External class reference
class HitLF2Wheel;	// External class reference
class HitRF2Wheel;	// External class reference
class HitLMWheel;	// External class reference
class HitRMWheel;	// External class reference
class HitLBWheel;	// External class reference
class HitRBWheel;	// External class reference


class GunParticles;
class CfgWeapons
{
	class LMG_coax_ext;
	class 15thNCR_MG_Coax : LMG_coax_ext {
		class GunParticles {
			class FirstEffect {
				effectName = "MachineGun1";
				positionName = "usti hlavne1";
				directionName = "konec hlavne1";
			};
		};
	};
	class 15thNCR_MG_Commander : LMG_coax_ext {
		class GunParticles {
			class FirstEffect {
				effectName = "MachineGun2";
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
			};
		};
	};
	
	class cannon_105mm;
	class 15thNCR_Cannon105mm : cannon_105mm {
		displayName = "105mm Cannon";
		magazines[] = {"15thNCR_12Rnd_105mm_APFSDS_Red","15thNCR_12Rnd_105mm_HEAT_Red","15thNCR_16Rnd_105mm_HE_Red"};
	};
};

class cfgMagazines {
	class 40Rnd_105mm_APFSDS_T_Red;
	class 15thNCR_12Rnd_105mm_APFSDS_Red: 40Rnd_105mm_APFSDS_T_Red {
		displayname = "12Rnd 100mm APFSDS";
		count = 12;
	};
	class 20Rnd_105mm_HEAT_MP_T_Red;
	class 15thNCR_12Rnd_105mm_HEAT_Red: 20Rnd_105mm_HEAT_MP_T_Red {
		displayname = "12Rnd 100mm HEAT-MP";
		count = 12;
	};
	class 12Rnd_125mm_HE_T_Red;
	class 15thNCR_16Rnd_105mm_HE_Red: 12Rnd_125mm_HE_T_Red {
		displayname = "16Rnd 100mm HE";
		count = 16;
		initSpeed = 1100;
	};
};
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

class CfgVehicles
{
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
	
		class 15thNCR_Tank_BASE: Tank_F
	{
		scope = 1; 
		scopeCurator = 1;
		scopeArsenal = 1;
		author = "Luca";
		displayName = "NCR Tank (BASE)";
		side = TWEST;
		faction	= "IND_F";
		crew = "I_Survivor_F";
		hiddenSelections[] = {"camo_body","camo_details","camo_turret","camo_50cal","tank_plow_1","tank_plow_2"};
		hiddenSelectionsTextures[] = {"\15thNCR_Tank\data\textures\body_co.paa","\15thNCR_Tank\data\textures\details_co.paa","\15thNCR_Tank\data\textures\turret_co.paa","\15thNCR_Tank\data\textures\50cal_co.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
		model = "\15thNCR_Tank\data\sherman.p3d";
		picture	= "15thNCR_Tank\data\ui\pic_ca.paa";
		icon = "15thNCR_Tank\data\ui\map_icon_ca.paa";

		accuracy = 0.3;
		acceleration = 12;
		terrainCoef = 0.7;
		maxFordingDepth = -0.7;
		waterLeakiness = 40;
		weapons[]={"TruckHorn3","FlareLauncher","CMFlareLauncher_Triples"};
		magazines[]={"FlareLauncherMag","240Rnd_CMFlareMagazine"};

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
				weapons[] = {"15thNCR_Cannon105mm","HMG_M2_Mounted"};
				magazines[] = {"15thNCR_12Rnd_105mm_APFSDS_Red","15thNCR_12Rnd_105mm_HEAT_Red","15thNCR_16Rnd_105mm_HE_Red","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				
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
				weapons[] = {"HMG_M2_Mounted"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				
				maxHorizontalRotSpeed = 0.75;
				maxVerticalRotSpeed = 0.75;
				
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
				minElev=-50;
				maxElev=50;
				initElev=0;
				minTurn=-50;
				maxTurn=50;
				initTurn=0;		
				gunnerForceOptics=1;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_APC_01_w_F.p3d";
				personTurretAction="vehicle_turnout_1";
				class ViewOptics: ViewOptics
				{
					initAngleX=0;
					minAngleX=-200;
					maxAngleX=200;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=200;
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
					minAngleX=-150;
					maxAngleX=150;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;					
					minFov=1.25;
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
				weapon = "15thNCR_Cannon105mm";
            };
		};

		class Damage {
			tex[] = {};
			mat[] = {
				"15thNCR_Tank\data\textures\body.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				
				"15thNCR_Tank\data\textures\details.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				
				"15thNCR_Tank\data\textures\turret.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				
				"15thNCR_Tank\data\textures\50cal.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",
				
				"15thNCR_Tank\data\textures\tracks.rvmat",
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
				textures[] = {"\15thNCR_Tank\data\textures\body_co.paa","\15thNCR_Tank\data\textures\details_co.paa","\15thNCR_Tank\data\textures\turret_co.paa","\15thNCR_Tank\data\textures\50cal_co.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
				factions[] = {};
			};
			class Sand_Geiger_Cap
			{
				displayName = "Sand (Geiger-Cap)";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\customs\geiger_body.paa","\15thNCR_Tank\data\customs\geiger_extra.paa","\15thNCR_Tank\data\customs\geiger_turret.paa","\15thNCR_Tank\data\textures\50cal_co.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
				factions[] = {};
			};
			class Sand_Sandman
			{
				displayName = "Sand (Sandman)";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\customs\sandman_body.paa","\15thNCR_Tank\data\customs\sandman_extra.paa","\15thNCR_Tank\data\customs\sandman_turret.paa","\15thNCR_Tank\data\textures\50cal_co.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
				factions[] = {};
			};
			class Forest
			{
				displayName = "Forest";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\textures_additions\Tank_Body_Green.paa","\15thNCR_Tank\data\textures_additions\Tank_Extra_Green.paa","\15thNCR_Tank\data\textures_additions\Tank_Turret_Green.paa","\15thNCR_Tank\data\textures_additions\Tank_50cal_Green.paa","\15thNCR_Tank\data\textures\tank_plow_1_green_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_green_co.paa"};
				factions[] = {};
			};
			class Forest_Geiger_Cap
			{
				displayName = "Forest (Geiger-Cap)";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\customs\geiger_body_green.paa","\15thNCR_Tank\data\customs\geiger_extra_green.paa","\15thNCR_Tank\data\customs\geiger_turret_green.paa","\15thNCR_Tank\data\textures_additions\Tank_50cal_Green.paa","\15thNCR_Tank\data\textures\tank_plow_1_green_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_green_co.paa"};
				factions[] = {};
			};
			class Forest_Sandman
			{
				displayName = "Forest (Sandman)";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\customs\sandman_body_green.paa","\15thNCR_Tank\data\customs\sandman_extra_green.paa","\15thNCR_Tank\data\customs\sandman_turret_green.paa","\15thNCR_Tank\data\textures_additions\Tank_50cal_Green.paa","\15thNCR_Tank\data\textures\tank_plow_1_green_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_green_co.paa"};
				factions[] = {};
			};
			class Winter
			{
				displayName = "Winter";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\textures_additions\Tank_Body_White.paa","\15thNCR_Tank\data\textures_additions\Tank_Extra_White.paa","\15thNCR_Tank\data\textures_additions\Tank_Turret_White.paa","\15thNCR_Tank\data\textures_additions\Tank_50cal_Winter.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
				factions[] = {};
			};
			class Winter_Geiger
			{
				displayName = "Winter (Geiger-Cap)";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\customs\geiger_body_winter.paa","\15thNCR_Tank\data\customs\geiger_extra_winter.paa","\15thNCR_Tank\data\customs\geiger_turret_winter.paa","\15thNCR_Tank\data\textures_additions\Tank_50cal_Winter.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
				factions[] = {};
			};
			class Winter_Sandman
			{
				displayName = "Winter (Sandman)";
				author = "Moose";
				textures[] = {"\15thNCR_Tank\data\customs\sandman_body_winter.paa","\15thNCR_Tank\data\customs\sandman_extra_winter.paa","\15thNCR_Tank\data\customs\sandman_turret_winter.paa","\15thNCR_Tank\data\textures_additions\Tank_50cal_Winter.paa","\15thNCR_Tank\data\textures\tank_plow_1_co.paa","\15thNCR_Tank\data\textures\tank_plow_2_co.paa"};
				factions[] = {};
			};
			class Sand_wp
			{
				displayName="Sand (War Pig)";
				author="Moose";
				textures[]=
				{
					"\15thNCR_Tank\data\textures\body_co.paa",
					"\15thNCR_Tank\data\textures\details_co.paa",
					"\15thNCR_Tank\data\textures\turret_co_wp.paa",
					"\15thNCR_Tank\data\textures\50cal_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_1_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_2_co.paa"
				};
				factions[]={};
			};
			class Sand_sb
			{
				displayName="Sand (Skirt-Bane)";
				author="Moose";
				textures[]=
				{
					"\15thNCR_Tank\data\textures\body_co.paa",
					"\15thNCR_Tank\data\textures\details_co.paa",
					"\15thNCR_Tank\data\textures\turret_co_sb.paa",
					"\15thNCR_Tank\data\textures\50cal_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_1_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_2_co.paa"
				};
				factions[]={};
			};
			class Sand_lb
			{
				displayName="Sand (Lady Brown)";
				author="Moose";
				textures[]=
				{
					"\15thNCR_Tank\data\textures\body_co.paa",
					"\15thNCR_Tank\data\textures\details_co.paa",
					"\15thNCR_Tank\data\textures\turret_co_lb.paa",
					"\15thNCR_Tank\data\textures\50cal_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_1_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_2_co.paa"
				};
				factions[]={};
			};
			class Sand_ss
			{
				displayName="Sand (Sand Shark)";
				author="Moose";
				textures[]=
				{
					"\15thNCR_Tank\data\textures\body_co.paa",
					"\15thNCR_Tank\data\textures\details_co.paa",
					"\15thNCR_Tank\data\textures\turret_co_ss.paa",
					"\15thNCR_Tank\data\textures\50cal_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_1_co.paa",
					"\15thNCR_Tank\data\textures\tank_plow_2_co.paa"
				};
				factions[]={};
			};
			class Steel_BOS
			{
				displayName="Brotherhood of Steel";
				author="Moose";
				textures[]=
				{
					"\15thNCR_Tank\data\textures_additions\Tank_Body_BOS.paa",
					"\15thNCR_Tank\data\textures_additions\Tank_Extra_Steel.paa",
					"\15thNCR_Tank\data\textures_additions\Tank_Turret_BOS.paa",
					"\15thNCR_Tank\data\textures_additions\50cal_co.paa",
					"\15thNCR_Tank\data\textures_additions\tank_plow_1_steel_co.paa",
					"\15thNCR_Tank\data\textures_additions\tank_plow_2_steel_co.paa"
				};
				factions[]={};
			};
			class Dark_steel_enclave
			{
				displayName="Enclave";
				author="Moose";
				textures[]=
				{
					"\15thNCR_Tank\data\textures_additions\Tank_Body_Enc.paa",
					"\15thNCR_Tank\data\textures_additions\Tank_Extra_Dark_Steel.paa",
					"\15thNCR_Tank\data\textures_additions\Tank_Turret_Enc.paa",
					"\15thNCR_Tank\data\textures_additions\50cal_co.paa",
					"\15thNCR_Tank\data\textures_additions\tank_plow_1_dark_steel_co.paa",
					"\15thNCR_Tank\data\textures_additions\tank_plow_2_dark_steel_co.paa"
				};
				factions[]={};
			};
			
		};
		textureList[] =
		{
			"Sand (Gieger-Cap)", 0.1,
			"Sand (Sandman", 0.1,
			"Sand", 1,
			"Forest (Geiger-Cap)", 0.1,
			"Forest (Sandman)", 0.1,
			"Forest", 0.1,
			"Winter", 0.1,
			"Winter (Geiger-Cap)", 0.1,
			"Winter (Sandman)", 0.1
		};

				soundGetIn[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F_EPB\Tracked\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",
			0.63095737,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",
			0.79432821,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",
			0.63095737,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",
			0.79432821,
			1,
			200
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			0.17782794,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			0.17782794,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			0.17782794,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
			1,
			1,
			100
		};
		soundGeneralCollision4[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.25,
			"soundGeneralCollision2",
			0.25,
			"soundGeneralCollision3",
			0.25,
			"soundGeneralCollision4",
			0.25
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_1",
					0.79432821,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_2",
					0.89125091,
					1,
					240
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_3",
					1.1220185,
					1,
					280
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_4",
					1.2589254,
					1,
					320
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_5",
					1.4125376,
					1,
					360
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_6",
					1.5848932,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_7",
					1.7782794,
					1,
					440
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_1",
					1.1220185,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",
					1.4125376,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_3",
					1.7782794,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_4",
					1.9952624,
					1,
					290
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_5",
					1.7782794,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_6",
					2.2387211,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_7",
					2.5118864,
					1,
					450
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",
					0.89125091,
					1,
					50
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.39810717,
					1,
					140
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.44668359,
					1,
					160
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.50118721,
					1,
					180
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.56234133,
					1,
					200
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.56234133,
					1,
					220
				};
				frequency="1";
				volume="engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsOutS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",
					0.31622776,
					1,
					120
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",
					0.3548134,
					1,
					140
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",
					0.39810717,
					1,
					160
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",
					0.44668359,
					1,
					180
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",
					0.50118721,
					1,
					200
				};
				frequency="1";
				volume="engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInH0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.25118864,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInH1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.2818383,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInH2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInH3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.3548134,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInH4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInS0
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInS1
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",
					0.31622776,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInS2
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",
					0.3548134,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInS3
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",
					0.3548134,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInS4
			{
				sound[]=
				{
					"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",
					0.39810717,
					1
				};
				frequency="1";
				volume="engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
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
	
	class 15thNCR_Tank: 15thNCR_Tank_BASE
	{
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
		author = "Luca, Model: Moose";
		displayName = "NCR Tank";
		faction	= "BLU_F";
		crew = "B_Survivor_F";
		side = TWest;
		editorpreview = "";
	};
	class 15thNCR_Tank_wp: 15thNCR_Tank_BASE
	{
		displayName="NCR Tank (War Pig)";
		hiddenSelections[]=
		{
			"camo_body",
			"camo_details",
			"camo_turret",
			"camo_50cal"
		};
		hiddenSelectionsTextures[]=
		{
			"\15thNCR_Tank\data\textures\body_co.paa",
			"\15thNCR_Tank\data\textures\details_co.paa",
			"\15thNCR_Tank\data\textures\turret_co_wp.paa",
			"\15thNCR_Tank\data\textures\50cal_co.paa"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Luca, Model: Moose";
		faction="BLU_F";
		textureList[]=
		{
			"Sand_wp",
			1
		};
		crew="B_Survivor_F";
		side=1;
		editorpreview="";
	};
	class 15thNCR_Tank_lb: 15thNCR_Tank_BASE
	{
		displayName="NCR Tank (Lady Brown)";
		hiddenSelections[]=
		{
			"camo_body",
			"camo_details",
			"camo_turret",
			"camo_50cal"
		};
		hiddenSelectionsTextures[]=
		{
			"\15thNCR_Tank\data\textures\body_co.paa",
			"\15thNCR_Tank\data\textures\details_co.paa",
			"\15thNCR_Tank\data\textures\turret_co_lb.paa",
			"\15thNCR_Tank\data\textures\50cal_co.paa"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Luca, Model: Moose";
		faction="BLU_F";
		textureList[]=
		{
			"Sand_lb",
			1
		};
		crew="B_Survivor_F";
		side=1;
		editorpreview="";
	};
	class 15thNCR_Tank_sb: 15thNCR_Tank_BASE
	{
		displayName="NCR Tank (Skirt-Bane)";
		hiddenSelections[]=
		{
			"camo_body",
			"camo_details",
			"camo_turret",
			"camo_50cal"
		};
		hiddenSelectionsTextures[]=
		{
			"\15thNCR_Tank\data\textures\body_co.paa",
			"\15thNCR_Tank\data\textures\details_co.paa",
			"\15thNCR_Tank\data\textures\turret_co_sb.paa",
			"\15thNCR_Tank\data\textures\50cal_co.paa"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Luca, Model: Moose";
		faction="BLU_F";
		textureList[]=
		{
			"Sand_sb",
			1
		};
		crew="B_Survivor_F";
		side=1;
		editorpreview="";
	};
	class 15thNCR_Tank_ss: 15thNCR_Tank_BASE
	{
		displayName="NCR Tank (Sand Shark)";
		hiddenSelections[]=
		{
			"camo_body",
			"camo_details",
			"camo_turret",
			"camo_50cal"
		};
		hiddenSelectionsTextures[]=
		{
			"\15thNCR_Tank\data\textures\body_co.paa",
			"\15thNCR_Tank\data\textures\details_co.paa",
			"\15thNCR_Tank\data\textures\turret_co_ss.paa",
			"\15thNCR_Tank\data\textures\50cal_co.paa"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Luca, Model: Moose";
		faction="BLU_F";
		textureList[]=
		{
			"Sand_ss",
			1
		};
		crew="B_Survivor_F";
		side=1;
		editorpreview="";
	};
	class 15thNCR_Tank_BOS: 15thNCR_Tank_BASE
	{
		displayName="Tank (Brotherhood of Steel)";
		hiddenSelections[] = 
		{
			"camo_body",
			"camo_details",
			"camo_turret",
			"camo_50cal",
			"tank_plow_1",
			"tank_plow_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\15thNCR_Tank\data\textures_additions\Tank_Body_BOS.paa",
			"\15thNCR_Tank\data\textures_additions\Tank_Extra_Steel.paa",
			"\15thNCR_Tank\data\textures_additions\Tank_Turret_BOS.paa",
			"\15thNCR_Tank\data\textures_additions\50cal_co.paa",
			"\15thNCR_Tank\data\textures_additions\tank_plow_1_steel_co.paa",
			"\15thNCR_Tank\data\textures_additions\tank_plow_2_steel_co.paa"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Luca, Model: Moose, Tex: Rad";
		faction="BLU_F";
		textureList[]=
		{
			"Steel_BOS",
			1
		};
		crew="B_Survivor_F";
		side=1;
		editorpreview="";
	};
	class 15thNCR_Tank_enclave: 15thNCR_Tank_BASE
	{
		displayName="Tank (Enclave)";
		hiddenSelections[] = 
		{
			"camo_body",
			"camo_details",
			"camo_turret",
			"camo_50cal",
			"tank_plow_1",
			"tank_plow_2"
		};
		hiddenSelectionsTextures[]=
		{
			"\15thNCR_Tank\data\textures_additions\Tank_Body_Enc.paa",
			"\15thNCR_Tank\data\textures_additions\Tank_Extra_Dark_Steel.paa",
			"\15thNCR_Tank\data\textures_additions\Tank_Turret_Enc.paa",
			"\15thNCR_Tank\data\textures_additions\50cal_co.paa",
			"\15thNCR_Tank\data\textures_additions\tank_plow_1_dark_steel_co.paa",
			"\15thNCR_Tank\data\textures_additions\tank_plow_2_dark_steel_co.paa"
		};
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author="Luca, Model: Moose, Tex: Rad";
		faction="BLU_F";
		textureList[]=
		{
			"Dark_steel_enclave",
			1
		};
		crew="B_Survivor_F";
		side=1;
		editorpreview="";
	};
};