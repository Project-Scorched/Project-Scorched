class DefaultEventhandlers;
class UniformSlotInfo;

class cfgVehicles
{	
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase
	{
		threat[] = {1, 0.1, 0.1};
	};

	class PSC_ARMOR_0_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_0_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor               = 1;
			material            = -1;
			name                = "face_hub";
			passThrough         = 0.1;
			radius              = 0.08;
			explosionShielding  = 0.1;
			minimalHit          = 0.01;
		};
		class HitNeck: HitFace
		{
			armor				= 1;
			material			= -1;
			name				= "neck";
			passThrough			= 0.1;
			radius				= 0.1;
			explosionShielding	= 0.5;
			minimalHit			= 0.01;
		};
		class HitHead: HitNeck
		{
			armor				= 1;
			material			= -1;
			name				= "head";
			passThrough			= 0.1;
			radius				= 0.2;
			explosionShielding	= 0.5;
			minimalHit			= 0.01;
			depends				= "HitFace max HitNeck";
		};
		class HitPelvis
		{
			armor				= 1;
			material			= -1;
			name				= "pelvis";
			passThrough			= 0.1;
			radius				= 0.2;
			explosionShielding	= 1;
			//visual			= "injury_body";
			minimalHit			= 0.01;
		};
		class HitAbdomen: HitPelvis
		{
			armor				= 1;
			material			= -1;
			name				= "spine1";
			passThrough			= 0.1;
			radius				= 0.15;
			explosionShielding	= 1;
			//visual			= "injury_body";
			minimalHit			= 0.01;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor				= 1;
			material			= -1;
			name				= "spine2";
			passThrough			= 0.1;
			radius				= 0.15;
			explosionShielding  = 6;
			//visual			= "injury_body";
			minimalHit			= 0.01;
		};
		class HitChest: HitDiaphragm
		{
			armor				= 1;
			material			= -1;
			name				= "spine3";
			passThrough			= 0.1;
			radius				= 0.15;
			explosionShielding	= 6;
			//visual			= "injury_body";
			minimalHit			= 0.01;
		};
		class HitBody: HitChest
		{
			armor				= 1000;
			material			= -1;
			name				= "body";
			passThrough			= 0.1;
			radius				= 0.16;
			explosionShielding	= 6;
			//visual			= "injury_body";
			minimalHit			= 0.01;
			depends				= "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; // depends work only for hit points defined in inheritance chain
		};
		class HitArms
		{
			armor				= 1;
			material			= -1;
			name				= "arms";
			passThrough			= 1;
			radius				= 0.1;
			explosionShielding	= 1;
			visual			= "injury_hands";
			minimalHit			= 0.01;
		};
		class HitHands: HitArms
		{
			armor				= 1;
			material			= -1;
			name				= "hands";
			passThrough			= 1;
			radius				= 0.1;
			explosionShielding  = 1;
			visual			= "injury_hands";
			minimalHit			= 0.01;
			depends				= "HitArms";
		};
		class HitLegs
		{
			armor				= 1;
			material			= -1;
			name				= "legs";
			passThrough			= 1;
			radius				= 0.12;
			explosionShielding  = 1;
			//visual            = "injury_legs";
			minimalHit			= 0.01;
		};
	};

	armor					= 2;
	armorStructural			= 0.4;
	explosionShielding		= 0.04;
	minTotalDamageThreshold	= 0.001;
	impactDamageMultiplier	= 0.5;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };

	class PSC_ARMOR_1_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_1_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=4;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=6;
			material=-1;
			name="pelvis";
			passThrough=0.33000001;
			radius=0.23999999;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="0";
		};
		class HitAbdomen: HitPelvis
		{
			armor=6;
			material=-1;
			name="spine1";
			passThrough=0.33000001;
			radius=0.16;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=6;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=6;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=6;
			material=-1;
			name="arms";
			passThrough=0.89999998;
			radius=0.1;
			explosionShielding=0.30000001;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="0";
		};
		class HitHands: HitArms
		{
			armor=6;
			material=-1;
			name="hands";
			passThrough=0.89999998;
			radius=0.1;
			explosionShielding=0.30000001;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=6;
			material=-1;
			name="legs";
			passThrough=0.89999998;
			radius=0.14;
			explosionShielding=0.30000001;
			//visual="injury_legs";
			minimalHit=0.0099999998;
			depends="0";
		};
		class Incapacitated: HitLegs
		{
			armor=1000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			//visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };

	class PSC_ARMOR_2_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_2_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=8;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=12;
			material=-1;
			name="pelvis";
			passThrough=0.33000001;
			radius=0.23999999;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=12;
			material=-1;
			name="spine1";
			passThrough=0.33000001;
			radius=0.16;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=12;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=12;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1250;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=12;
			material=-1;
			name="arms";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitHands: HitArms
		{
			armor=12;
			material=-1;
			name="hands";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=12;
			material=-1;
			name="legs";
			passThrough=0.69999999;
			radius=0.14;
			explosionShielding=0.1;
			//visual="injury_legs";
			minimalHit=0.0099999998;
			depends="";
		};
		class Incapacitated: HitLegs
		{
			armor=1250;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			//visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };

	class PSC_ARMOR_3_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_3_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=12;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=18;
			material=-1;
			name="pelvis";
			passThrough=0.33000001;
			radius=0.23999999;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=18;
			material=-1;
			name="spine1";
			passThrough=0.33000001;
			radius=0.16;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=18;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=18;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1500;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=18;
			material=-1;
			name="arms";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitHands: HitArms
		{
			armor=18;
			material=-1;
			name="hands";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=18;
			material=-1;
			name="legs";
			passThrough=0.69999999;
			radius=0.14;
			explosionShielding=0.1;
			//visual="injury_legs";
			minimalHit=0.0099999998;
			depends="";
		};
		class Incapacitated: HitLegs
		{
			armor=1500;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			//visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };

	class PSC_ARMOR_4_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_4_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=16;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=24;
			material=-1;
			name="pelvis";
			passThrough=0.33000001;
			radius=0.23999999;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=24;
			material=-1;
			name="spine1";
			passThrough=0.33000001;
			radius=0.16;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=24;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=24;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=1750;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=24;
			material=-1;
			name="arms";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitHands: HitArms
		{
			armor=24;
			material=-1;
			name="hands";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=24;
			material=-1;
			name="legs";
			passThrough=0.69999999;
			radius=0.14;
			explosionShielding=0.1;
			//visual="injury_legs";
			minimalHit=0.0099999998;
			depends="";
		};
		class Incapacitated: HitLegs
		{
			armor=1750;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			//visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };

	class PSC_ARMOR_5_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_5_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=64;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=96;
			material=-1;
			name="pelvis";
			passThrough=0.33000001;
			radius=0.23999999;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=96;
			material=-1;
			name="spine1";
			passThrough=0.33000001;
			radius=0.16;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=96;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=96;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=7000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=96;
			material=-1;
			name="arms";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitHands: HitArms
		{
			armor=96;
			material=-1;
			name="hands";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=96;
			material=-1;
			name="legs";
			passThrough=0.69999999;
			radius=0.14;
			explosionShielding=0.1;
			//visual="injury_legs";
			minimalHit=0.0099999998;
			depends="";
		};
		class Incapacitated: HitLegs
		{
			armor=7000;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			//visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };
	
	class PSC_ARMOR_6_01: SoldierWB
    {
	scope = 0; /// base class should not be visible in editor
	side = 0; /// that means BLUFOR
    faction = TMPBF; /// Standard NATO faction
    author = "Project Scorched";
    vehicleClass = "Men";
    editorSubcategory = "EdSubcat_Personnel";
	genericNames = "NATOMen";
	displayName = "PSC_ARMOR_6_01";
	modelSides[]={0,1,2,3};
	
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			material=-1;
			name="face_hub";
			passThrough=0.80000001;
			radius=0.079999998;
			explosionShielding=0.1;
			minimalHit=0.0099999998;
		};
		class HitNeck: HitFace
		{
			armor=80;
			material=-1;
			name="neck";
			passThrough=0.80000001;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
		};
		class HitHead: HitNeck
		{
			armor=1;
			material=-1;
			name="head";
			passThrough=0.80000001;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.0099999998;
			depends="HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor=120;
			material=-1;
			name="pelvis";
			passThrough=0.33000001;
			radius=0.23999999;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitAbdomen: HitPelvis
		{
			armor=120;
			material=-1;
			name="spine1";
			passThrough=0.33000001;
			radius=0.16;
			explosionShielding=1;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor=120;
			material=-1;
			name="spine2";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitChest: HitDiaphragm
		{
			armor=120;
			material=-1;
			name="spine3";
			passThrough=0.33000001;
			radius=0.18000001;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
		};
		class HitBody: HitChest
		{
			armor=8750;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1.5;
			//visual="injury_body";
			minimalHit=0.0099999998;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor=120;
			material=-1;
			name="arms";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="";
		};
		class HitHands: HitArms
		{
			armor=120;
			material=-1;
			name="hands";
			passThrough=0.69999999;
			radius=0.1;
			explosionShielding=0.1;
			visual="injury_hands";
			minimalHit=0.0099999998;
			depends="HitArms";
		};
		class HitLegs: HitHands
		{
			armor=120;
			material=-1;
			name="legs";
			passThrough=0.69999999;
			radius=0.14;
			explosionShielding=0.1;
			//visual="injury_legs";
			minimalHit=0.0099999998;
			depends="";
		};
		class Incapacitated: HitLegs
		{
			armor=8750;
			material=-1;
			name="body";
			passThrough=1;
			radius=0;
			explosionShielding=1;
			//visual="";
			minimalHit=0;
			depends="(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 1.45";
		};
	};
	armor=2;
	armorStructural=4;
	explosionShielding=0.40000001;

    weapons[] = {};
    respawnWeapons[] = {};
    magazines[] = {};
    respawnMagazines[] = {};
    linkedItems[] = {};
    respawnlinkedItems[] = {};
    Items[] = {};
    respawnItems[] = {};
    };
    #include "Uniform\Units_Skins.hpp"
};