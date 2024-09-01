params ["_vehicle", ["_time", 5.456]];

while {alive _vehicle} do
{
    if !(simulationEnabled _vehicle) exitWith {};
    if !(alive _vehicle) exitWith {}; // redundancy saves (programmers) lives

    [_vehicle, "ballistic_turret_auto_idle", false] call fallout_fnc_playSound; // there is no point globally executing this, a motor sound is not vital for each client to sync
    uiSleep _time; // how long the sound is
};