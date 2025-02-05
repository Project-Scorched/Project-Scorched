/*
	Author: Queen 

	Description:
		Handles Project Scorched Laser system. Draws a line based on object data, and applies damage

	Parameter(s): same as fired
		    0: Object - object the event handler is assigned to
            1: String - fired weapon
            2: String - muzzle that was used
            3: String - current mode of the fired weapon
            4: String - ammo used
            5: String - magazine name which was used
            6: Object - object of the projectile that was shot out

	Returns:
		nothing

	Examples:
		call PSC_fnc_laserSystem;
        meant to be used during "fired" eventhandler
*/

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

private _weaponArray = PSC_LaserWeaponsCache getOrDefault[_weapon, [false]];
if !(_weaponArray # 0) exitWith{};
private _ammoArray = PSC_LaserAmmoCache getOrDefault[_ammo, [false]];
if !(_ammoArray # 0) exitWith{};

private _dir = vectorDir _unit;

private _muzzlePosition = _weapon selectionPosition "usti hlavne";

private _laserStartPosition = _weapon modelToWorldWorld _muzzlePosition;

if (_muzzlePosition == [0, 0 ,0]) then
{
    systemChat format ['Failed to find Muzzle Position [time: %1]', time];
    exitWith {};
};

if (_laserStartPosition == [0, 0 ,0]) then
{
    systemChat format ['Failed to find Laser Start Position [time: %1]', time];
    exitWith {};
};

private _coordinateX = _laserStartPosition # 0;
private _coordinateY = _laserStartPosition # 1;
private _coordinateZ = _laserStartPosition # 2;

private _vectorX = _dir # 0;
private _vectorY = _dir # 1;
private _vectorZ = _dir # 2;

private _weaponRange = _weaponArray#1;


private _laserEndPosition = [_coordinateX + (_weaponRange * _vectorX), _coordinateY + (_weaponRange * _vectorY), _coordinateZ + (_weaponRange * _vectorZ)];

private _intersectionData = lineIntersectsSurfaces [_laserStartPosition, _laserEndPosition, objNull, objNull, true, 1, "FIRE", "GEOM"];

private _realIntersectionPos = _intersectionData # 0;

private _hitObject = _intersectionData # 2;

if (_hitObject == objNull) then
{
    exitWith{};
};

private _intersectedHitpoints = _intersectionData # 4;
private _isAceEnabled = PSC_confirmedAddons getOrDefault ["ace", false];
if (isAceEnabled) then
{
    [_hitObject, _realIntersectionPos, _intersectedHitpoints] call PSC_fnc_laserAceDamageInteraction;
    exitWith{};
};

[_hitObject, _realIntersectionPos, _intersectedHitpoints] call PSC_fnc_laserDamageInteraction;
