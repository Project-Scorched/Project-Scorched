class CfgPatches
{
    class PSC_Magazines
    {
        units[] = 
		{

		};
		weapons[] = 
		{
			
		};																								
		requiredAddons[] = 
		{ 						
			"A3_Weapons_F" // A3 Base Weapons Config
    	};
		addonRootClass = "PSC_Weapons"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Weapons.pbo"; // File name
    };
};

class CfgLights
{
	class PSC_LaserRed
	{
		color[]={1,0,0,1};
		ambient[]={1,0,0,0};
		dayLight = 1;
		diffuse[]={0.1,0,0};
		brightness=10;
		intensity=4000;
		drawLight=0;
		class Attenuation
		{
			start=0;
			constant=1;
			linear=0;
			quadratic=40;
		};
		position[]={0,0.2,0};
	};
};

class PSC_Laser_Red
{
	class PSC_Laser_Red_Eff
	{
		simulation="particles";
		type="PSC_LaserRed";
		position[]={0,0,0};
		intensity=0;
		interval=1;
		lifeTime=2;
	};
};

class CfgAmmo
{
	class BulletBase;
    class PSC_Bullet_Base: BulletBase
	{
		visibleFire = 3;
		audibleFire = 40;
		visibleFireTime = 2;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\A3\Weapons_f\ammo\shell";
		caliber = 1;
		cartridge = "FxCartridge_556";
		cost = 1;
		timeToLive = 6;
		deflecting = 15;
		tracerStartTime = -1;
		muzzleEffect = "";
		waterEffectOffset = 0.8;
		effectFly = "AmmoClassic";
		aiAmmoUsageFlags = "64 + 128 + 256";
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll",2.5118864,1,200};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactTyre[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",2.818383,1,100};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",2.818383,1,100};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",2.818383,1,100};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",2.818383,1,100};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",2.818383,1,100};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",2.818383,1,100};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",2.818383,1,100};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",2.818383,1,100};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01",2.818383,1,100};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02",2.818383,1,100};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03",2.818383,1,100};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04",2.818383,1,100};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05",2.818383,1,100};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06",2.818383,1,100};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07",2.818383,1,100};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08",2.818383,1,100};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",1.9952624,1,100};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02",1.9952624,1,100};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03",1.9952624,1,100};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04",1.9952624,1,100};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05",1.9952624,1,100};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06",1.9952624,1,100};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07",1.9952624,1,100};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08",1.9952624,1,100};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",1.7782794,1,100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",1.7782794,1,100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",1.7782794,1,100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",1.7782794,1,100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",1.7782794,1,100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",1.7782794,1,100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",1.7782794,1,100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",1.7782794,1,100};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01",2.2387211,1,100};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02",2.2387211,1,100};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03",2.2387211,1,100};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04",2.2387211,1,100};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05",2.2387211,1,100};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06",2.2387211,1,100};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07",2.2387211,1,100};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08",2.2387211,1,100};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01",2.2387211,1,100};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02",2.2387211,1,100};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03",2.2387211,1,100};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04",2.2387211,1,100};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05",2.2387211,1,100};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06",2.2387211,1,100};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07",2.2387211,1,100};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08",2.2387211,1,100};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01",2.2387211,1,100};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02",2.2387211,1,100};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03",2.2387211,1,100};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04",2.2387211,1,100};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05",2.2387211,1,100};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06",2.2387211,1,100};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07",2.2387211,1,100};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08",2.2387211,1,100};
		soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01",2.818383,1,100};
		soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02",2.818383,1,100};
		soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03",2.818383,1,100};
		soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04",2.818383,1,100};
		soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05",2.818383,1,100};
		soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06",2.818383,1,100};
		soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07",2.818383,1,100};
		soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08",2.818383,1,100};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",2.2387211,1,100};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",2.2387211,1,100};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",2.2387211,1,100};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",2.2387211,1,100};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",2.2387211,1,100};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",2.2387211,1,100};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",2.2387211,1,100};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",2.2387211,1,100};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01",2.2387211,1,100};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02",2.2387211,1,100};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03",2.2387211,1,100};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04",2.2387211,1,100};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05",2.2387211,1,100};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06",2.2387211,1,100};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07",2.2387211,1,100};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08",2.2387211,1,100};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01",1.0,1,100};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02",1.0,1,100};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03",1.0,1,100};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04",1.0,1,100};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05",1.0,1,100};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06",1.0,1,100};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07",1.0,1,100};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08",1.0,1,100};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01",1.4125376,1,100};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02",1.4125376,1,100};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03",1.4125376,1,100};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04",1.4125376,1,100};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05",1.4125376,1,100};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06",1.4125376,1,100};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07",1.4125376,1,100};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08",1.4125376,1,100};
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",1.9952624,1,100};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",1.9952624,1,100};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",1.9952624,1,100};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",1.9952624,1,100};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",1.9952624,1,100};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",1.9952624,1,100};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",1.9952624,1,100};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",1.9952624,1,100};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01",1.7782794,1,100};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02",1.7782794,1,100};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03",1.7782794,1,100};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04",1.7782794,1,100};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05",1.7782794,1,100};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06",1.7782794,1,100};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07",1.7782794,1,100};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08",1.7782794,1,100};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01",0.8912509,1,100};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02",0.8912509,1,100};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03",0.8912509,1,100};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04",0.8912509,1,100};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05",0.8912509,1,100};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06",0.8912509,1,100};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01",1.4125376,1,100};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02",1.4125376,1,100};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03",1.4125376,1,100};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04",1.4125376,1,100};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05",1.4125376,1,100};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06",1.4125376,1,100};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07",1.4125376,1,100};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08",1.4125376,1,100};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01",2.2387211,1,100};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02",2.2387211,1,100};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03",2.2387211,1,100};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04",2.2387211,1,100};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05",2.2387211,1,100};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06",2.2387211,1,100};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01",2.2387211,1,100};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02",2.2387211,1,100};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03",2.2387211,1,100};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04",2.2387211,1,100};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05",2.2387211,1,100};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06",2.2387211,1,100};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07",2.2387211,1,100};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08",2.2387211,1,100};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09",2.2387211,1,100};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10",2.2387211,1,100};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11",2.2387211,1,100};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12",2.2387211,1,100};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13",2.2387211,1,100};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14",2.2387211,1,100};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15",2.2387211,1,100};
		hitArmorInt[] = {"soundVehiclePlateInt1",0.066,"soundVehiclePlateInt2",0.066,"soundVehiclePlateInt3",0.066,"soundVehiclePlateInt4",0.066,"soundVehiclePlateInt5",0.066,"soundVehiclePlateInt6",0.066,"soundVehiclePlateInt7",0.066,"soundVehiclePlateInt8",0.066,"soundVehiclePlateInt9",0.066,"soundVehiclePlateInt10",0.066,"soundVehiclePlateInt11",0.066,"soundVehiclePlateInt12",0.066,"soundVehiclePlateInt13",0.066,"soundVehiclePlateInt14",0.066,"soundVehiclePlateInt15",0.066};
		hitMetalInt[] = {"soundMetalInt1",0.166,"soundMetalInt2",0.166,"soundMetalInt3",0.166,"soundMetalInt4",0.166,"soundMetalInt5",0.166,"soundMetalInt6",0.166};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.2,"soundHitBuilding2",0.2,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundTyre1",0.125,"soundTyre2",0.125,"soundTyre3",0.125,"soundTyre4",0.125,"soundTyre5",0.125,"soundTyre6",0.125,"soundTyre7",0.125,"soundTyre8",0.125};
		hitRubber[] = {"soundRubber1",0.125,"soundRubber2",0.125,"soundRubber3",0.125,"soundRubber4",0.125,"soundRubber5",0.125,"soundRubber6",0.125};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		soundBell1[] = {"A3\Sounds_F\ambient\objects\bell_small",1.4125376,1,500};
		hitBell[] = {"soundBell1",1.0};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",2.2387211,1,100};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",2.2387211,1,100};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",2.2387211,1,100};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",2.2387211,1,100};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",2.2387211,1,100};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",2.2387211,1,100};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",2.2387211,1,100};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",2.2387211,1,100};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",2.2387211,1,100};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",2.2387211,1,100};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",2.2387211,1,100};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.1622777,1,200};
		supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.1622777,1,200};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",3.1622777,1,200};
			class SCrackForest
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "trees";
			};
			class SCrackMeadow
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "meadow max sea";
			};
			class SCrackHouses
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "houses max interior";
			};
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
		class CamShakeExplode
		{
			power = 1.73205;
			duration = 0.4;
			frequency = 20;
			distance = 5.19615;
		};
		class CamShakeHit
		{
			power = 3;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class PSC_Laser_Base: BulletBase
	{
		visibleFire = 3;
		audibleFire = 40;
		visibleFireTime = 2;
		dangerRadiusBulletClose = 4;
		dangerRadiusHit = -1;
		suppressionRadiusBulletClose = 2;
		suppressionRadiusHit = 4;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "PSC_Weapons\ammunition\models\laser.p3d";
		caliber = 1;
		brightness= 1000;
		cartridge = "FxCartridge_556";
		coefgravity=0;
		cost = 1;
		timeToLive = 1;
		deflecting = 0;
		tracerStartTime = -1;
		muzzleEffect = "";
		waterEffectOffset = 0.8;
		//flaresize=5;
		//effectflare="FlareShell";
		effectFly = "PSC_Laser_Red";
		aiAmmoUsageFlags = "64 + 128 + 256";
		soundImpactDefault1[] = {"A3\Sounds_F\weapons\Grenades\Grenade_Roll",2.5118864,1,200};
		impactGroundSoft[] = {"soundImpactDefault1",1};
		impactGroundHard[] = {"soundImpactDefault1",1};
		impactMan[] = {"soundImpactDefault1",1};
		impactIron[] = {"soundImpactDefault1",1};
		impactArmor[] = {"soundImpactDefault1",1};
		impactBuilding[] = {"soundImpactDefault1",1};
		impactFoliage[] = {"soundImpactDefault1",1};
		impactWood[] = {"soundImpactDefault1",1};
		impactGlass[] = {"soundImpactDefault1",1};
		impactGlassArmored[] = {"soundImpactDefault1",1};
		impactConcrete[] = {"soundImpactDefault1",1};
		impactTyre[] = {"soundImpactDefault1",1};
		impactRubber[] = {"soundImpactDefault1",1};
		impactPlastic[] = {"soundImpactDefault1",1};
		impactDefault[] = {"soundImpactDefault1",1};
		impactMetal[] = {"soundImpactDefault1",1};
		impactMetalplate[] = {"soundImpactDefault1",1};
		impactWater[] = {"soundImpactDefault1",1};
		soundDefault1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",2.818383,1,100};
		soundDefault2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",2.818383,1,100};
		soundDefault3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",2.818383,1,100};
		soundDefault4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",2.818383,1,100};
		soundDefault5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",2.818383,1,100};
		soundDefault6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",2.818383,1,100};
		soundDefault7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",2.818383,1,100};
		soundDefault8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",2.818383,1,100};
		soundGroundSoft1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_01",2.818383,1,100};
		soundGroundSoft2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_02",2.818383,1,100};
		soundGroundSoft3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_03",2.818383,1,100};
		soundGroundSoft4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_04",2.818383,1,100};
		soundGroundSoft5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_05",2.818383,1,100};
		soundGroundSoft6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_06",2.818383,1,100};
		soundGroundSoft7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_07",2.818383,1,100};
		soundGroundSoft8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\soft_ground_08",2.818383,1,100};
		soundGroundHard1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_01",1.9952624,1,100};
		soundGroundHard2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_02",1.9952624,1,100};
		soundGroundHard3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_03",1.9952624,1,100};
		soundGroundHard4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_04",1.9952624,1,100};
		soundGroundHard5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_05",1.9952624,1,100};
		soundGroundHard6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_06",1.9952624,1,100};
		soundGroundHard7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_07",1.9952624,1,100};
		soundGroundHard8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\hard_ground_08",1.9952624,1,100};
		soundGlass1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_01",1.7782794,1,100};
		soundGlass2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_02",1.7782794,1,100};
		soundGlass3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_03",1.7782794,1,100};
		soundGlass4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_04",1.7782794,1,100};
		soundGlass5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_05",1.7782794,1,100};
		soundGlass6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_06",1.7782794,1,100};
		soundGlass7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_07",1.7782794,1,100};
		soundGlass8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_08",1.7782794,1,100};
		soundGlassArmored1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_01",2.2387211,1,100};
		soundGlassArmored2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_02",2.2387211,1,100};
		soundGlassArmored3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_03",2.2387211,1,100};
		soundGlassArmored4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_04",2.2387211,1,100};
		soundGlassArmored5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_05",2.2387211,1,100};
		soundGlassArmored6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_06",2.2387211,1,100};
		soundGlassArmored7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_07",2.2387211,1,100};
		soundGlassArmored8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\glass_arm_08",2.2387211,1,100};
		soundMetal1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_01",2.2387211,1,100};
		soundMetal2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_02",2.2387211,1,100};
		soundMetal3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_03",2.2387211,1,100};
		soundMetal4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_04",2.2387211,1,100};
		soundMetal5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_05",2.2387211,1,100};
		soundMetal6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_06",2.2387211,1,100};
		soundMetal7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_07",2.2387211,1,100};
		soundMetal8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_08",2.2387211,1,100};
		soundVehiclePlate1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_01",2.2387211,1,100};
		soundVehiclePlate2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_02",2.2387211,1,100};
		soundVehiclePlate3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_03",2.2387211,1,100};
		soundVehiclePlate4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_04",2.2387211,1,100};
		soundVehiclePlate5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_05",2.2387211,1,100};
		soundVehiclePlate6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_06",2.2387211,1,100};
		soundVehiclePlate7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_07",2.2387211,1,100};
		soundVehiclePlate8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\metal_plate_08",2.2387211,1,100};
		soundWood1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_01",2.818383,1,100};
		soundWood2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_02",2.818383,1,100};
		soundWood3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_03",2.818383,1,100};
		soundWood4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_04",2.818383,1,100};
		soundWood5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_05",2.818383,1,100};
		soundWood6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_06",2.818383,1,100};
		soundWood7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_07",2.818383,1,100};
		soundWood8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\wood_08",2.818383,1,100};
		soundHitBody1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_01",2.2387211,1,100};
		soundHitBody2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_02",2.2387211,1,100};
		soundHitBody3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_03",2.2387211,1,100};
		soundHitBody4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_04",2.2387211,1,100};
		soundHitBody5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_05",2.2387211,1,100};
		soundHitBody6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_06",2.2387211,1,100};
		soundHitBody7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_07",2.2387211,1,100};
		soundHitBody8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\body_08",2.2387211,1,100};
		soundHitBuilding1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_01",2.2387211,1,100};
		soundHitBuilding2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_02",2.2387211,1,100};
		soundHitBuilding3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_03",2.2387211,1,100};
		soundHitBuilding4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_04",2.2387211,1,100};
		soundHitBuilding5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_05",2.2387211,1,100};
		soundHitBuilding6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_06",2.2387211,1,100};
		soundHitBuilding7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_07",2.2387211,1,100};
		soundHitBuilding8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\building_08",2.2387211,1,100};
		soundHitFoliage1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_01",1.0,1,100};
		soundHitFoliage2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_02",1.0,1,100};
		soundHitFoliage3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_03",1.0,1,100};
		soundHitFoliage4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_04",1.0,1,100};
		soundHitFoliage5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_05",1.0,1,100};
		soundHitFoliage6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_06",1.0,1,100};
		soundHitFoliage7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_07",1.0,1,100};
		soundHitFoliage8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\foliage_08",1.0,1,100};
		soundPlastic1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_01",1.4125376,1,100};
		soundPlastic2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_02",1.4125376,1,100};
		soundPlastic3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_03",1.4125376,1,100};
		soundPlastic4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_04",1.4125376,1,100};
		soundPlastic5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_05",1.4125376,1,100};
		soundPlastic6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_06",1.4125376,1,100};
		soundPlastic7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_07",1.4125376,1,100};
		soundPlastic8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\plastic_08",1.4125376,1,100};
		soundConcrete1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_01",1.9952624,1,100};
		soundConcrete2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_02",1.9952624,1,100};
		soundConcrete3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_03",1.9952624,1,100};
		soundConcrete4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_04",1.9952624,1,100};
		soundConcrete5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_05",1.9952624,1,100};
		soundConcrete6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_06",1.9952624,1,100};
		soundConcrete7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_07",1.9952624,1,100};
		soundConcrete8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\concrete_08",1.9952624,1,100};
		soundTyre1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_01",1.7782794,1,100};
		soundTyre2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_02",1.7782794,1,100};
		soundTyre3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_03",1.7782794,1,100};
		soundTyre4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_04",1.7782794,1,100};
		soundTyre5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_05",1.7782794,1,100};
		soundTyre6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_06",1.7782794,1,100};
		soundTyre7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_07",1.7782794,1,100};
		soundTyre8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\tyre_08",1.7782794,1,100};
		soundRubber1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_01",0.8912509,1,100};
		soundRubber2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_02",0.8912509,1,100};
		soundRubber3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_03",0.8912509,1,100};
		soundRubber4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_04",0.8912509,1,100};
		soundRubber5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_05",0.8912509,1,100};
		soundRubber6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\rubber_06",0.8912509,1,100};
		soundWater1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_01",1.4125376,1,100};
		soundWater2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_02",1.4125376,1,100};
		soundWater3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_03",1.4125376,1,100};
		soundWater4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_04",1.4125376,1,100};
		soundWater5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_05",1.4125376,1,100};
		soundWater6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_06",1.4125376,1,100};
		soundWater7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_07",1.4125376,1,100};
		soundWater8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hits\water_08",1.4125376,1,100};
		soundMetalInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_01",2.2387211,1,100};
		soundMetalInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_02",2.2387211,1,100};
		soundMetalInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_03",2.2387211,1,100};
		soundMetalInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_04",2.2387211,1,100};
		soundMetalInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_05",2.2387211,1,100};
		soundMetalInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_06",2.2387211,1,100};
		soundVehiclePlateInt1[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_01",2.2387211,1,100};
		soundVehiclePlateInt2[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_02",2.2387211,1,100};
		soundVehiclePlateInt3[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_03",2.2387211,1,100};
		soundVehiclePlateInt4[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_04",2.2387211,1,100};
		soundVehiclePlateInt5[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_05",2.2387211,1,100};
		soundVehiclePlateInt6[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_06",2.2387211,1,100};
		soundVehiclePlateInt7[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_07",2.2387211,1,100};
		soundVehiclePlateInt8[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_08",2.2387211,1,100};
		soundVehiclePlateInt9[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_09",2.2387211,1,100};
		soundVehiclePlateInt10[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_10",2.2387211,1,100};
		soundVehiclePlateInt11[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_11",2.2387211,1,100};
		soundVehiclePlateInt12[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_12",2.2387211,1,100};
		soundVehiclePlateInt13[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_13",2.2387211,1,100};
		soundVehiclePlateInt14[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_14",2.2387211,1,100};
		soundVehiclePlateInt15[] = {"A3\Sounds_F\arsenal\sfx\bullet_hitsInt\metal_plate_15",2.2387211,1,100};
		hitArmorInt[] = {"soundVehiclePlateInt1",0.066,"soundVehiclePlateInt2",0.066,"soundVehiclePlateInt3",0.066,"soundVehiclePlateInt4",0.066,"soundVehiclePlateInt5",0.066,"soundVehiclePlateInt6",0.066,"soundVehiclePlateInt7",0.066,"soundVehiclePlateInt8",0.066,"soundVehiclePlateInt9",0.066,"soundVehiclePlateInt10",0.066,"soundVehiclePlateInt11",0.066,"soundVehiclePlateInt12",0.066,"soundVehiclePlateInt13",0.066,"soundVehiclePlateInt14",0.066,"soundVehiclePlateInt15",0.066};
		hitMetalInt[] = {"soundMetalInt1",0.166,"soundMetalInt2",0.166,"soundMetalInt3",0.166,"soundMetalInt4",0.166,"soundMetalInt5",0.166,"soundMetalInt6",0.166};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.125,"soundHitBody2",0.125,"soundHitBody3",0.125,"soundHitBody4",0.125,"soundHitBody5",0.125,"soundHitBody6",0.125,"soundHitBody7",0.125,"soundHitBody8",0.125};
		hitArmor[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitBuilding[] = {"soundHitBuilding1",0.2,"soundHitBuilding2",0.2,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.125,"soundHitFoliage2",0.125,"soundHitFoliage3",0.125,"soundHitFoliage4",0.125,"soundHitFoliage5",0.125,"soundHitFoliage6",0.125,"soundHitFoliage7",0.125,"soundHitFoliage8",0.125};
		hitWood[] = {"soundWood1",0.125,"soundWood2",0.125,"soundWood3",0.125,"soundWood4",0.125,"soundWood5",0.125,"soundWood6",0.125,"soundWood7",0.125,"soundWood8",0.125};
		hitGlass[] = {"soundGlass1",0.125,"soundGlass2",0.125,"soundGlass3",0.125,"soundGlass4",0.125,"soundGlass5",0.125,"soundGlass6",0.125,"soundGlass7",0.125,"soundGlass8",0.125};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundTyre1",0.125,"soundTyre2",0.125,"soundTyre3",0.125,"soundTyre4",0.125,"soundTyre5",0.125,"soundTyre6",0.125,"soundTyre7",0.125,"soundTyre8",0.125};
		hitRubber[] = {"soundRubber1",0.125,"soundRubber2",0.125,"soundRubber3",0.125,"soundRubber4",0.125,"soundRubber5",0.125,"soundRubber6",0.125};
		hitPlastic[] = {"soundPlastic1",0.125,"soundPlastic2",0.125,"soundPlastic3",0.125,"soundPlastic4",0.125,"soundPlastic5",0.125,"soundPlastic6",0.125,"soundPlastic7",0.125,"soundPlastic8",0.125};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.125,"soundMetal2",0.125,"soundMetal3",0.125,"soundMetal4",0.125,"soundMetal5",0.125,"soundMetal6",0.125,"soundMetal7",0.125,"soundMetal8",0.125};
		hitMetalplate[] = {"soundVehiclePlate1",0.125,"soundVehiclePlate2",0.125,"soundVehiclePlate3",0.125,"soundVehiclePlate4",0.125,"soundVehiclePlate5",0.125,"soundVehiclePlate6",0.125,"soundVehiclePlate7",0.125,"soundVehiclePlate8",0.125};
		hitWater[] = {"soundWater1",0.125,"soundWater2",0.125,"soundWater3",0.125,"soundWater4",0.125,"soundWater5",0.125,"soundWater6",0.125,"soundWater7",0.125,"soundWater8",0.125};
		soundBell1[] = {"A3\Sounds_F\ambient\objects\bell_small",1.4125376,1,500};
		hitBell[] = {"soundBell1",1.0};
		bulletFly1[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby01",2.2387211,1,100};
		bulletFly2[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby02",2.2387211,1,100};
		bulletFly3[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby03",2.2387211,1,100};
		bulletFly4[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby04",2.2387211,1,100};
		bulletFly5[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby05",2.2387211,1,100};
		bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",2.2387211,1,100};
		bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",2.2387211,1,100};
		bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",2.2387211,1,100};
		bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",2.2387211,1,100};
		bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",2.2387211,1,100};
		bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",2.2387211,1,100};
		bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.083,"bulletFly2",0.083,"bulletFly3",0.083,"bulletFly4",0.083,"bulletFly5",0.083,"bulletFly6",0.083,"bulletFly7",0.083,"bulletFly8",0.083,"bulletFly9",0.083,"bulletFly10",0.083,"bulletFly11",0.083,"bulletFly12",0.083};
		supersonicCrackNear[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_close",3.1622777,1,200};
		supersonicCrackFar[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\scrack_middle",3.1622777,1,200};
		class SuperSonicCrack
		{
			superSonicCrack[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",3.1622777,1,200};
			class SCrackForest
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_forest3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "forest";
			};
			class SCrackTrees
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_trees3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "trees";
			};
			class SCrackMeadow
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_meadow3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "meadow max sea";
			};
			class SCrackHouses
			{
				range[] = {0,500};
				sound1[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses1",1.0,1,500};
				sound2[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses2",1.0,1,500};
				sound3[] = {"A3\sounds_f\arsenal\sfx\supersonic_crack\sc_houses3",1.0,1,500};
				sounds[] = {"sound1",0.333,"sound2",0.333,"sound3",0.333};
				frequency = "((speed factor [330, 930]) * 0.1) + 1.05";
				trigger = "houses max interior";
			};
		};
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitHay = "ImpactHay";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
		class CamShakeExplode
		{
			power = 1.73205;
			duration = 0.4;
			frequency = 20;
			distance = 5.19615;
		};
		class CamShakeHit
		{
			power = 3;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class PSC_Bullet_556: PSC_Bullet_Base
	{
		airLock = 1;
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 920;
		airFriction = -0.0012;
		waterFriction = -0.3;
		caliber = 0.869565;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		audibleFire = 35;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
	};
	class PSC_Bullet_556_FMJ: PSC_Bullet_556
	{

	};
	class PSC_Bullet_556_AP: PSC_Bullet_556
	{

	};
	class PSC_Bullet_556_Match: PSC_Bullet_556
	{

	};
	class PSC_Bullet_556_Surplus: PSC_Bullet_556
	{

	};
	class PSC_Laser_556: PSC_Laser_Base
	{
		airLock = 1;
		hit = 9;
		indirectHit = 0;
		model = "PSC_Weapons\ammunition\models\laser.p3d";
		indirectHitRange = 0;
		cost = 1;
		typicalSpeed = 50000;
		airFriction = 0;
		waterFriction = 0;
		caliber = 0.869565;
		tracerScale = 1;
		tracerStartTime = 0;
		tracerEndTime = 2;
		audibleFire = 35;
		initTime=0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		aiAmmoUsageFlags = 64;
	};
	
};
class CfgMagazines
{
	class CA_Magazine;
	class PSC_FusionCellCore_M: CA_Magazine
	{
		//picture="";
        author="Queen";
		scope=0;
		displayName="Fusion Cell (Dev)";
		ammo="PSC_Laser_Base";
		//model = "PSC_Weapons\ammunition\models\FusionCell.p3d";
		count=30;
        mass=10;
		initspeed=50000;
		tracersEvery=1;
		lastRoundsTracer=50;
		descriptionShort="Standard Fusion Cell";
	};
	class PSC_556_Core_ServiceRifle_M: CA_Magazine
	{
		//picture="";
        author="#STR_PSC_Author";
		scope=0;
		displayName="Service Rifle Mag (5.56) (Dev)";
		ammo="PSC_Laser_Base";
		model = "PSC_Weapons\ammunition\models\ServiceRifleMagazine.p3d";
		count=20;
        mass = 10;
		initspeed=920;
		tracersEvery=0;
		descriptionShort="20rnd Mag 5.56";
	};
	class PSC_556_ServiceRifle_M: PSC_556_Core_ServiceRifle_M
	{
		author = "$STR_PSC_Author";
		scope = 2;
		displayName = "STR_PSC_556_ServiceRifle_M";
		count = 20;
		mass = 10;
	};


	class PSC_FusionCell_M: PSC_FusionCellCore_M
	{
		author = "$STR_PSC_Author";
		displayName = "Fusion Cell";
		ammo = "PSC_Laser_556";
		scope = 2;
		count = 50;
	};
};