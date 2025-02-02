class CfgPatches 
{
    class PSC_Vehicle_Ground_Ammunition
    {
        author = "Luca + Queen"; //luca did 90% of the work, I'm just fixing / editing his stuff
		requiredaddons[] = 
		{
			"A3_Soft_F",
			"A3_Armor_F",
			"A3_Characters_F"
		};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {};
		magazines[] = 
		{
			"PSC_12Rnd_105mm_APFSDS_Red",
			"PSC_12Rnd_105mm_HEAT_Red",
			"PSC_16Rnd_105mm_HE_Red"
		};
		addonRootClass = "PSC_Vehicles";
    };
};

class CfgAmmo
{

	class BulletBase;
	class PSC_10mm_Vehicle_Ammo: BulletBase
	{
		hit = 20;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "";
		aiAmmoUsageFlags = 64;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 920;
		caliber = 3;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 1.0;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		airFriction = -0.0009;
		class CamShakeExplode
		{
			power = 2.44949;
			duration = 0.4;
			frequency = 20;
			distance = 7.34847;
		};
		class CamShakeHit
		{
			power = 6;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
};

class CfgMagazines {
	class 40Rnd_105mm_APFSDS_T_Red;
	class PSC_12Rnd_105mm_APFSDS_Red: 40Rnd_105mm_APFSDS_T_Red {
		displayname = "12Rnd 100mm APFSDS";
		indirectHit = 10;
		count = 12;
	};
	class 20Rnd_105mm_HEAT_MP_T_Red;
	class PSC_12Rnd_105mm_HEAT_Red: 20Rnd_105mm_HEAT_MP_T_Red {
		displayname = "12Rnd 100mm HEAT-MP";
		count = 12;
	};
	class 12Rnd_125mm_HE_T_Red;
	class PSC_16Rnd_105mm_HE_Red: 12Rnd_125mm_HE_T_Red {
		displayname = "16Rnd 100mm HE";
		count = 16;
		initSpeed = 1100;
	};


	class 200Rnd_65x39_Belt;
	class PSC_10mm_1000rnd_Belt: 200Rnd_65x39_Belt
	{
		author = "10mm Belt";
		scope = 2;
		count = 200;
		ammo = "PSC_10mm_Vehicle_Ammo";
		initSpeed = 825;
		maxLeadSpeed = 36.1111;
		tracersEvery = 5;
		nameSound = "mgun";
		displayName = "1000rnd 10mm Belt";
		descriptionShort = "";
	};
};
