/* class Extended_PreInit_EventHandlers {
	class PSC_Core {
		// This will be executed once in 3DEN, main menu and before briefing has started for every mission
		init = "call COMPILE_FILE(XEH_preInit)";
	};
};

class Extended_PostInit_EventHandlers {
	class PSC_Core {
		// This will be executed once for each mission, once the mission has started
		init = "call COMPILE_FILE(XEH_postInit)";
	};
}; */