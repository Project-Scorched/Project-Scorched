class CfgPatches
{
    class PSC_Props_2
    {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {"A3_characters_F", "A3_Data_F", "A3_Structures_F_Argo",
        "A3_Structures_F_Civ", "A3_Structures_F_Items_Vessels", "A3_Structures_F",
        "A3_Structures_F_Items", "A3_Structures_F_Heli_Furniture",
        "A3_Structures_F_Mil_Flags", "A3_Weapons_F_Items", "A3_Structures_F_EPB",
        "A3_Weapons_F", "A3_Data_F"};
        requiredVersion=0.1;
    };
};

class CfgEditorCategories
{
	class EdCat_psc_props // Category class, you point to it in editorCategory property
	{
		displayName = "[PS] Props"; // Name visible in the list
	};
};


class CfgVehicles
{
    class Wall_F;

    class Land_PSC_RoadSign_base: Wall_F {
        author="Project Scorched";
        icon = "iconObject_1x1";
        editorCategory="EdCat_psc_props";
        editorSubcategory = "EdSubcat_RoadSigns";
        vehicleClass = "Signs";
        mapSize=2.4300001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.70599997;
			verticalOffsetWorld=0;
			init="''";
		};
        destrType="DestructWall";
        armor=200;


    };

    class Land_psc_cautionsigns_bicyclecrossing: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Bicycle Crossing";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_bicyclecrossing.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_bicyclecrossing.p3d";
    };

    class Land_psc_cautionsigns_cattlecrossing: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Cattle Crossing";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_cattlecrossing.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_cattlecrossing.p3d";
    };

    class Land_psc_cautionsigns_crossroads: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Crossroads";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_crossroads.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_crossroads.p3d";
    };

    class Land_psc_cautionsigns_lanereduction: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Lane Reduction";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_lanereduction.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_lanereduction.p3d";
    };

    class Land_psc_cautionsigns_leftlaneends: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Left Lane Ends";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_leftlaneends.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_leftlaneends.p3d";
    };

    class Land_psc_cautionsigns_merginglane: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Merging Lane";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_merginglane.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_merginglane.p3d";
    };

    class Land_psc_cautionsigns_pedestriancrossing: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Pedestrian Crossing (1)";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_pedestriancrossing.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_pedestriancrossing.p3d";
    };

    class Land_psc_cautionsigns_pedestriancrossing2: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] School Crossing";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_pedestriancrossing2.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_pedestriancrossing2.p3d";
    };

    class Land_psc_cautionsigns_rightlaneends: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Right Lane Ends";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_rightlaneends.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_rightlaneends.p3d";
    };

    class Land_psc_cautionsigns_roundabout: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Roundabout";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_roundabout.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_roundabout.p3d";
    };

    class Land_psc_cautionsigns_slipperyroad: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Slippery Road";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_slipperyroad.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_slipperyroad.p3d";
    };

    class Land_psc_cautionsigns_trafficlight: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Traffic Light";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_trafficlight.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_trafficlight.p3d";
    };

    class Land_psc_cautionsigns_truckdownhill: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Truck Downhill";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_truckdownhill.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_truckdownhill.p3d";
    };

    class Land_psc_cautionsigns_twowaytraffic: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Two Way Traffic";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_twowaytraffic.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_twowaytraffic.p3d";
    };

    class Land_psc_cautionsigns_deadend: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Dead End";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_deadend.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_deadend.p3d";
    };

    class Land_psc_cautionsigns_deercrossing: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Deer Crossing";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_deercrossing.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_deercrossing.p3d";
    };

    class Land_psc_cautionsigns_dividedroad: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Divided Road";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_dividedroad.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_dividedroad.p3d";
    };

    class Land_psc_cautionsigns_laneendsmergeleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Lane Ends Merge Left";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns_laneendsmergeleft.jpg";
        model = "\psc_props\signs\caution_signs\psc_cautionsigns_laneendsmergeleft.p3d";
    };

     class Land_psc_cautionsigns2_bendleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Bend Left";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_bendleft.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_bendleft.p3d";
    };
    
     class Land_psc_cautionsigns2_bendright: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Bend Right (1)";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_bendright.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_bendright.p3d";
    };
    
     class Land_psc_cautionsigns2_bendright2: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Bend Right (2)";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_bendright2.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_bendright2.p3d";
    };
    
     class Land_psc_cautionsigns2_curvyroad: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Curvy Road";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_curvyroad.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_curvyroad.p3d";
    };
    
     class Land_psc_cautionsigns2_lanesmergingleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Lanes Merging Left";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_lanesmergingleft.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_lanesmergingleft.p3d";
    };
    
     class Land_psc_cautionsigns2_nopassingzone: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] No Passing Zone";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_nopassingzone.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_nopassingzone.p3d";
    };
    
     class Land_psc_cautionsigns2_railroadcrossing: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Rail Road Crossing";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_railroadcrossing.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_railroadcrossing.p3d";
    };
    
     class Land_psc_cautionsigns2_rightturn: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Right Turn";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_rightturn.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_rightturn.p3d";
    };
    
     class Land_psc_cautionsigns2_sharpreverseturn_l: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Sharp Reverse Turn Left";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_sharpreverseturn_l.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_sharpreverseturn_l.p3d";
    };
    
     class Land_psc_cautionsigns2_sharpreverseturn_r: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Sharp Reverse Turn Right";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_sharpreverseturn_r.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_sharpreverseturn_r.p3d";
    };
    
     class Land_psc_cautionsigns2_sharpturnahead: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Sharp Turn Ahead";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_sharpturnahead.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_sharpturnahead.p3d";
    };
    
     class Land_psc_cautionsigns2_sharpturnleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Sharp Turn Left";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_sharpturnleft.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_sharpturnleft.p3d";
    };
    
     class Land_psc_cautionsigns2_sharpturnright: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Sharp Turn Right";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_sharpturnright.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_sharpturnright.p3d";
    };
    
     class Land_psc_cautionsigns2_stopahead: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Stop Ahead";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_stopahead.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_stopahead.p3d";
    };
    
     class Land_psc_cautionsigns2_Tjunction: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] T Junction";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_Tjunction.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_Tjunction.p3d";
    };
    
     class Land_psc_cautionsigns2_truckrollover: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Truck Rollover";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_truckrollover.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_truckrollover.p3d";
    };
    
     class Land_psc_cautionsigns2_Uturn: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] U Turn";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_Uturn.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_Uturn.p3d";
    };
    
     class Land_psc_cautionsigns2_Yjunction: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] Y Junction";
        editorPreview="\psc_props\icons\Land_psc_cautionsigns2_Yjunction.jpg";
        model = "\psc_props\signs\caution_signs_2\psc_cautionsigns2_Yjunction.p3d";
    };

    class Land_psc_constsigns_constructionguy: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Construction Guy";
        editorPreview="\psc_props\icons\Land_psc_constsigns_constructionguy.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_constructionguy.p3d";
    };

    class Land_psc_constsigns_detour_l: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Detour Left";
        editorPreview="\psc_props\icons\Land_psc_constsigns_detour_l.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_detour_l.p3d";
    };

    class Land_psc_constsigns_detour_r_square: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Detour Right";
        editorPreview="\psc_props\icons\Land_psc_constsigns_detour_r_square.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_detour_r_square.p3d";
    };

    class Land_psc_constsigns_doublelaneshift: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Double Lane Shift";
        editorPreview="\psc_props\icons\Land_psc_constsigns_doublelaneshift.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_doublelaneshift.p3d";
    };

    class Land_psc_constsigns_flagger: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Flagger";
        editorPreview="\psc_props\icons\Land_psc_constsigns_flagger.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_flagger.p3d";
    };

    class Land_psc_constsigns_rightlaneclosed: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Right Lane Closed";
        editorPreview="\psc_props\icons\Land_psc_constsigns_rightlaneclosed.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_rightlaneclosed.p3d";
    };

    class Land_psc_constsigns_roadclosed: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Road Closed";
        editorPreview="\psc_props\icons\Land_psc_constsigns_roadclosed.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_roadclosed.p3d";
    };

    class Land_psc_constsigns_roadworkahead: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Road Work Ahead";
        editorPreview="\psc_props\icons\Land_psc_constsigns_roadworkahead.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_roadworkahead.p3d";
    };

    class Land_psc_constsigns_roughroad: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Rough Road";
        editorPreview="\psc_props\icons\Land_psc_constsigns_roughroad.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_roughroad.p3d";
    };

    class Land_psc_constsigns_slow: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Construction] Slow";
        editorPreview="\psc_props\icons\Land_psc_constsigns_slow.jpg";
        model = "\psc_props\signs\construction_signs\psc_constsigns_slow.p3d";
    };

    class Land_psc_guidsigns_beds: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Beds";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_beds.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_beds.p3d";
    };

    class Land_psc_guidsigns_camping: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Camping";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_camping.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_camping.p3d";
    };

    class Land_psc_guidsigns_food: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Food";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_food.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_food.p3d";
    };

    class Land_psc_guidsigns_gasstation: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Gas Station";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_gasstation.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_gasstation.p3d";
    };

    class Land_psc_guidsigns_hotel: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Hotel";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_hotel.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_hotel.p3d";
    };

    class Land_psc_guidsigns_phone: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Phone";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_phone.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_phone.p3d";
    };

    class Land_psc_guidsigns_picnic: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Picnic";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_picnic.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_picnic.p3d";
    };

    class Land_psc_guidsigns_restarea: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Rest Area";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_restarea.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_restarea.p3d";
    };

    class Land_psc_guidsigns_wheelchair: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Guidance] Wheel Chair";
        editorPreview="\psc_props\icons\Land_psc_guidsigns_wheelchair.jpg";
        model = "\psc_props\signs\guidance_signs\psc_guidsigns_wheelchair.p3d";
    };

    class Land_psc_roadsign_roadclosed: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Road Closed";
        editorPreview="\psc_props\icons\Land_psc_roadsign_roadclosed.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_roadclosed.p3d";
    };

    class Land_psc_roadsign_sidewalkclosed: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Sidewalk Closed";
        editorPreview="\psc_props\icons\Land_psc_roadsign_sidewalkclosed.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_sidewalkclosed.p3d";
    };

    class Land_psc_roadsign_slowertraffickeepright: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Slower Traffic Keep Right";
        editorPreview="\psc_props\icons\Land_psc_roadsign_slowertraffickeepright.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_slowertraffickeepright.p3d";
    };

    class Land_psc_roadsign_stayinlane: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Stay In Lane";
        editorPreview="\psc_props\icons\Land_psc_roadsign_stayinlane.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_stayinlane.p3d";
    };

    class Land_psc_roadsign_stophereonred: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Stop Here on Red";
        editorPreview="\psc_props\icons\Land_psc_roadsign_stophereonred.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_stophereonred.p3d";
    };

    class Land_psc_roadsign_straightandleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Straight And Left";
        editorPreview="\psc_props\icons\Land_psc_roadsign_straightandleft.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_straightandleft.p3d";
    };

    class Land_psc_roadsign_straightonly: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Straight Only";
        editorPreview="\psc_props\icons\Land_psc_roadsign_straightonly.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_straightonly.p3d";
    };

    class Land_psc_roadsign_trucksuserightlane: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Trucks Use Right Lane";
        editorPreview="\psc_props\icons\Land_psc_roadsign_trucksuserightlane.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_trucksuserightlane.p3d";
    };

    class Land_psc_roadsign_centerlaneonly: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Center Lane Only";
        editorPreview="\psc_props\icons\Land_psc_roadsign_centerlaneonly.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_centerlaneonly.p3d";
    };

    class Land_psc_roadsign_dividedhighway: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Divided Highway";
        editorPreview="\psc_props\icons\Land_psc_roadsign_dividedhighway.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_dividedhighway.p3d";
    };

    class Land_psc_roadsign_donotpass: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Do Not Pass";
        editorPreview="\psc_props\icons\Land_psc_roadsign_donotpass.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_donotpass.p3d";
    };

    class Land_psc_roadsign_keepleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Keep Left";
        editorPreview="\psc_props\icons\Land_psc_roadsign_keepleft.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_keepleft.p3d";
    };

    class Land_psc_roadsign_keepright: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Keep Right";
        editorPreview="\psc_props\icons\Land_psc_roadsign_keepright.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_keepright.p3d";
    };

    class Land_psc_roadsign_leftonly: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Left Only";
        editorPreview="\psc_props\icons\Land_psc_roadsign_leftonly.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_leftonly.p3d";
    };

    class Land_psc_roadsign_noturnonred: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] No Turn on Red";
        editorPreview="\psc_props\icons\Land_psc_roadsign_noturnonred.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_noturnonred.p3d";
    };

    class Land_psc_roadsign_noturns: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] No Turns";
        editorPreview="\psc_props\icons\Land_psc_roadsign_noturns.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_noturns.p3d";
    };

    class Land_psc_roadsign_oneway_l: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] One Way Left";
        editorPreview="\psc_props\icons\Land_psc_roadsign_oneway_l.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_oneway_l.p3d";
    };

    class Land_psc_roadsign_oneway_r: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] One Way Right";
        editorPreview="\psc_props\icons\Land_psc_roadsign_oneway_r.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_oneway_r.p3d";
    };

    class Land_psc_roadsign_passwithcare: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Pass With Care";
        editorPreview="\psc_props\icons\Land_psc_roadsign_passwithcare.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_passwithcare.p3d";
    };

    class Land_psc_roadsign_rightonly: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Regulation] Right Only";
        editorPreview="\psc_props\icons\Land_psc_roadsign_rightonly.jpg";
        model = "\psc_props\signs\regulation_signs\psc_roadsign_rightonly.p3d";
    };

    class Land_psc_warnsigns_donotenter: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] Do Not Enter";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_donotenter.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_donotenter.p3d";
    };

    class Land_psc_warnsigns_nobicycle: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Bicycle";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_nobicycle.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_nobicycle.p3d";
    };

    class Land_psc_warnsigns_nocrossing: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Crossing";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_nocrossing.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_nocrossing.p3d";
    };

    class Land_psc_warnsigns_noparking: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Parking";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_noparking.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_noparking.p3d";
    };

    class Land_psc_warnsigns_noparkingat: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Parking (any time)";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_noparkingat.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_noparkingat.p3d";
    };

    class Land_psc_warnsigns_nostandat: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Stand (any time)";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_nostandat.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_nostandat.p3d";
    };

    class Land_psc_warnsigns_notrucks: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Trucks";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_notrucks.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_notrucks.p3d";
    };

    class Land_psc_warnsigns_noturnleft: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Turn Left";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_noturnleft.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_noturnleft.p3d";
    };

    class Land_psc_warnsigns_noturnright: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No Turn Right";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_noturnright.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_noturnright.p3d";
    };

    class Land_psc_warnsigns_noUturn: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] No U Turn";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_noUturn.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_noUturn.p3d";
    };

    class Land_psc_warnsigns_stop: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] Stop";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_stop.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_stop.p3d";
    };

    class Land_psc_warnsigns_stop_4way: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] Stop (4 ways)";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_stop_4way.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_stop_4way.p3d";
    };

    class Land_psc_warnsigns_wrongway: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] Wrong Way";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_wrongway.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_wrongway.p3d";
    };

    class Land_psc_warnsigns_yield: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Warning] Yield";
        editorPreview="\psc_props\icons\Land_psc_warnsigns_yield.jpg";
        model = "\psc_props\signs\warning_signs\psc_warnsigns_yield.p3d";
    };

    class Land_PSC_telephonepole_base: Wall_F {
        author="Project Scorched";
        icon = "iconObject_1x1";
        editorCategory="EdCat_psc_props";
        editorSubcategory = "EdSubcat_Utilities";
        vehicleClass = "Signs";
        destrType = "DestructNo";
        mapSize=2.4300001;
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.70599997;
			verticalOffsetWorld=0;
			init="''";
		};
        
    };

    class Land_psc_telephonepole_1: Land_PSC_telephonepole_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Telephone Pole (1)";
        editorPreview="\psc_props\icons\Land_psc_telephonepole_1.jpg";
        model = "\psc_props\infrastructure\telephone_poles\psc_telephonepole_1.p3d";
    };

    class Land_psc_telephonepole_2: Land_PSC_telephonepole_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "Telephone Pole (2)";
        editorPreview="\psc_props\icons\Land_psc_telephonepole_2.jpg";
        model = "\psc_props\infrastructure\telephone_poles\psc_telephonepole_2.p3d";
    };


};









   /* class Land_: Land_PSC_RoadSign_base {
        scope = 2;
        scopeCurator = 2;
        displayName = "[Caution] ";
        editorPreview="\psc_props\icons\___.jpg";
        model = "\psc_props\signs\caution_signs_2\___.p3d";
    };*/