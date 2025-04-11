class defaultUserActions;
class DefaultEventhandlers;

class CfgPatches
{
	class PSC_HMMWV
	{
		units[] = 
		{
			"PSC_HMMWV_base",
			"PSC_HMMWV_Transport_Ve",
			"PSC_HMMWV_556LightMG_Ve",
			"PSC_HMMWV_127Browning_Ve",
			"PSC_HMMV_65Minigun_Ve",
			"PSC_HMMWV_40mmAGL_Ve"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
};

class CfgMovesBasic
{
	class DefaultDie;	
	class ManActions
	{
		PSC_HMMWV_driver="PSC_HMMWV_driver";
		PSC_HMMWV_light_machine_gun="HMMWV_light_machine_gun";
		PSC_HMMWV_browning="PSC_HMMWV_browning";
		PSC_HMMWV_minigun="PSC_HMMWV_minigun";
		PSC_HMMWV_grenade_launcher="PSC_HMMWV_grenade_launcher";
	};
};

class CfgMovesMaleSdr : CfgMovesBasic
{
	class States
	{
		class Crew;	
		
		class PSC_HMMWV_driver : Crew
		{
			file = "psc_vehicles_g\hmmwv\HMMWV_rtm\PSC_HMMWV_driver.rtm";
			interpolateTo[] = {"PSC_HMMWV_driver", 1};
		};
		class HMMWV_light_machine_gun : Crew
		{
			file = "psc_vehicles_g\hmmwv\HMMWV_rtm\PSC_HMMWV_light_machine_gun.rtm";
			interpolateTo[] = {"HMMWV_light_machine_gun", 1};
		};
		class PSC_HMMWV_browning : Crew
		{
			file = "psc_vehicles_g\hmmwv\HMMWV_rtm\PSC_HMMWV_browning.rtm";
			interpolateTo[] = {"PSC_HMMWV_browning", 1};
		};
		class PSC_HMMWV_minigun : Crew
		{
			file = "psc_vehicles_g\hmmwv\HMMWV_rtm\PSC_HMMWV_minigun.rtm";
			interpolateTo[] = {"PSC_HMMWV_minigun", 1};
		};
		class PSC_HMMWV_grenade_launcher : Crew
		{
			file = "psc_vehicles_g\hmmwv\HMMWV_rtm\PSC_HMMWV_grenade_launcher.rtm";
			interpolateTo[] = {"PSC_HMMWV_grenade_launcher", 1};
		};
	};
};

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;


class CfgWeapons 
{
	class HMG_M2;
	class PSC_127_HMVMG_W: HMG_M2 
	{
		displayName = "12.7mm Heavy Machine Gun";
		reloadTime= .5;
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzle_beg";
				directionName = "muzzle_end";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
	};
	class LMG_03_F;
	class PSC_556_HVMG_W: LMG_03_F
	{
		displayName = "5.56mm Light Machine Gun";
		class GunParticles
		{
			class effect1
			{
				positionName = "muzzle_beg";
				directionName = "muzzle_end";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
	};
};


class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
		};
		class AnimationSources;
		class EventHandlers;
	};
	
    /////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	
	class PSC_HMMWV_base: Car_F
	{
		scope = 0;
		author = "Project Scorched";
		model = "\psc_vehicles_g\hmmwv\HMMWV\PSC_HMMWV.p3d";
		Icon = "\psc_vehicles_g\hmmwv\UI\Icon_PSC_HMMWV_CA";
		picture	= "\psc_vehicles_g\hmmwv\UI\picture_PSC_HMMWV_ca";
		editorCategory = "PSC_EdCat_Wastelander";
		editorSubCatergory = "EdSubcat_Cars";
		side=3;
		faction	= "PSC_Wastelander";
		
		fuelExplosionPower = 1.4;
		
		transportSoldier = 7;
		//transportRepair = 0;
        //transportAmmo = 0;
        //transportFuel = 0;
		
		transportMaxBackpacks 	= 3;
		transportMaxMagazines = 50;
        transportMaxWeapons = 5;
		maximumLoad = 2000;
		/*--------------------*/

