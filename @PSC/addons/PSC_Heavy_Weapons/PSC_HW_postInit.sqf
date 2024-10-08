if (!(hasInterface) or (isDedicated)) exitWith {};
[] spawn
{
	waitUntil { !isNull findDisplay 46 };
	sleep 1;
	(findDisplay 46) displayAddEventHandler ["MouseButtonDown", {
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		if (
		(getText (configfile >> 'CfgVehicles' >> typeOf _unit >> 'moves') != 'CfgMovesMaleSdr') or
		(animationState _unit in ["rotary_proper_walkfr","rotary_proper_walkfl","rotary_proper_walkr","rotary_proper_walkl","rotary_proper_walkbr","rotary_proper_walkbl","rotary_proper_walkb","rotary_proper_walk","rotary_proper_turnr","rotary_proper_turnl","rotary_proper_toidle","rotary_proper_idle"]) or 
		(!(currentWeapon _unit in WBK_HeavyWeaponsArray) && (getText (configFile >> "CfgWeapons" >> currentWeapon _unit >> "WBK_UseHeavyWeaponFramework") == "")) or 
		(dialog) or 
		(_this select 1 != 0) or 
		(weaponLowered _unit) or 
		(stance _unit != "STAND") or
		!(isTouchingGround _unit) or
		!(isNull objectParent _unit) or
		!(alive _unit) or 
		(visibleMap) or 
		(isWeaponDeployed _unit)
		) exitWith {};
		_unit setUnitRecoilCoefficient 1;
		[_unit,"Rotary_Proper_ToIdle"] remoteExec ["switchMove",0];
		playSound3D [selectRandom ["WBK_HeavyWeaponsFramework\sounds\minigunDeploy_1.ogg","WBK_HeavyWeaponsFramework\sounds\minigunDeploy_2.ogg"], _unit, false, aimPos _unit, 1.3, 1, 40,0,false];
	}];
	
	
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_unit = missionNamespace getVariable["bis_fnc_moduleRemoteControl_unit", player];
		_key = _this select 1;
		if (
		(_key in actionKeys "MoveUp") and 
		(animationState _unit in ["rotary_proper_walkfr","rotary_proper_walkfl","rotary_proper_walkr","rotary_proper_walkl","rotary_proper_walkbr","rotary_proper_walkbl","rotary_proper_walkb","rotary_proper_walk","rotary_proper_turnr","rotary_proper_turnl","rotary_proper_toidle","rotary_proper_idle"])
		) then {
			_unit playMoveNow "AmovPknlMstpSrasWrflDnon";
		};
	}];
	
	player addAction ["", {
		playSound3D ['a3\sounds_f\weapons\Other\dry9.wss', _this select 0, false, aimPos (_this select 0), 1, 1, 20,0,false];
	}, "", 0, false, true, "DefaultAction", "!WBK_HeavyWeapons_AllowProneShoot && stance _target == 'PRONE' && currentWeapon _target in WBK_HeavyWeaponsArray"];
	player addEventHandler ["Respawn", {  
		_obj = _this select 0; 
		_obj addAction ["", {
			playSound3D ['a3\sounds_f\weapons\Other\dry9.wss', _this select 0, false, aimPos (_this select 0), 1, 1, 20,0,false];
		}, "", 0, false, true, "DefaultAction", "!WBK_HeavyWeapons_AllowProneShoot && stance _target == 'PRONE' && currentWeapon _target in WBK_HeavyWeaponsArray"];
	}]; 
};