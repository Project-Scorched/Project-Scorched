class CfgPatches 
{
  class PSC_Factions
  {
      requiredAddons[] = 
      {
          "PSC_Core"
      };
      units[] = 
      {
  
      };
      weapons[] = 
      {
  
      };
      requiredVersion = 0.1;
      version = 0.1;
      addonRootClass = "PSC_Factions";
      author = "$STR_PSC_Author";
      fileName = "PSC_Factions"; 
  };
};

class CfgFactionClasses
{
    class PSC_NCR
    {
      displayName = "NCR";
      author="Queen";
      flag="\a3\Data_f\Flags\flag_nato_co.paa";
      icon="";
      priority=1;
	};
    class PSC_Wastelander
    {
      displayName = "Wastelander";
      author="Queen";
      flag="\a3\Data_f\Flags\flag_nato_co.paa";
      icon="";
      priority=1;
	};
};


class CfgEditorCategories
{
  class PSC_EdCat_Wastelander
  {
    displayName = "Wastelander";
  };
};

