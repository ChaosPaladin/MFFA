#include "script_component.hpp"

class CfgPatches 
{
    class ADDON 
    {
        units[] = 
        {
            "O_ti_CL_F",
			"O_ti_SL_F",
			"O_ti_soldier_F",
			"O_ti_m_F",
			"O_ti_gl_F",
			"O_ti_medic_F",
			"O_ti_light_F",
			"O_ti_pistol_F",
			"O_ti_lat_F",
			"O_ti_aa_F",
			"O_ti_mg_F",
            "O_ti_amg_F",
            "O_ti_ar_F",
			"O_ti_aar_F",
			"O_ti_eng_F",
			"O_ti_exp_F",
			"O_ti_driver_F",
			"O_ti_technical_F",
			"O_ti_technical_a_F",
            "O_ti_technical_r_F",
			"O_ti_truck_F",
			"O_ti_truck_s_F",
            "O_ti_suv_F",
            "O_ti_fuel_F",
            "O_ti_mortar_F",
            "O_ti_g_squad_F",
            "O_ti_g_sentry_F",
            "O_ti_g_sentry_r_F",
            "O_ti_g_sup_med",
            "O_ti_g_sup_exp",
            "O_ti_g_sup_eng",
            "O_ti_g_sup_aa",
            "O_ti_g_sup_at",
            "ti_mot_g",
            "ti_mot_tech"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"MFFA_main"};
        author[] = {"Alganthe"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
class CfgGroups
{
	class East
	{
		side=0;
		name="OPFOR";
		class O_ti
		{
            name="Takistani insurgents";
            #include "groups\O_ti_ins.hpp"
            #include "groups\O_ti_sup.hpp"
            #include "groups\O_ti_mot.hpp"
        };
    };
};
class cfgWeapons
{
    #include "equipment\ti_uniforms.hpp"
};   
class CfgFactionClasses
{
	class O_ti
	{
		displayName="Takistani insurgents";
        flag = "";
		icon="";
		side=0;
		priority=2;
	};
};
class CfgVehicleClasses
{
	class O_ti_ins
	{
		displayName="Insurgents";
	};
	class O_ti_mot
	{
		displayName="Motorized groups";
	};
	class O_ti_sup
	{
		displayName="Supports";
	};
	class O_ti_stat
	{
		displayName="Static";
	};
};
class CfgVehicles
{
    #include "units\O_ti_units.hpp"
};
class Extended_Init_Eventhandlers
{
    #include "units\O_ti_EH.hpp"
};