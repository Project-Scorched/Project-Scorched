class VestItem: InventoryItem_Base_F
{
	type = VEST_SLOT;			/// vests fit into vest slot
	hiddenSelections[] = {};	/// no changeable selections by default
	armor = 5*0;				/// what protection does the vest provide
	passThrough = 1;			/// coef of damage passed to total damage
	hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
};
class V_PlateCarrierSpec_rgr;
class psc_combat_armor_mk1_vest: V_PlateCarrierSpec_rgr
{
	author = "Sterben_TOP";
	scope=2;
	displayName="$STR_PSC_CombatArmor_MK1_V";
	//picture="\?????\????_GO.paa";
	model="\psc_equipment\CombatArmorMK1\Vest\psc_combat_armor_mk1_vest_GO.p3d";
	//descriptionShort="???";
	
	hiddenSelections[]=
	{
		"camoVest","insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(1,1,1,1.0,CO)"
	};
	
	class ItemInfo: VestItem
	{
		uniformModel="\psc_equipment\CombatArmorMK1\Vest\psc_combat_armor_mk1_vest.p3d";
		containerClass="Supply240";
		mass=40;
		
		////
	    hiddenSelections[]=
	    {
			"camoVest","insignia"
	    };
		////
		
		//LOW Armor
		class HitpointsProtectionInfo
		{
			class Chest
			{
				hitpointName="HitChest";
				armor=8;
				passThrough=0.5;
			};
			class Diaphragm
			{
				hitpointName="HitDiaphragm";
				armor=8;
				passThrough=0.5;
			};
			class Abdomen
			{
				hitpointName="HitAbdomen";
				armor=8;
				passThrough=0.5;
			};
			class Body
			{
				hitpointName="HitBody";
				passThrough=0.5;
			};
		};
	};
};