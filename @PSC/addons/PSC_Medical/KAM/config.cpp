class CfgPatches 
{
    class PSC_KAM_Medical
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
           	  "kat_main"
    	};
		addonRootClass = "PSC_Medical"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Medical.pbo"; // File name
        skipWhenMissingDependencies = 1;
    };
};