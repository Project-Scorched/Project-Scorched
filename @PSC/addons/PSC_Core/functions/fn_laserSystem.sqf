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

private _ammoArray = PSC_LaserAmmoCache getOrDefault[_ammo,[false]]; //Gets initial check from laser ammo cache
if !(_ammoArray # 0) exitWith{};

private _ammoData = _ammoArray # 1;

private _range = _ammoData # 2;

private _dir = _unit weaponDirection _weapon;

private _laserStartPosition = getPosASL _projectile; //_unit modelToWorldWorld _muzzlePosition; //converts muzzle position to 3d space

if (_laserStartPosition isEqualTo [0, 0 ,0]) exitWith
{
    systemChat format ['Failed to find Laser Start Position [time: %1]', time];
};

private _coordinateX = _laserStartPosition # 0;
private _coordinateY = _laserStartPosition # 1;
private _coordinateZ = _laserStartPosition # 2;

private _vectorX = _dir # 0;
private _vectorY = _dir # 1;
private _vectorZ = _dir # 2;

systemChat format ["CoordX: %1 [time: %2]", str _coordinateX, time];
systemChat format ["vextorX: %1 [time: %2]", str _vectorX, time];
systemChat format ["Range: %1 [time: %2]", str _range, time];

private _laserEndPosition = [_coordinateX + (_range * _vectorX), _coordinateY + (_range * _vectorY), _coordinateZ + (_range * _vectorZ)]; //Calculates laser end position with distance vector

systemChat format ["Laser Position: %1 [time: %2]", str _laserEndPosition, time];

private _intersectionData = lineIntersectsSurfaces [_laserStartPosition, _laserEndPosition, objNull, objNull, true, 1, "FIRE", "GEOM",true]; //draws line

drawLine3D [ASLToAGL _laserStartPosition, ASLToAGL _laserEndPosition, [255, 0, 0, 1]];

private _realIntersectionPos = _intersectionData # 0;

private _hitObject = _intersectionData # 2;

if (_hitObject == objNull) exitWith {};

private _intersectedHitpoints = _intersectionData # 4;
private _isAceEnabled = PSC_confirmedAddons getOrDefault ["ace", false]; //checks for ace 
if (isAceEnabled) exitWith
{
    [_hitObject, _unit, _ammo, _laserStartPosition, _realIntersectionPos, _intersectedHitpoints] call PSC_fnc_laserAceDamageInteraction;
};

[_hitObject, _unit, _ammo, _laserStartPosition, _realIntersectionPos, _intersectedHitpoints] call PSC_fnc_laserDamageInteraction;