        maxSpeed = 140;
		terrainCoef = 1;
		turnCoef = 1.5;
		precision = 10;
		crewVulnerable=0;
		brakeDistance = 1;
		acceleration = 15;
		
		fireResistance = 5;
		enableRadio = 1;
		enableGPS = 1;
		armor = 200;
		cost = 50000;
		
		armorStructural=7;
		damageResistance=0.030990001;
		secondaryExplosion=100;
		
		hideWeaponsDriver=1;
		hideWeaponsCargo=1;

		wheelDamageRadiusCoef = 0.8;
		wheelDestroyRadiusCoef = 0.3;
		maxFordingDepth = 0.5;
		waterResistance = 1;
		crewCrashProtection = 0.25;
		crewExplosionProtection = 0.8;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "peredacha";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		
		memoryPointsGetInCargo[] =
        {
            "pos cargo1",
            "pos cargo2",
			"pos cargo3",
			"pos cargo4"
        };
		memoryPointsGetInCargoDir[] =
        {
            "pos cargo1 dir",
            "pos cargo2 dir",
            "pos cargo3 dir",
			"pos cargo4 dir"
        };

		class Turrets: Turrets {};
		
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius = 0.2;
				visual = "wheel_1_1_damage";
				armorComponent = "wheel_1_1_hide";
				armor = -120;
				minimalHit = -0.00833333;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius = 0.2;
				visual = "wheel_1_2_damage";
				armorComponent = "wheel_1_2_hide";
				armor = -120;
				minimalHit = -0.00833333;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius = 0.2;
				visual = "wheel_2_1_damage";
				armorComponent = "wheel_2_1_hide";
				armor = -120;
				minimalHit = -0.00833333;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius = 0.2;
				visual = "wheel_2_2_damage";
				armorComponent = "wheel_2_2_hide";
				armor = -120;
				minimalHit = -0.00833333;
				explosionShielding = 4;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.2;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.25;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.4;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitBody
			{
				armor = 8;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.01;
				explosionShielding = 2;
				radius = 0.45;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.25;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.25;
			};
		};

		driverAction 		= PSC_HMMWV_driver;
		cargoAction[] 		= {passenger_generic01_foldhands, passenger_generic01_leanright, passenger_generic01_leanleft, passenger_generic01_foldhands, passenger_generic01_foldhands, passenger_generic01_leanleft, passenger_generic01_leanright};
		getInAction 		= GetInLow;
		getOutAction 		= GetOutLow;
		cargoGetInAction[] 	= {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};

		#include "sounds.hpp"
		#include "pip.hpp"
		#include "physx.hpp"

		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] 		= {1900, 1800, 1700};
				ambient[]		= {5, 5, 5};
				position 		= "LightCarHeadL01";
				direction 		= "LightCarHeadL01_end";
				hitpoint 		= "Light_L";
				selection 		= "Light_L";
				size 			= 1;
				innerAngle 		= 100;
				outerAngle 		= 179;
				coneFadeCoef 	= 10;
				intensity 		= 1;
				useFlare 		= 1;	
				dayLight 		= 1;
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
			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"}, {"LightCarHeadR01"}};
		
		class Exhausts
		{
			class Exhaust1
			{
				position 	= "exhaust1_pos";
				direction 	= "exhaust1_dir";
				effect 		= "ExhaustsEffect";
			};

			class Exhaust2
			{
				position 	= "exhaust2_pos";
				direction 	= "exhaust2_dir";
				effect 		= "ExhaustsEffect";
			};
		};
		
		class PlateInfos
		{
			name = "spz";
			color[] = {1,1,1,1.0};
			plateFont = "RobotoCondensedLight";
			plateFormat	= "PSC ##-####";
			plateLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		};
		
