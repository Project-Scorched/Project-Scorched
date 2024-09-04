class cfgPatches
{
	class ballistic_turret_auto
	{
		units[] =
		{
			"ballistic_turret_auto",
			"ballistic_turret_auto_noCrew"
		};
		weapons[] =
		{
			""
		};
		requiredVersion = 0.1;
		requiredAddons[]={};
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;

class cfgSoundShaders
{
	class ballistic_turret_auto_closeShot_SoundShader
	{
		samples[] = 
		{
			{ "PSC_Vehicles\Statics\sounds\fallout_turret_fire_1.ogg", 0.8 }
			// { "PSC_Vehicles\Statics\sounds\fallout_turret_fire_2.ogg", 0.8 },
			// { "PSC_Vehicles\Statics\sounds\fallout_turret_fire_3.ogg", 0.8 }
			// { "PSC_Vehicles\Statics\sounds\fallout_turret_fire_4.ogg", 0.8 }
		};
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class ballistic_turret_auto_midShot_SoundShader
	{
		samples[] = {{ "PSC_Vehicles\Statics\sounds\fallout_turret_fire_2.ogg", 1 }};
		volume = 1.0;
		range = 1800;
		rangeCurve = "closeShotCurve";
	};
	class ballistic_turret_auto_distShot_SoundShader
	{
		samples[] = {{ "PSC_Vehicles\Statics\sounds\fallout_turret_fire_3.ogg", 1 }};
		volume = 1.0;
		range = 1800;
		rangeCurve[] = { {0,0}, {50,0}, {300,1}, {1800,1} };
	};
};

class CfgSoundSets
{
	class ballistic_turret_auto_Shot_SoundSet
	{
		soundShaders[] = {"ballistic_turret_auto_closeShot_SoundShader", "ballistic_turret_auto_midShot_SoundShader", "ballistic_turret_auto_distShot_SoundShader" };
		volumeFactor = 1.6;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
};

class CfgSounds 
{
	sounds[] = {};
	class ballistic_turret_auto_killed 
	{
		name = "ballistic_turret_auto_killed";
		maxDistance = 200;
		sound[] = {"\PSC_Vehicles\Statics\sounds\fallout_turret_killed.ogg", 10, 1.0, 300};
		titles[] = {0, ""};
	};
	class ballistic_turret_auto_idle
	{
		name = "ballistic_turret_auto_idle";
		maxDistance = 200;
		sound[] = {"\PSC_Vehicles\Statics\sounds\fallout_turret_idle_2.ogg", 0.5, 1.0, 250};
		titles[] = {0, ""};
	};
};

class cfgWeapons
{
	class HMG_M2_Mounted;

	class ballistic_turret_auto_hmg_base : HMG_M2_Mounted
	{
		#define RELOADTIME 0.21
		#define MAGAZINERELOADTIME 5.2
		displayName = "5.56 HMG";
		reloadTime = RELOADTIME;

		magazineReloadTime = MAGAZINERELOADTIME;
		reloadMagazineSound[] = {"PSC_Vehicles\Statics\sounds\fallout_turret_reload_1.ogg",10,1,50};

		sounds[]=
		{
			"StandardSound"
		};

		class StandardSound
		{
			begin1[]=
			{
				"PSC_Vehicles\Statics\sounds\fallout_turret_fire_1.ogg",
				1.5848932,
				1,
				2100
			};
			begin2[]=
			{
				"PSC_Vehicles\Statics\sounds\fallout_turret_fire_2.ogg",
				1.5848932,
				1,
				2100
			};
			begin3[]=
			{
				"PSC_Vehicles\Statics\sounds\fallout_turret_fire_3.ogg",
				1.5848932,
				1,
				2100
			};
			soundBegin[]=
			{
				"begin1",
				0.33000001,
				"begin2",
				0.33000001,
				"begin3",
				0.34
			};
			soundsetshot[]=
			{
				"ballistic_turret_auto_Shot_SoundSet"
			};
		};

		class manual : Mode_FullAuto
		{
			reloadTime = RELOADTIME;

            sounds[]=
            {
                "StandardSound"
            };

            class StandardSound
            {
                begin1[]=
                {
                    "PSC_Vehicles\Statics\sounds\fallout_turret_fire_1.ogg",
                    1.5848932,
                    1,
                    2100
                };
                begin2[]=
                {
                    "PSC_Vehicles\Statics\sounds\fallout_turret_fire_2.ogg",
                    1.5848932,
                    1,
                    2100
                };
                begin3[]=
                {
                    "PSC_Vehicles\Statics\sounds\fallout_turret_fire_3.ogg",
                    1.5848932,
                    1,
                    2100
                };
                soundBegin[]=
                {
                    "begin1",
                    0.33000001,
                    "begin2",
                    0.33000001,
                    "begin3",
                    0.34
                };
                soundsetshot[]=
                {
                    "ballistic_turret_auto_Shot_SoundSet"
                };
            };
		};
		class close : manual {};
		class short : manual {};
		class medium : manual {};
		class far : manual {};
		// 	displayName = "5.56 HMG"
		// 	reloadTime = RELOADTIME;
		//reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10,1,20};
		// magazines[] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
	};
	class ballistic_turret_auto_hmg : ballistic_turret_auto_hmg_base {};
};

class cfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class HitPoints;
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class ballistic_turret_auto_base: StaticMGWeapon
	{
		author="";
		_generalMacro="ballistic_turret_auto_base";
		scope=0;
		displayName="MK1 Turret (UNMANNED)";
		class Armory
		{
			description="MK1 Turret (UNMANNED)";
		};
		reloadMagazineSound[] = {"PSC_Vehicles\Statics\sounds\fallout_turret_reload_1.ogg",10,1,50};
		model="PSC_Vehicles\statics\Models\turret.p3d";
		editorSubcategory="EdSubcat_Turrets";
		picture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		UiPicture="\A3\Static_f_gamma\data\ui\gear_StaticTurret_MG_CA.paa";
		cost=150000;
		getInAction="";
		getOutAction="";
		armor = 80;
		hasGunner = 1;
		isPersonTurret = 2;
		InGunnerMayFire = 1;
		maxVerticalRotSpeed = 0.2;
		memoryPointsGetInGunner="pos gunner";
		memoryPointsGetInGunnerDir="pos gunner dir";
		armorStructural		= 0.4;	// divides all damage taken to total hit point, either directly or through hit point passThrough coefficient.
		explosionShielding	= 0.04; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001;	// minimalHit for total damage
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"PSC_Vehicles\Statics\Data\Ballistic_Turret_move.rvmat",
				"PSC_Vehicles\Statics\Data\turret_move_damage.rvmat",
				"PSC_Vehicles\Statics\Data\turret_move_destruct.rvmat"
			};
		};
		class Hitpoints: HitPoints
		{
			class HitHull
			{
				armor=5;
				name="hit_hull";
				visual="turret_move";
				radius=0.25;
				minimalHit=0.070000001;
				explosionShielding=1.5;
				depends="Total";
				passThrough=0.1;
				material=51;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				discreteDistance[]={100,200,300,400,600,800,1000,1200,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				turretInfoType="RscOptics_crows";
				gunnerOpticsModel="\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev=-10;
				maxElev=50;
				minTurn=-50;
				maxTurn=50;
				body="turret_move";
				gun="turret_up";
				animationSourceBody="turret_move";
				animationSourceGun="turret_up";
				turretAxis="turret_move_axis"; 						//Axis selectionname in MemoryLOD (for the turret axis, ie mouse left and right input). 
				gunAxis="turret_up_axis"; 						//Axis selectionname in MemoryLOD (for the gun axis, ie mouse up and down input). 
				weapons[]=
				{
					"ballistic_turret_auto_hmg"
				};
				magazines[]=
				{
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag"
				};
				gunnerAction="RepeaterGunner";
				gunnergetInAction="";
				gunnergetOutAction="";
				displayName="";
				disableSoundAttenuation=1;
				class ViewOptics: ViewOptics
				{
					initAngleX=-10;
					minAngleX=-15;
					maxAngleX=30;
					initAngleY=0;
					minAngleY=-100;
					maxAngleY=100;
					initFov=0.75;
					minFov=0.125;
					maxFov=1.25;
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					thermalMode[]={0,1,2};
				};
				ejectDeadGunner=0;
			};
		};
		soundGetOut[]=
		{
			"A3\sounds_f\dummysound",
			0.00099999993,
			1,
			5
		};
		soundGetIn[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622773,
			1,
			5
		};
	};
	class ballistic_turret_auto: ballistic_turret_auto_base
	{
		author="Silence, Stevio, 1 Polish Man (Stevio)";
		editorPreview="";
		_generalMacro="ballistic_turret_auto";
		scope=2;
		scopeCurator=2;
		side=1;
		faction="fallout_statics";
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_UAV_AI"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag",
					"100Rnd_127x99_mag"
				};
			};
		};
	};
	class ballistic_turret_auto_noCrew: ballistic_turret_auto
	{
		_generalMacro="ballistic_turret_auto_noCrew";
		displayName = "MK1 Turret";
		crew="B_Soldier_F";
		typicalCargo[]={"B_Soldier_F"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				dontCreateAI = 1;
				hasGunner = 0;
			};
		};
	};
};

class Extended_Init_EventHandlers 
{
    class ballistic_turret_auto 
	{
		class ballistic_turret_auto_init 
		{
			init = "[_this select 0] call PSC_fnc_turretInit";
		};
    };
};

class CfgFunctions 
{
	
    class PSC
    {
		
        class functions 
        {
			
            class turretIdle
            {
                file = "\PSC_Vehicles\Statics\functions\fn_turretIdle.sqf";
            };

            class turretInit 
            {
                file = "\PSC_Vehicles\Statics\functions\fn_turretInit.sqf";
            };

            class turretKilled
            {
                file = "\PSC_Vehicles\Statics\functions\fn_turretKilled.sqf";
            };
			
        };
		
    };
	
};