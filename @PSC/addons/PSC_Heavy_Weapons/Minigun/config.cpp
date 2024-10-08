class CfgPatches
{
    class PSC_Minigun
    {
        requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
		requiredversion = 0.1
        units[] =
        {

        };
        weapons[] = 
        {
			"PSC_Minigun_Base_W"
        };
		magazines[] = 
		{
			
		};
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Heavy_Weapons"; // Subconfigs
    };
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	class Minigun;
	class Mmigun_Base: Minigun
	{
		class WeaponsSlotsInfo;
	};

    class Minigun
    {
		access = 3;
		afMax = 0;
		aiDispersionCoefx = 6;
		aiDispersionCoefy = 6;
		aimTransitionalSpeed = 1.2
		aiRateOfFire = 0.5;
		aiRateOfFireDispersion = 0;
		aiRateOfFireDistance = 500;
		ammo = " ";
		artilleryCharge = 1;
		artilleryDisperson = 1;
      	author =  "$STR_PSC_Author";
		autoFire = 1;
		autoReload = 0;
		backgroundReload = 0;
		ballistiCoomputer = o;
		baseWeapon = "PSC_Minigun_Base";
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Metal_01",0.4466836,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Metal_02",0.4466836,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Metal_03",0.4466836,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Metal_04",0.4466836,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Dirt_01",0.4466836,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Dirt_02",0.4466836,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Dirt_03",0.4466836,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Dirt_04",0.4466836,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Grass_01",0.4466836,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Grass_02",0.4466836,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Grass_03",0.4466836,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_762_Grass_04",0.4466836,1,15};
		burst = 1;
		canDrop = 1;
		canLock = 0;
		canShootInWater = 0;
		cartridgePOS = "nabojnicestart";
		cardridgeVel = "nabojniceend";
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\ ",0.25118864,1,5);
		cmImmunity = 0;
		count = 0;
		cursor = "mg";
		cursoraim = "CursorAim"
		cursorAimOn = " ";
		cursorSize = 1;
		deployedPivot = " ";
		descriptionShort "Minigun - 7.62mm";//This can be changed to whatever we want it to be.
		detectRange = 0;
		dexterity = 1.7;
		discreteDistance[] = (100,200,300,400,500,600);
		descreteDistanceInitIndex = 1;
		dispersion = 0.00029;
	displayName = "Minigun";
		distanceZoomMax = 200;
		distanceZoomMin = 200;
		drySound[] = " "; //Add Sounds
		emptySound[] = (" ",1,1);
		enableAttack = 1
		ffCount = 3;
		ffFrequency = 11;
		ffMagnitude = 0;
		fireAnims[] = (); //Fire Animation
		fireLightAmbient[] = (0,0,0);
		fireLightDiffuse[] = (0.937,0.631,03259);
		fireLightDuration = 0.05;
		fireLightIntensity = 0.2;
		fireSpreadAngle = 3;
		flash = "gunfire";
		flashSize = 0.5;
		forceOptics = 0;
	handAnim[] - ("OFP2_ManSkeleton"," ");//need animation
	hiddenSelections[] = ("camo");
	hiddenSelectionsTextires[] = ();
		hiddenUnderwaterSelections[] = ();
		hiddenUnderwaterSelectionsTextures[] = ();
		htMax = 600;
		htMin = 1;
	inertia = 0.7;
		initSpeed = 0;
		irDistance = 0;
		irDotIntensity = 0.001;
		laser = 0
		lockAckquire = 1;
		lockedTargetSound[] = (" ", 0.000316228,6);
		lockingTargetSound[] = (" ", 0.000316228,6);
	magazineReloadSwitchPhase = 0.4;
		magazineReloadTime = 0;
	magazines[] = 
		{
			"PSC_762_Minigun_Base"
		};
		maxLeadSpeed = 23;
		maxRange = 500;
		maxRangeProbab = 0.4;
		maxRecoilSway = 0.008;
	maxZeroing = 800;
		memoryPointCamera = "eye";
		mFact = 1;
		mfMax = 0;
		midRange = 150;
		midRangeProbab = 0.58;
		minRange = 1;
		minRangeProbab = 0.3;
	model = " "; //Minigun Model
		modelMagazine = " ";
		modelOptics = " ";
		modelSpecial = " ";
	modes[]; ("FullAuto", "Single", "close". "short", "medium", "faroptic1")
		multiplier = 1;
		muzzleEnd = "konec hlavne";
		muzzlePos = "Usti hlavne";
		muzzles[] = ("this");
	nameSound = "Mgun";
		optics = 0;
		opticsDisablePeripheralVision = 0.67;
		opticsFlare = 0;
		opticsID = 0;
		opticsPPEffects[] = {};
		opticsZoomInit = 0.75;
		opticsZoomMax = 1.25;
		opticsZoomMin = 0.25
	picture = " "; //Weapon Picture
		primary = 10;
	recoil = "recoil_minigun";
		recoilProne = " ";
	reloadAction = "GestureReloadtemp";
		reloadMagazineSound[] = (" "); //Soundbite
		reloadSound[] = (" "); //Soundbite
		reloadTime = 0.5;
	scope = 2;
		selectFireAnim = "zasleh";
		showAimCursorInternal = 1;
		showEmpty = 1;
		shownUnderwaterSelections[] = {};
		showSwitchAction = 0;
		simulation = "Weapon";
		sound[] = {" "};
		soundBegin[] = ("sound",1)
		soundBeginWater[] = ("sound", 1)
		sound[] = {};
		soundbegin[] = {"sound", 1};
		soundbeginwater[] = {"sound", 1};
		soundbullet[] = 
		{
			"bullet1", 0.083, 
			"bullet2", 0.083, 
			"bullet3", 0.083, 
			"bullet4", 0.083, 
			"bullet5", 0.083, 
			"bullet6", 0.083, 
			"bullet7", 0.083, 
			"bullet8", 0.083, 
			"bullet9", 0.083, 
			"bullet10", 0.083, 
			"bullet11", 0.083, 
			"bullet12", 0.083
		};
		soundburst = 1;
		soundclosure[] = {"sound", 1};
		soundcontinuous = 0;
		soundend[] = {"sound", 1};
		soundloop[] = {"sound", 1};
		swaydecayspeed = 2;
		tbody = 100;
		texturetype = "default";
		type = 1;
		uipicture = "TBD";
		useaction = 0;
		useactiontitle = "";
		useasbinocular = 0;
		usemodeloptics = 1;
		value = 4;
		weaponinfotype = "RscWeaponZeroing";
		weaponlockdelay = 0;
		weaponlocksystem = 0;
		weaponpoolavailable = 1;
		weaponsoundeffect = "";
		weight = 0;
		class GunClouds {
			access = 0;
			cloudletaccy = 0;
			cloudletalpha = 0.3;
			cloudletanimperiod = 1;
			cloudletcolor[] = {1, 1, 1, 0};
			cloudletduration = 0.05;
			cloudletfadein = 0;
			cloudletfadeout = 0.1;
			cloudletgrowup = 0.05;
			cloudletmaxyspeed = 100;
			cloudletminyspeed = -100;
			cloudletshape = "cloudletClouds";
			cloudletsize = 1;
			deltat = 0;
			initt = 0;
			interval = -0.02;
			size = 0.3;
			sourcesize = 0.02;
			timetolive = 0;
			class Table {
				class T0 {
					color[] = {1, 1, 1, 0};
					maxt = 0;
				};
			};
		};
class WeaponSlotsInfo {
			allowedslots[] = {901};
			mass = 4;
			class MuzzleSlot {
				access = 1;
				compatibleitems[] = {"muzzle_snds_L"};
				displayname = "Muzzle Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope = 0;
			};
			class CowsSlot {
				access = 1;
				compatibleitems[] = {"optic_Arco", "optic_aco", "optic_ACO_grn", "optic_hamr", "optic_Holosight"};
				displayname = "Optics Slot";
				linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
				scope = 2;
			};
			class PointerSlot {};
		};	
                class ItemInfo
                {
                        priority = 1;
                        RMBhint = "XMX";
                        onHoverText = "TODO XMX DSS";
                };


		class GunParticles {
			class FirstEffect {
				directionname = "Konec hlavne";
				effectname = "RifleAssaultCloud";
				positionname = "Usti hlavne";
			};
		};
		class Single: Mode_SemiAuto {
			aidispersioncoefx = 1.4;
			aidispersioncoefy = 1.7;
			airateoffire = 2;
			airateoffiredistance = 500;
			artillerycharge = 1;
			artillerydispersion = 1;
			autofire = 0;
            begin1[] = {"PSC_Minigun\sound\UMPfiring1.wav", 1.0, 1, 1200};
            begin2[] = {"PSC_Minigun\sound\UMPfiring2.wav", 1.0, 1, 1200};
			burst = 1;
			canshootinwater = 0;
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2.wav", 3.16228, 1, 500};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3.wav", 3.16228, 1, 500};
			dispersion = 0.00093;
			displayname = "Semi";
			ffcount = 1;
			fffrequency = 11;
			ffmagnitude = 0.5;
			flash = "gunfire";
			flashsize = 0.1;
			maxrange = 500;
			maxrangeprobab = 0.2;
			midrange = 250;
			midrangeprobab = 0.7;
			minrange = 2;
			minrangeprobab = 0.3;
			multiplier = 1;
			recoil = "recoil_single_trg";
			recoilprone = "recoil_single_prone_trg";
			reloadtime = 0.065;
			requiredoptictype = -1;
			showtoplayer = 1;
			sound[] = {"", 10, 1};
			soundbegin[] = {"begin1", 0.333, "begin2", 0.333};
			soundbeginwater[] = {"sound", 1};
			soundburst = 0;
			soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
			soundcontinuous = 0;
			soundend[] = {};
			soundloop[] = {};
			texturetype = "semi";
			useaction = 0;
			useactiontitle = "";
			weaponsoundeffect = "DefaultMG"
		};
		class Burst: Mode_Burst {
			aidispersioncoefx = 2;
			aidispersioncoefy = 3;
			airateoffire = "1e-006";
			airateoffiredistance = 500;
			artillerycharge = 1;
			artillerydispersion = 1;
			autofire = 0;
            begin1[] = {"PSC_Minigun\sound\UMPfiring1.wav", 1.0, 1, 1200};
            begin2[] = {"PSC_Minigun\sound\UMPfiring2.wav", 1.0, 1, 1200};
			burst = 2;
			canshootinwater = 0;
			closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_2.wav", 3.16228, 1, 500};
			closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_3.wav", 3.16228, 1, 500};
			dispersion = 0.00093;
			displayname = "Burst";
			ffcount = 1;
			fffrequency = 11;
			ffmagnitude = 0.5;
			flash = "gunfire";
			flashsize = 0.1;
			maxrange = 30;
			maxrangeprobab = 0.05;
			midrange = 15;
			midrangeprobab = 0.7;
			minrange = 0;
			minrangeprobab = 0.9;
			multiplier = 1;
			recoil = "recoil_auto_trg";
			recoilprone = "recoil_auto_prone_trg";
			reloadtime = 0.07;
			requiredoptictype = -1;
			showtoplayer = 1;
			sound[] = {"", 10, 1};
			soundbegin[] = {"begin1", 0.333, "begin2", 0.333};
			soundbeginwater[] = {"sound", 1};
			soundburst = 0;
			soundclosure[] = {"closure1", 0.5, "closure2", 0.5};
			soundcontinuous = 0;
			soundend[] = {"sound", 1};
			soundloop[] = {};
			texturetype = "burst";
			useaction = 0;
			useactiontitle = "";
			weaponsoundeffect = "DefaultRifle";
		};
		
	};
	class PSC_Minigun : PSC_Minigun_base {
		scope = 2;
	};
	class PSC_Minigun_Avenger : PSC_Minigun 
	{
		scope = 2;
		model = "PSC_Minigun";
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_L";
				slot = "MuzzleSlot";
			};
		};
	};
	class PSC_Minigun_Vindicator : PSC_Minigun 
	{
		scope = 2;
		model = "PSC_Minigun";
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_L";
				slot = "MuzzleSlot";
			};
		};
	};
	class PSC_Minigun_Gauss : PSC_Minigun 
	{
		scope = 2;
		model = "PSC_Minigun";
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_Holosight";
				slot = "CowsSlot";
			};
			class LinkedItemsMuzzle {
				item = "muzzle_snds_L";
				slot = "MuzzleSlot";
			};
		};
	};
};


