this addEventHandler ["FiredMan", {
    
    params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];
muzzlePos = getPos _muzzle;
weaponVector = _unit weaponDirection _weapon;


}];