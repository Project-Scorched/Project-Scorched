params ["_vehicle"];

[_vehicle] call ballistic_fnc_turretKilled;

[_vehicle] spawn ballistic_fnc_turretIdle;