class CfgMagazines {
	/*external*/ class 30Rnd_556x45_Stanag;
	class tb_30Rnd_556x45_B_Stanag : 30Rnd_556x45_Stanag {
		ammo = "TB_556x45_Ball";
		count = 30;
		descriptionshort = "Caliber: 45 ACP UMP Mag<br />Rounds: 30<br />Used in: HK UMP-45";
		displayname = "45 ACP 30rnd UMP Mag (Ball)";
		initspeed = 930;
		lastroundstracer = 0;
		picture = "\PSC_Minigun\UI\gear_hkump45_mag_ca";
		model = "PSC_Minigun\hkump_mag";
		scope = 2;
		tracersevery = 0;
	};
	class tb_30Rnd_556x45_T_Stanag : tb_30Rnd_556x45_B_Stanag {
		ammo = "TB_556x45_Tracer";
		descriptionshort = "Caliber: 45 ACP UMP Mag<br />Rounds: 30<br />Used in: HK UMP-45";
		displayname = "45 ACP 30rnd UMP Mag (Tracer)";
		lastroundstracer = 0;
		scope = 2;
		tracersevery = 1;
	};
};
class CfgAmmo {
	/*external*/ class B_556x45_Ball;
	class TB_556x45_Ball : B_556x45_Ball {
		airfriction = -0.001425;
		caliber = 0.5;
		cost = 1;
		deflecting = 20;
		hit = 8;
		indirecthit = 0;
		indirecthitrange = 0;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 1;
		tracerendtime = 1;
		tracerscale = 1;
		tracerstarttime = 0.05;
	};
	class TB_556x45_Tracer : TB_556x45_Ball {
		airfriction = -0.001425;
		caliber = 0.4;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		nvgonly = 0;
		tracerendtime = 1.4;
		tracerscale = 1;
		tracerstarttime = 0.06;
	};
};		