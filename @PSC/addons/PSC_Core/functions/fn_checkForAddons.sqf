private _potentialAddons = ["ace"];
PSC_confirmedAddons = createHashMap;
{
    private _arr = addonFiles[_x, ".p3d"];
    if !(isNull _arr) then
    {
        PSC_confirmedAddons set [_x, true];
    };
} forEach _potentialAddons;