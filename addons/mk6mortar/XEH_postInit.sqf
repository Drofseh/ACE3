#include "script_component.hpp"

if (hasInterface) then {
    #include "initKeybinds.inc.sqf"
    ["ace_infoDisplayChanged", FUNC(turretDisplayLoaded)] call CBA_fnc_addEventHandler;
};

["CBA_settingsInitialized", {
    TRACE_4("CBA_settingsInitialized",GVAR(airResistanceEnabled),GVAR(allowComputerRangefinder),GVAR(allowCompass),GVAR(useAmmoHandling));

    ["vehicle", FUNC(handlePlayerVehicleChanged), true] call CBA_fnc_addPlayerEventHandler;

    if (!GVAR(airResistanceEnabled)) exitWith {};
    if (EGVAR(artillerytables,advancedCorrections)) exitWith { TRACE_1("defer firedEH to artillerytables",_this); };
    ["Mortar_01_base_F", "fired", {call FUNC(handleFired)}] call CBA_fnc_addClassEventHandler;

}] call CBA_fnc_addEventHandler;
