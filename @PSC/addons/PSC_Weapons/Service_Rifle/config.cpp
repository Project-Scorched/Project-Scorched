class CfgPatches
{
    class PSC_Service_Rifle
    {
        requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {
			"PSC_Rifle_Base_W",
			"PSC_ServiceRifle_Polymer"
        };
        units[] =
        {

        };
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Weapons"; // Subconfigs
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
	class rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponsSlotsInfo;
	};

    class PSC_Rifle_Base_W:	Rifle_Base_F
    {
      	author =  "$STR_PSC_Author";
		displayName = "Rifle Base";
		scope = 0;
		magazines[] = 
		{
			"PSC_556_ServiceRifle_M"
		};
        magazineReloadSwitchPhase = 0.4;
        reloadAction = "GestureReloadMk20";
        recoil = "recoil_mk20";
        maxZeroing = 800;
        class WeaponSlotsInfo
        {

        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "";
        handAnim[] = {"OFP2_ManSkeleton","PSC_Weapons\Service_Rifle\data\animations\serviceriflehold.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.4466836,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.4466836,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.4466836,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.4466836,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",0.4466836,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",0.4466836,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",0.4466836,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",0.4466836,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",0.4466836,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",0.4466836,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",0.4466836,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",0.4466836,1,15};
		soundBullet[] = {"bullet1",0.087,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.093,"bullet6",0.093,"bullet7",0.073,"bullet8",0.073,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.25118864,1,5};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
    };

	class PSC_ServiceRifle_Base_W: PSC_Rifle_Base_W
	{
		displayName = "Service Rifle (Wood)";
		model = "PSC_Weapons\Service_Rifle\ServiceRifle.p3d";
		scope = 2;
		descriptionShort = "Gun Runner Produced .223 Rifle";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\PSC_Weapons\Service_Rifle\data\ServiceRifle_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\PSC_Weapons\Service_Rifle\data\ServiceRifle.rvmat"
		};
	};
	class PSC_ServiceRifle_Polymer: PSC_ServiceRifle_Base_W
	{	
		displayName = "Service Rifle (Polymer)";
		scope = 2;
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\PSC_Weapons\Service_Rifle\data\polymer\ServiceRifle_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\PSC_Weapons\Service_Rifle\data\polymer\ServiceRiflePolymer.rvmat"
		};
	};
};