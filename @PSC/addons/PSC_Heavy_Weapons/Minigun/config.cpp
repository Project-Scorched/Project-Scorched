// Copied and Starting Conversion from Service Rifle

class CfgPatches
{
    class PSC_Gatling_Laser
    {
        requiredAddons[] = 
        {
			"A3_Heavy_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {
			"PSC_Minigun_Base_W"
        };
        units[] =
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
class CfgHeavy_Weapons
{
	class Minigun;
	class Mmigun_Base: Minigun
	{
		class WeaponsSlotsInfo;
	};

    class PSC_Minigun_Base:	Minigun_Base
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
	
		
    class WeaponSlotsInfo
        {

        };
		soundBullet[] = {"bullet1",0.087,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.093,"bullet6",0.093,"bullet7",0.073,"bullet8",0.073,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\ ",1.0,1,10};

		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.20;
			dispersion = 0.00116;
			recoil = "recoil_temp";
			recoilProne = "recoil_temp";//Remove Prone from minigun style heavy weapons?
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
    };
};
