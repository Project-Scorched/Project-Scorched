class CfgPatches 
{
    class PSC_ACE_Medical
    {
        units[] = 
		{
            
		};
		weapons[] = 
		{
			
		};																								
		requiredVersion = 0.1; // Don't Touch
		version	= PSC_VERSION;
		requiredAddons[] = 
		{ 						
           	  "ace_medical"
    	};
		addonRootClass = "PSC_Medical"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Medical.pbo"; // File name
        skipWhenMissingDependencies = 1;
    };
};

class ACE_Medical_Injuries
{
    class damageTypes
    {
        thresholds[] = {{0.1, 1}};
        selectionSpecific = 1;

        // list of damage handlers, which will be called in reverse order
        // each entry should be a SQF expression that returns a function
        // this can also be overridden for each damage type
        class woundHandlers {
            ace_medical_damage = "ace_medical_damage_fnc_woundsHandlerBase";
        };
        class PSC_laserDamage 
        {
            threshholds[] = 
            {
                
            };

            noBlood = 0;
            class ThermalBurn 
            {
                weighting[] = 
                {
                    {1.5, 0},
                    {0.8, 0}
                };
            };
            class Avulsion
            {
                bleedingMultiplier = 0.5;
            };
            class Abrasion{};
            
        };
    };
};
