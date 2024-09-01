params ["_vehicle"];

_vehicle addEventHandler ["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];

    private _soundObject = "#particlesource" createVehicle [0,0,0];
    _soundObject setPosATL getPosATL _unit;
    _soundObject allowDamage false;
    _soundObject enableSimulation false;

    [_soundObject, "ballistic_turret_auto_killed"] call fallout_fnc_playSound;
}];