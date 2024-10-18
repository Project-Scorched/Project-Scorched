class CfgPatches
{
    class PSC_ServiceRifle
    {
        requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {
			"PSC_ServiceRifle_Base_W",
			"PSC_ServiceRifle_Base_P"
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
class CfgRecoils
{
	class PSC_Rifle_Base_Recoil
	{
		muzzleOuter[] = {0.15,0.6,0.3,0.2};
		kickBack[] = {0.01,0.03};
		temporary = 0.01;
	};
};

class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponsSlotsInfo;
	};

    class PSC_Rifle_Base_W:	Rifle_Base_F
    {
      	author =  "$STR_PSC_Author";
		displayName = "Service Rifle Base";
		scope = 0;
		hiddenSelections[] = 
		{
			"camo"
		};
		magazines[] = 
		{
			"PSC_556_ServiceRifle_M"
		};
		magazineWell[] =
		{
			"PSC_ServiceRifle_MW"
		};
        magazineReloadSwitchPhase = 0.4;
        reloadAction = "PSC_GestureReloadServiceRifle";
        recoil = "PSC_Rifle_Base_Recoil";
        maxZeroing = 800;
		selectionFireAnim = "zasleh";
        class WeaponSlotsInfo
        {
			class MuzzleSlot : SlotInfo
			{
				// targetProxy
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";

				// display name
				displayName = "Muzzle Slot";

				// class names with items supported by weapon
				//compatibleItems[] = {}; // moved to each weapon
			};
			//class CowsSlot : CowsSlot {};
			//class PointerSlot : PointerSlot {};
			//allowedSlots[] = { 901 }; // you simply cannot put this into your pants
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "";
        handAnim[] = {"OFP2_ManSkeleton","PSC_Weapons\ServiceRifle\data\animations\servicerifleholdtest.rtm"};
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
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.25118864,1,5};
		cartridgePos = "Nabojnicestart";
		cartridgeVel = "Nabojnicesend";
		muzzleEnd="konec hlavne";
		muzzlePos = "usti hlavne";
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType // this base class has base definitions that both standard and silenced sounds will inherit (sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "A3\sounds_f\weapons\closure\closure_rifle_2", db-12, 1, 10 };
				closure2[] = { "A3\sounds_f\weapons\closure\closure_rifle_3", db-12, 1, 10 };
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				
				begin1[] = { "PSC_Weapons\ServiceRifle\data\sounds\ServiceRifle_Shot1", db0, 1.5, 500 };
				begin2[] = { "PSC_Weapons\ServiceRifle\data\sounds\ServiceRifle_Shot2", db0, 1.5, 500 };
				begin3[] = { "PSC_Weapons\ServiceRifle\data\sounds\ServiceRifle_Shot3", db0, 1.5, 500 };
				
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };		
			};

			class SilencedSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				begin1[] = { "A3\sounds_f\weapons\silenced\silent-07", db-1, 1, 200 };
				begin2[] = { "A3\sounds_f\weapons\silenced\silent-08", db-1, 1, 200 };
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
			};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "PSC_Rifle_Base_Recoil";
			recoilProne = "PSC_Rifle_Base_Recoil";
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
		model = "PSC_Weapons\ServiceRifle\data\model\PSC_ServiceRifle.p3d";
		scope = 2;
		descriptionShort = "Gun Runner Produced .223 Rifle";
		picture = "\PSC_Weapons\ServiceRifle\Data\Icon\ServiceRifleWoodIcon_ca.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"\PSC_Weapons\ServiceRifle\data\ServiceRifle_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\PSC_Weapons\ServiceRifle\data\ServiceRifle.rvmat"
		};
	};
	class PSC_ServiceRifle_Polymer_W: PSC_ServiceRifle_Base_W
	{	
		displayName = "Service Rifle (Polymer)";
		scope = 2;
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\PSC_Weapons\ServiceRifle\data\polymer\ServiceRifle_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"\PSC_Weapons\ServiceRifle\data\polymer\ServiceRiflePolymer.rvmat"
		};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		PSC_GestureReloadServiceRifle = "PSC_GestureReloadServiceRifle";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;

		class NoActions : ManActions 
		{
			PSC_GestureReloadServiceRifle[] = { "PSC_GestureReloadServiceRifle", "Gesture" };
		};
	};	
};

class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class PSC_GestureReloadServiceRifle: Default 
		{
			file = "PSC_Weapons\ServiceRifle\data\animations\serviceriflereload.rtm";
			speed = .3;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKEnd = true;
			rightHandIKCurve[] = { 0, 1, (6/92), 0, (78/92), 0, (86/92), 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, (6/92), 0, (78/92), 0, (86/92), 1 };
		};
		class PSC_GestureReloadServiceRifle_Context: PSC_GestureReloadServiceRifle 
		{
			mask = "NIA_handsWeapon_context_Toadie";
		};
	};
	class BlendAnims // thank you niarms - bone context
	{
		NIA_handsWeapon_context_Toadie[] = { "head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.1,"Spine1",0.3,"Spine2",0.5,"Spine3",1 };
	};

};