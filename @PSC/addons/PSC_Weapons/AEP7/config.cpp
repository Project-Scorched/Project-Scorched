class CfgPatches
{
	class PSC_AEP7
	{
     requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {
			"PSC_AEP7_W",
        };
        units[] =
        {

        };
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Weapons"; // Subconfigs
	};
};
class Mode_SemiAuto;
class MuzzleSlot;
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
    class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	
    class PSC_Pistol_Base: Pistol_Base_F
    {
        author = "$STR_PSC_Author";
		scope = 0;
		model = "PSC_Weapons\AEP7\PSC_AEP7.p3d";
		//picture = "\A3\weapons_F\Pistols\P07\data\UI\gear_p07_x_ca.paa";
		//UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		magazines[] = 
        {
            "PSC_MicrofusionCell_M"
        };
		magazineWell[] = 
		{
			"PSC_AEP7_MW"
		};
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_p07";
		displayname = "Pistol Base";
		hiddenSelectionsTextures[] = 
		{
			"PSC_Weapons\AEP7\data\AEP7_co.paa"
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\dry_P07",0.39810717,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",1.0,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.22387211,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.22387211,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.22387211,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.22387211,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Library
		{
			libTextDesc = "$STR_A3_CfgWeapons_hgun_P07_Library0";
		};
		descriptionShort = "$STR_A3_CfgWeapons_hgun_P071";
		inertia = 0.1;
		aimTransitionSpeed = 1.6;
		dexterity = 1.9;
		initSpeed = 410;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot: MuzzleSlot_9mm
			{
				iconPosition[] = {0.24,0.35};
				iconScale = 0.2;
			};
		};
		class ItemInfo
		{
			priority = 2;
		};
    };
	class PSC_AEP7_W: PSC_Pistol_Base
	{
		displayName = "$STR_PSC_AEP7_W";
		scope = 2;
		descriptionShort = "Fusion Powered Laser Pistol";
		hiddenSelectionsTextures[] = 
		{
			"PSC_Weapons\AEP7\data\AEP7_co.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"PSC_Weapons\AEP7\data\AEP7.rvmat"
		};
	};	
};