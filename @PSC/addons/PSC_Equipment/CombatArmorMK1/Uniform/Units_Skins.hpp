//class PSC_ARMOR_0_01;
//class PSC_ARMOR_1_01;
//class PSC_ARMOR_2_01;
//class PSC_ARMOR_3_01;
//class PSC_ARMOR_4_01;
////
//class PSC_ARMOR_5_01;
//class PSC_ARMOR_6_01;

class psc_combat_armor_mk1_body: PSC_ARMOR_3_01
{
	faceType = Man_A3;
	scope=2; scopeCurator=2;
	side = 2;
    faction = CIV_F;
    author = "Project Scorched";
    vehicleClass = "Men";
    editorCategory="PSC_Armor_character";
    editorSubcategory="PSC_Armor_character_no_weapon";
	genericNames = "NATOMen";
	displayName = "Survivor";
    model = "\psc_equipment\CombatArmorMK1\Uniform\psc_combat_armor_mk1.p3d";
	uniformClass = "psc_combat_armor_mk1_uniform";
	//editorPreview = "\????\?????_GO.jpg";
    nakedUniform = "U_BasicBody";
	modelSides[]={0,1,2,3};
	

	hiddenSelections[]=
	{
		"camoUniform","insignia"
	};
	hiddenSelectionsTextures[]=
	{
		"#(argb,8,8,3)color(1,1,1,1.0,CO)"
	};


    weapons[] = {Throw, Put};
    respawnWeapons[] = {Throw, Put};
	linkedItems[] = {psc_combat_armor_mk1_helmet, psc_combat_armor_mk1_vest};
    respawnlinkedItems[] = {psc_combat_armor_mk1_helmet, psc_combat_armor_mk1_vest};
	backpack = "";
    magazines[] = {};
    respawnMagazines[] = {};
    Items[] = {};
    respawnItems[] = {};
};