class CfgPatches
{
    class PSC_Wattz
    {
        requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {
			"PSC_Wattz_W",
        };
        units[] =
        {

        };
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Weapons"; // Subconfigs
    };
};

class CfgSoundShaders
{
	class PSC_Soundshader_Wattz_Near
	{
		volume = 1;
		frequency = 1;
		range = 50;
		rangeCurve = "closeShotCurve";
		samples[] = {{"PSC_Weapons\Wattz\data\sounds\Wattz_Shot_Close_1.wss",1},{"PSC_Weapons\Wattz\data\sounds\Wattz_Shot_Close_2.wss",1},{"PSC_Weapons\Wattz\data\sounds\Wattz_Shot_Close_3.wss",1}};
	};

	class PSC_Soundshader_Wattz_Mid : PSC_Soundshader_Wattz_Near
	{
		rangeCurve[] = {{0,0.2},{50,1},{300,0},{1800,0}};
		range = 1800;
		volume = 1;
		samples[] = {{"PSC_Weapons\Wattz\data\sounds\Wattz_Shot_Mid_1.wss",1},{"PSC_Weapons\Wattz\data\sounds\Wattz_Shot_Mid_2.wss",1},{"PSC_Weapons\Wattz\data\sounds\Wattz_Shot_Mid_3.wss",1}};
	};

	class PSC_Soundshader_Wattz_Far : PSC_Soundshader_Wattz_Near
	{
		range = 1800;
		rangeCurve[] = {{0,0},{50,0},{300,1},{1800,1}};
		volume = 0.8;
	};
};

class CfgSoundSets
{
	class SPAR01_Shot_SoundSet;

	class PSC_Soundset_Wattz_Shot : SPAR01_Shot_SoundSet
	{
		soundShaders[] = {"SPAR01_Closure_SoundShader","PSC_Soundshader_Wattz_Near","PSC_Soundshader_Wattz_Mid","PSC_Soundshader_Wattz_Far"};
		volumeFactor = 3.5;
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
    class PSC_Rifle_Base_W; //From PSC_Service_Rifle
    class PSC_Wattz_W: PSC_Rifle_Base_W
    {
		
        author =  "$STR_PSC_Author";
		displayName = "Rifle Base";
		scope = 0;
		hiddenSelections[] = 
		{
			"camo"
		};
		magazines[] = 
		{
			"PSC_FusionCell_M"
		};
		magazineWell[] =
		{
			"PSC_Wattz_MW"
		};
        magazineReloadSwitchPhase = 0.4;
        reloadAction = "PSC_GestureReloadWattz";
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
				compatibleItems[] = {}; // moved to each weapon
			};
			//allowedSlots[] = { 901 }; // you simply cannot put this into your pants
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "";
        handAnim[] = {"OFP2_ManSkeleton","PSC_Weapons\Wattz\data\animations\WattzHandAnim.rtm"};
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
		modes[] = {"Single","FullAuto"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.25118864,1,5};
		//cartridgePos = "Nabojnicestart";
		//cartridgeVel = "Nabojnicesend";
		muzzleEnd="konec hlavne";
		muzzlePos = "usti hlavne";
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"PSC_Soundset_Wattz_Shot","SPAR01_tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};

			class SilencedSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = {"SPAR02_silencerInteriorTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
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
			class BaseSoundModeType
			{
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {};
				weaponSoundEffect = "";
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"PSC_Soundset_Wattz_Shot","SPAR01_tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};

			class SilencedSound : BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = {"SPAR02_silencerInteriorTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
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
	class PSC_Wattz_Base_W: PSC_Wattz_W
	{
		displayName = "$STR_PSC_Wattz_W";
		model = "PSC_Weapons\Wattz\PSC_Wattz.p3d";
		scope = 2;
		descriptionShort = "Fusion Powered Laser Rifle";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"PSC_Weapons\Wattz\data\Wattz_ca.paa" // To Be Replaced By Wattz
		};
		hiddenSelectionsMaterials[] = 
		{
			"PSC_Weapons\Wattz\data\Wattz.rvmat" // To Be Replaced By Wattz
		};
	};

};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		PSC_GestureReloadWattz = "PSC_GestureReloadWattz";
	};
	class Actions
	{
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;

		class NoActions : ManActions 
		{
			PSC_GestureReloadWattz[] = { "PSC_GestureReloadWattz", "Gesture" };
		};
	};	
};

class CfgGesturesMale
{
	class Default;
	class GestureReloadBase;
	class States
	{
		class PSC_GestureReloadWattz: Default 
		{
			file = "PSC_Weapons\Wattz\data\animations\Wattzreload.rtm";
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
		class PSC_GestureReloadWattz_Context: PSC_GestureReloadWattz {
			mask = "NIA_handsWeapon_context_Toadie";
		};
	};
	class BlendAnims // thank you niarms - bone context
	{
		NIA_handsWeapon_context_Toadie[] = { "head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.1,"Spine1",0.3,"Spine2",0.5,"Spine3",1 };
	};

};