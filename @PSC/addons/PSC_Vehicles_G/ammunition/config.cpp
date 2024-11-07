class CfgPatches 
{
    class PSC_Vehicle_Ground_Ammunition
    {
        
    }
}

class cfgMagazines {
	class 40Rnd_105mm_APFSDS_T_Red;
	class 15thNCR_12Rnd_105mm_APFSDS_Red: 40Rnd_105mm_APFSDS_T_Red {
		displayname = "12Rnd 100mm APFSDS";
		count = 12;
	};
	class 20Rnd_105mm_HEAT_MP_T_Red;
	class 15thNCR_12Rnd_105mm_HEAT_Red: 20Rnd_105mm_HEAT_MP_T_Red {
		displayname = "12Rnd 100mm HEAT-MP";
		count = 12;
	};
	class 12Rnd_125mm_HE_T_Red;
	class 15thNCR_16Rnd_105mm_HE_Red: 12Rnd_125mm_HE_T_Red {
		displayname = "16Rnd 100mm HE";
		count = 16;
		initSpeed = 1100;
	};
};
