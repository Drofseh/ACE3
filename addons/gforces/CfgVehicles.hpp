class CfgVehicles {
    class Man;
    class CAManBase: Man {
        ACE_GForceCoef = G_COEF_UNTRAINED;
    };

    class B_Soldier_05_f;
    class B_Pilot_F: B_Soldier_05_f {
        ACE_GForceCoef = G_COEF_PILOT;
    };
    class I_Soldier_04_F;
    class I_pilot_F: I_Soldier_04_F {
        ACE_GForceCoef = G_COEF_PILOT;
    };
    class O_helipilot_F;
    class O_Pilot_F: O_helipilot_F {
        ACE_GForceCoef = G_COEF_PILOT;
    };
};