		class UserActions
		{
            class LeftSignalOn
			{
				userActionID= 50;
				displayName="<t color=""#ffff00"">Turn left [Q]</t>";
				position = "mph_axis";
				radius=1;
				animPeriod= 2;
				onlyForPlayer=0;
				condition="this animationPhase ""turn_left"" < 0.5 AND Alive(this) AND driver this == player";
				statement="this animate [""turn_left"",1];";
				shortcut="LeanLeft";
				showWindow=0;
				hideOnUse=0;
			};
			class LeftSignalOff : LeftSignalOn
			{
				displayName="<t color=""#ffff00"">Turn left off [Q]</t>";
				condition="this animationPhase ""turn_left"" > 0.5 AND Alive(this) AND driver this == player";
				statement="this animate [""turn_left"",0];";
				shortcut="LeanLeft";
			};
			class RightSignalOn : LeftSignalOn
			{
				displayName="<t color=""#ffff00"">Turn right [E]</t>";
				condition="this animationPhase ""turn_right"" < 0.5 AND Alive(this) AND driver this == player";
				statement="this animate [""turn_right"",1];";
				shortcut="LeanRight";
			};
			class RightSignalOff : LeftSignalOn
			{
				displayName="<t color=""#ffff00"">Turn right off [E]</t>";
				condition="this animationPhase ""turn_right"" > 0.5 AND Alive(this) AND driver this == player";
				statement="this animate [""turn_right"",0];";
				shortcut="LeanRight";
			};
		};
		
