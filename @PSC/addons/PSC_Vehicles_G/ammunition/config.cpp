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

class cfgMagazines {
	class 40Rnd_105mm_APFSDS_T_Red;
	class PSC_12Rnd_105mm_APFSDS_Red: 40Rnd_105mm_APFSDS_T_Red {
		displayname = "12Rnd 100mm APFSDS";
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
};
