class HeadgearItem: InventoryItem_Base_F
{
	allowedSlots[] = {BACKPACK_SLOT, HEADGEAR_SLOT}; /// defines where can be the cap placed, it is small enough to fit in backpack
	type = HEADGEAR_SLOT;		/// standard slot for the cap is on head
	hiddenSelections[] = {};	/// default caps don't have any changeable selections
	hitpointName = "HitHead";	/// what hitpoint is covered with the cap to have additional protection
};

class psc_combat_armor_mk1_helmet: ItemCore
{
	author = "Sterben_TOP";
	scope=2; scopeCurator=2; scopeArsenal=2;
	displayName="$STR_PSC_CombatArmor_MK1_H";
	//picture = "\???\??????_go.paa";
	model   = "\psc_equipment\CombatArmorMK1\Helmet\psc_combat_armor_mk1_helmet_GO.p3d";
	
	hiddenSelections[]=
	{
		"camoHelmet"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(1,1,1,1.0,CO)"
	};
	
	class ItemInfo: HeadgearItem
	{
		/////Medium armor
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 12.5;
				passThrough = 0.2;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 12.5;
				passThrough = 0.2;
			};
		};
		mass=5;
		uniformModel = "\psc_equipment\CombatArmorMK1\Helmet\psc_combat_armor_mk1_helmet.p3d";
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};
		modelSides[]={0,1,2,3};
	    hiddenSelections[]=
	    {
		    "Camo1"
	    };
	};
};