////////// Масса //// 20-15-10-5 ////
////////// Вес пер. //// 180-120-80-40 ////
//class PSC_ARMOR_0_01;
//class PSC_ARMOR_1_01;
//class PSC_ARMOR_2_01;

//class PSC_ARMOR_3_01;
//class PSC_ARMOR_4_01;
////
//class PSC_ARMOR_5_01;
//class PSC_ARMOR_6_01;

class UniformItem: InventoryItem_Base_F
{
	type = UNIFORM_SLOT;
};

class psc_combat_armor_mk1_uniform: Itemcore
{
    scope=2; scopeArsenal=2;
	allowedSlots[] = {BACKPACK_SLOT};
    displayName = "$STR_PSC_CombatArmor_MK1_U";
	descriptionShort="Armor level: 3";
	//picture = "\????\???_go.paa";
    model = "\psc_equipment\CombatArmorMK1\Uniform\psc_combat_armor_mk1_GO.p3d";
    author = "Project Scorched";

	hiddenSelections[]=
	{
		"camoUniform"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(1,1,1,1.0,CO)"
	};

    class ItemInfo: UniformItem
	{
        uniformModel = "-";
        uniformClass = "psc_combat_armor_mk1_body";
        containerClass = "Supply120";
        mass = 10;
	    hiddenSelections[]=
	    {
			"camoUniform"
	    };
    };
};