		class VehicleTransport
        {
               class Cargo
              {
                   parachuteClass              = B_Parachute_02_F;
                   parachuteHeightLimit        = 40;
                   canBeTransported            = 1;
                   dimensions[]                = {"BBox_1_1_pos", "BBox_1_2_pos"};
             };
		};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};

        hiddenSelections[]=
		{
			"Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7"
		};
		hiddenSelectionsTextures[]=
		{
			"\psc_vehicles_g\hmmwv\data\common\green\main1_low_co.paa",
			"\psc_vehicles_g\hmmwv\data\common\green\wheels_low_co.paa",
			"\psc_vehicles_g\hmmwv\data\common\green\dop_low_co.paa",
			"\psc_vehicles_g\hmmwv\data\common\green\main_detail_low_co.paa",
			"\psc_vehicles_g\hmmwv\data\common\green\inside_low_co.paa",
			"\psc_vehicles_g\hmmwv\data\common\green\panel_low_co.paa",
			"\psc_vehicles_g\hmmwv\data\common\green\close_dop1_low_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			
			"\psc_vehicles_g\hmmwv\data\main1_low_co.rvmat",
			"\psc_vehicles_g\hmmwv\data\wheels_low_co.rvmat",
			"\psc_vehicles_g\hmmwv\data\dop_low_co.rvmat",
			"\psc_vehicles_g\hmmwv\data\main_detail_low_co.rvmat",
			"\psc_vehicles_g\hmmwv\data\inside_low_co.rvmat",
			"\psc_vehicles_g\hmmwv\data\panel_low_co.rvmat",
			"\psc_vehicles_g\hmmwv\data\close_dop1_low_co.rvmat"
		};
		
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"a3\data_f\glass_veh.rvmat",
			    "A3\data_f\Glass_veh_damage.rvmat",
			    "A3\data_f\Glass_veh_damage.rvmat",
				
				"psc_vehicles_g\hmmwv\data\main1_low_co.rvmat",
				"A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
				
			    "psc_vehicles_g\hmmwv\data\wheels_low_co.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
				
			    "psc_vehicles_g\hmmwv\data\dop_low_co.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
			
			    "psc_vehicles_g\hmmwv\data\main_detail_low_co.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
			
		    	"psc_vehicles_g\hmmwv\data\inside_low_co.rvmat",
		    	"A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
			
			    "psc_vehicles_g\hmmwv\data\panel_low_co.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
			
			    "psc_vehicles_g\hmmwv\data\close_dop1_low_co.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
				
				"psc_vehicles_g\hmmwv\data\light_glass.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat",
				
				"a3\data_f\default_super.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_damage.rvmat",
			    "A3\soft_F\Offroad_01\Data\offroad_01_ext_destruct.rvmat"
				
			};
		};
		
		textureList[]=
		{
			/**********************/
			"common_black",0.5,
			"common_blue",0.5,
			"common_desert",0.5,
			"common_green",0.5,
			"common_grey",0.5,
			"common_white",0.5,
			"STAR_black",0.5,
			"STAR_blue",0.5,
			"STAR_desert",0.5,
			"STAR_green",0.5,
			"STAR_grey",0.5,
			"STAR_white",0.5
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
					"\psc_vehicles_g\hmmwv\data\common\black\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\black\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\black\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\black\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\black\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\black\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\black\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class common_blue
			{
				displayName="Common blue";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\common\blue\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\blue\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\blue\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\blue\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\blue\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\blue\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\blue\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class common_desert
			{
				displayName="Common desert";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\common\desert\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\desert\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\desert\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\desert\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\desert\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\desert\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\desert\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class common_green
			{
				displayName="Common green";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\common\green\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\green\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\green\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\green\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\green\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\green\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\green\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class common_grey
			{
				displayName="Common grey";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\common\grey\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\grey\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\grey\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\grey\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\grey\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\grey\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\grey\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class common_white
			{
				displayName="Common white";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\common\white\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\white\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\white\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\white\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\white\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\white\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\common\white\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			/*******************************************************/
			class STAR_black
			{
				displayName="STAR black";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\STAR\black\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\black\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\black\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\black\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\black\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\black\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\black\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class STAR_blue
			{
				displayName="STAR blue";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\STAR\blue\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\blue\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\blue\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\blue\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\blue\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\blue\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\blue\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class STAR_desert
			{
				displayName="STAR desert";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\STAR\desert\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\desert\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\desert\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\desert\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\desert\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\desert\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\desert\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class STAR_green
			{
				displayName="STAR green";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\STAR\green\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\green\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\green\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\green\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\green\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\green\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\green\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class STAR_grey
			{
				displayName="STAR grey";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\STAR\grey\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\grey\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\grey\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\grey\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\grey\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\grey\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\grey\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			class STAR_white
			{
				displayName="STAR white";
				author = "Project Scorched";
				textures[]=
				{
					"\psc_vehicles_g\hmmwv\data\STAR\white\main1_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\white\wheels_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\white\dop_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\white\main_detail_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\white\inside_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\white\panel_low_co.paa",
			        "\psc_vehicles_g\hmmwv\data\STAR\white\close_dop1_low_co.paa"
				};
				factions[]=
				{
					"PSC_Wastelander"
				};
			};
			/*******************************************************/
		};
		/*
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
		};*/
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	
	class PSC_HMMWV_Transport_Ve: PSC_HMMWV_base
	{
		forceInGarage=1;
		displayName="GA-151 'Hummer' (Transport)";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;

		crew="C_man_1";
		
		
		
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] 		= {1900, 1800, 1700};
				ambient[]		= {5, 5, 5};
				position 		= "LightCarHeadL01";
				direction 		= "LightCarHeadL01_end";
				hitpoint 		= "Light_L";
				selection 		= "Light_L";
				size 			= 1;
				innerAngle 		= 100;
				outerAngle 		= 179;
				coneFadeCoef 	= 10;
				intensity 		= 1;
				useFlare 		= 1;	
				dayLight 		= 1;
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
			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class SpotLight_L
			{
				color[] = {1.9,1.8,1.7};
				ambient[] = {0.001,0.00025,2e-05};
				intensity = 10000;
				size = 1;
				innerAngle = 45;
				outerAngle = 175;
				coneFadeCoef = 10;
				position = "Light_Spotlight_L_pos";
				direction = "Light_Spotlight_L_dir";
				hitpoint = "Light_Spotlight_hit";
				selection = "Light_Spotlight";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 15;
					quadratic = 7;
					hardLimitStart = 5;
					hardLimitEnd = 7;
				};
			};
			
			class SpotLight_R: SpotLight_L
			{
				position 	= "Light_Spotlight_R_pos";
				direction 	= "Light_Spotlight_R_dir";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01"}, {"LightCarHeadR01"}, {"SpotLight_L","SpotLight_R"}};

		class AnimationSources: AnimationSources
		{
			class PSC_bumper
            {
                displayName = "1. Bumper";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 0;
            };
            /**********************/
			class PSC_windshield
            {
                displayName = "2. Windshield";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_window_reinforcement", 0, "PSC_armored_window", 0};
            };
			class PSC_window_reinforcement
            {
                displayName = "2. Window Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_armored_window", 0};
            };
			class PSC_armored_window
            {
                displayName = "2. Armored Window";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_window_reinforcement", 0};
            };
            /**********************/
			class Spotlight
            {
                displayName = "3. Spotlight";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_cover", 1, "PSC_cover_hatch", 0, "PSC_half_cover", 0};
            };
			class PSC_cover
            {
                displayName = "3. Cover";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_cover_hatch", 0, "PSC_open_roof", 0, "PSC_half_cover", 0};
            };
			class PSC_cover_hatch
            {
                displayName = "3. Cover hatch";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_cover", 0, "PSC_open_roof", 0, "PSC_half_cover", 0};
            };
			class PSC_open_roof
            {
                displayName = "3. Open roof";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_cover", 0, "PSC_cover_hatch", 0, "PSC_half_cover", 0};
            };
			class PSC_half_cover
            {
                displayName = "3. Half cover";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_cover", 0, "PSC_cover_hatch", 0, "PSC_open_roof", 0};
            };
            /**********************/
			class PSC_Trunk_Close
            {
                displayName = "4. Trunk Close";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_filtration", 0, "PSC_partitions", 0, "PSC_tent", 0, "PSC_partition", 0};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_filtration
            {
                displayName = "4. Filtration";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_tent", 0, "PSC_partition", 1};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_partitions
            {
                displayName = "4. Partitions";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			class PSC_tent
            {
                displayName = "4. Tent";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_filtration", 0};
            };
			class PSC_partition
            {
                displayName = "4. Partition";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			/**********************/
			class PSC_door_half
            {
                displayName = "5. Door half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact_half
            {
                displayName = "5. Door intact, half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact
            {
                displayName = "5. Door Intact";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_armored
            {
                displayName = "5. Door Armored";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_reinforcement
            {
                displayName = "5. Door Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0};
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
		};
		animationList[] =
        {
			"PSC_bumper", 0.5,
			"PSC_windshield", 0.5,
			"PSC_window_reinforcement", 0.5,
			"PSC_armored_window", 0.5,
			//"Spotlight", 0.5,
			"PSC_cover", 0.5,
			"PSC_cover_hatch", 0.5,
			"PSC_open_roof", 0.5,
			"PSC_half_cover", 0.5,
			"PSC_Trunk_Close", 0.5,
			"PSC_filtration", 0.5,
			"PSC_partitions", 0.5,
			"PSC_tent", 0.5,
			"PSC_partition", 0.5,
			"PSC_door_half", 0.5,
			"PSC_door_intact_half", 0.5,
			"PSC_door_intact", 0.5,
			"PSC_door_armored", 0.5,
			"PSC_door_reinforcement", 0.5
			
        };
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	
	class PSC_HMMWV_556LightMG_Ve: PSC_HMMWV_base
	{
		forceInGarage=1;
		displayName="GA-151 'Hummer' (LMG)";
		model = "\psc_vehicles_g\hmmwv\HMMWV_light_machine_gun\PSC_HMMWV_light_machine_gun.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		crew="C_man_1";
		
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"PSC_556_HVMG_W"
				};
				magazines[]=
				{
					"200Rnd_556x45_Box_F",
					"200Rnd_556x45_Box_F",
					"200Rnd_556x45_Box_F",
					"200Rnd_556x45_Box_F"
				};
				minElev=-10;
				maxElev=20;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="HMMWV_light_machine_gun";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_2_beg";
				gunEnd="muzzle_2_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class PSC_bumper
            {
                displayName = "1. Bumper";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
				forceAnimatePhase = 0;
            };
            /**********************/
			class PSC_windshield
            {
                displayName = "2. Windshield";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_window_reinforcement", 0, "PSC_armored_window", 0};
            };
			class PSC_window_reinforcement
            {
                displayName = "2. Window Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_armored_window", 0};
            };
			class PSC_armored_window
            {
                displayName = "2. Armored Window";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_window_reinforcement", 0};
            };
            /**********************/
			class PSC_Trunk_Close
            {
                displayName = "3. Trunk Close";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_filtration", 0, "PSC_partitions", 0, "PSC_tent", 0, "PSC_partition", 0};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_filtration
            {
                displayName = "3. Filtration";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_tent", 0, "PSC_partition", 1};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_partitions
            {
                displayName = "3. Partitions";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			class PSC_tent
            {
                displayName = "3. Tent";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_filtration", 0};
            };
			class PSC_partition
            {
                displayName = "3. Partition";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			/**********************/
			class PSC_door_half
            {
                displayName = "4. Door half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact_half
            {
                displayName = "4. Door intact, half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact
            {
                displayName = "4. Door Intact";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_armored
            {
                displayName = "4. Door Armored";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_reinforcement
            {
                displayName = "4. Door Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0};
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
			class LMG_reload
			{
				source="reload";
				weapon="MMG_02_vehicle";
			};
			class LMG_reloadmagazine
			{
				source="reloadmagazine";
				weapon="MMG_02_vehicle";
			};
			class LMG_muzzle_rot
			{
				source="ammorandom";
				weapon="MMG_02_vehicle";
			};
		};
		animationList[] =
        {
			"PSC_bumper", 0.5,
			"PSC_windshield", 0.5,
			"PSC_window_reinforcement", 0.5,
			"PSC_armored_window", 0.5,
			"PSC_Trunk_Close", 0.5,
			"PSC_filtration", 0.5,
			"PSC_partitions", 0.5,
			"PSC_tent", 0.5,
			"PSC_partition", 0.5,
			"PSC_door_half", 0.5,
			"PSC_door_intact_half", 0.5,
			"PSC_door_intact", 0.5,
			"PSC_door_armored", 0.5,
			"PSC_door_reinforcement", 0.5
			
        };
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	
	class PSC_HMMWV_127Browning_Ve: PSC_HMMWV_base
	{
		forceInGarage=1;
		displayName="GA-151 'Hummer' (M2)";
		model = "\psc_vehicles_g\hmmwv\HMMWV_browning\PSC_HMMWV_browning.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		crew="C_man_1";
		
		
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"PSC_127_HMVMG_W"
				};
				magazines[]=
				{
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red",
					"200Rnd_127x99_mag_Tracer_Red"
				};
				minElev=-10;
				maxElev=20;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="PSC_HMMWV_browning";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				class ViewOptics: ViewOptics
				{
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class PSC_bumper
            {
                displayName = "1. Bumper";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
				forceAnimatePhase = 0;
            };
            /**********************/
			class PSC_windshield
            {
                displayName = "2. Windshield";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_window_reinforcement", 0, "PSC_armored_window", 0};
            };
			class PSC_window_reinforcement
            {
                displayName = "2. Window Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_armored_window", 0};
            };
			class PSC_armored_window
            {
                displayName = "2. Armored Window";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_window_reinforcement", 0};
            };
            /**********************/
			class PSC_Trunk_Close
            {
                displayName = "3. Trunk Close";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_filtration", 0, "PSC_partitions", 0, "PSC_tent", 0, "PSC_partition", 0};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_filtration
            {
                displayName = "3. Filtration";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_tent", 0, "PSC_partition", 1};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_partitions
            {
                displayName = "3. Partitions";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			class PSC_tent
            {
                displayName = "3. Tent";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_filtration", 0};
            };
			class PSC_partition
            {
                displayName = "3. Partition";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			/**********************/
			class PSC_door_half
            {
                displayName = "4. Door half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact_half
            {
                displayName = "4. Door intact, half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact
            {
                displayName = "4. Door Intact";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_armored
            {
                displayName = "4. Door Armored";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_reinforcement
            {
                displayName = "4. Door Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0};
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
			class LMG_reload
			{
				source="reload";
				weapon="HMG_127_LSV_01";
			};
			class LMG_reloadmagazine
			{
				source="reloadmagazine";
				weapon="HMG_127_LSV_01";
			};
			class LMG_muzzle_rot
			{
				source="ammorandom";
				weapon="HMG_127_LSV_01";
			};
		};
		animationList[] =
        {
			"PSC_bumper", 0.5,
			"PSC_windshield", 0.5,
			"PSC_window_reinforcement", 0.5,
			"PSC_armored_window", 0.5,
			"PSC_Trunk_Close", 0.5,
			"PSC_filtration", 0.5,
			"PSC_partitions", 0.5,
			"PSC_tent", 0.5,
			"PSC_partition", 0.5,
			"PSC_door_half", 0.5,
			"PSC_door_intact_half", 0.5,
			"PSC_door_intact", 0.5,
			"PSC_door_armored", 0.5,
			"PSC_door_reinforcement", 0.5
			
        };
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	
	class PSC_HMMV_65Minigun_Ve: PSC_HMMWV_base
	{
		forceInGarage=1;
		displayName="GA-151 'Hummer' (Minigun)";
		model = "\psc_vehicles_g\hmmwv\HMMWV_minigun\PSC_HMMWV_minigun.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		crew="C_man_1";
		


		#include "HMMWV_minigun\pip.hpp"
		
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				body="mainTurret";
				gun="mainGun";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				weapons[]=
				{
					"LMG_Minigun_Transport"
				};
				magazines[]=
				{
					"500Rnd_65x39_Belt_Tracer_Green_Splash",
					"500Rnd_65x39_Belt_Tracer_Green_Splash",
					"500Rnd_65x39_Belt_Tracer_Green_Splash",
					"500Rnd_65x39_Belt_Tracer_Green_Splash"
				};
				minElev=-10;
				maxElev=10;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="PSC_HMMWV_minigun";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="muzzle_beg";
				gunEnd="muzzle_end";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
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
						"Normal",
						"NVG",
						"TI"
					};
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class PSC_bumper
            {
                displayName = "1. Bumper";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
				forceAnimatePhase = 0;
            };
            /**********************/
			class PSC_windshield
            {
                displayName = "2. Windshield";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_window_reinforcement", 0, "PSC_armored_window", 0};
            };
			class PSC_window_reinforcement
            {
                displayName = "2. Window Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_armored_window", 0};
            };
			class PSC_armored_window
            {
                displayName = "2. Armored Window";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_window_reinforcement", 0};
            };
            /**********************/
			class PSC_Trunk_Close
            {
                displayName = "3. Trunk Close";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_filtration", 0, "PSC_partitions", 0, "PSC_tent", 0, "PSC_partition", 0};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_filtration
            {
                displayName = "3. Filtration";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_tent", 0, "PSC_partition", 1};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_partitions
            {
                displayName = "3. Partitions";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			class PSC_tent
            {
                displayName = "3. Tent";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_filtration", 0};
            };
			class PSC_partition
            {
                displayName = "3. Partition";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			/**********************/
			class PSC_door_half
            {
                displayName = "4. Door half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact_half
            {
                displayName = "4. Door intact, half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact
            {
                displayName = "4. Door Intact";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_armored
            {
                displayName = "4. Door Armored";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_reinforcement
            {
                displayName = "4. Door Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0};
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
			class Minigun
			{
				source="revolving";
				weapon="LMG_Minigun_Transport";
			};
			class Minigun_reloadmagazine
			{
				source="reloadmagazine";
				weapon="LMG_Minigun_Transport";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="LMG_Minigun_Transport";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="LMG_Minigun_Transport";
			};
		};
		animationList[] =
        {
			"PSC_bumper", 0.5,
			"PSC_windshield", 0.5,
			"PSC_window_reinforcement", 0.5,
			"PSC_armored_window", 0.5,
			"PSC_Trunk_Close", 0.5,
			"PSC_filtration", 0.5,
			"PSC_partitions", 0.5,
			"PSC_tent", 0.5,
			"PSC_partition", 0.5,
			"PSC_door_half", 0.5,
			"PSC_door_intact_half", 0.5,
			"PSC_door_intact", 0.5,
			"PSC_door_armored", 0.5,
			"PSC_door_reinforcement", 0.5
			
        };
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
	
	class PSC_HMMWV_40mmAGL_Ve: PSC_HMMWV_base
	{
		forceInGarage=1;
		displayName="GA-151 'Hummer' (AGL)";
		model = "\psc_vehicles_g\hmmwv\HMMWV_grenade_launcher\PSC_HMMWV_grenade_launcher.p3d";
		author = "Project Scorched";
		scope=2;
		scopeCurator=2;
		scopeArsenal = 2;
		crew="C_man_1";
		

		#include "HMMWV_grenade_launcher\pip.hpp"
		
		class Turrets: Turrets
		{
			class TopTurret: MainTurret
			{
				disableSoundAttenuation=1;
				gunnerLeftHandAnimName="otocHlaven";
				gunnerRightHandAnimName="otocHlaven";
				gunnerLeftLegAnimName="leg_L";
				gunnerRightLegAnimName="leg_R";
				body="mainTurret";
				gun="mainGun";
				usePiP = 2;
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
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
				minElev=-10;
				maxElev=15;
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					9.9999977e-007,
					1
				};
				gunnerAction="PSC_HMMWV_grenade_launcher";
				gunnerCompartments="Compartment1";
				ejectDeadGunner=0;
				castGunnerShadow=1;
				stabilizedInAxes=0;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				memoryPointGunnerOptics="gunnerView";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				commanding=1;
				primaryGunner=1;
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
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
						"Normal",
						"NVG",
						"TI"
					};
				};
				class ViewGunner: ViewOptics
				{
				};
			};
		};

		class AnimationSources: AnimationSources
		{
			class PSC_bumper
            {
                displayName = "1. Bumper";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
				forceAnimatePhase = 0;
            };
            /**********************/
			class PSC_windshield
            {
                displayName = "2. Windshield";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_window_reinforcement", 0, "PSC_armored_window", 0};
            };
			class PSC_window_reinforcement
            {
                displayName = "2. Window Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_armored_window", 0};
            };
			class PSC_armored_window
            {
                displayName = "2. Armored Window";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_windshield", 0, "PSC_window_reinforcement", 0};
            };
            /**********************/
			class PSC_Trunk_Close
            {
                displayName = "3. Trunk Close";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_filtration", 0, "PSC_partitions", 0, "PSC_tent", 0, "PSC_partition", 0};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_filtration
            {
                displayName = "3. Filtration";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_tent", 0, "PSC_partition", 1};
				lockCargoAnimationPhase = 1;
				lockCargo[] = {3,4,5,6};
            };
			class PSC_partitions
            {
                displayName = "3. Partitions";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			class PSC_tent
            {
                displayName = "3. Tent";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0, "PSC_filtration", 0};
            };
			class PSC_partition
            {
                displayName = "3. Partition";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_Trunk_Close", 0};
            };
			/**********************/
			class PSC_door_half
            {
                displayName = "4. Door half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact_half
            {
                displayName = "4. Door intact, half";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_intact
            {
                displayName = "4. Door Intact";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_armored", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_armored
            {
                displayName = "4. Door Armored";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_reinforcement", 0};
            };
			class PSC_door_reinforcement
            {
                displayName = "4. Door Reinforcement";
                source = "user";
                animPeriod = 0.000001;
                initPhase = 0;
                forceAnimatePhase = 1;
				forceAnimate[] = {"PSC_door_half", 0, "PSC_door_intact_half", 0, "PSC_door_intact", 0, "PSC_door_armored", 0};
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
			class Minigun
			{
				source="revolving";
				weapon="GMG_40mm";
			};
			class Minigun_reloadmagazine
			{
				source="reloadmagazine";
				weapon="GMG_40mm";
			};
			class muzzle_rot
			{
				source="ammorandom";
				weapon="GMG_40mm";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="GMG_40mm";
			};
		};
		animationList[] =
        {
			"PSC_bumper", 0.5,
			"PSC_windshield", 0.5,
			"PSC_window_reinforcement", 0.5,
			"PSC_armored_window", 0.5,
			"PSC_Trunk_Close", 0.5,
			"PSC_filtration", 0.5,
			"PSC_partitions", 0.5,
			"PSC_tent", 0.5,
			"PSC_partition", 0.5,
			"PSC_door_half", 0.5,
			"PSC_door_intact_half", 0.5,
			"PSC_door_intact", 0.5,
			"PSC_door_armored", 0.5,
			"PSC_door_reinforcement", 0.5
			
        };
	};
	/////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////
};