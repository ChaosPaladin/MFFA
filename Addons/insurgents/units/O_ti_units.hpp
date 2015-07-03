/// Equipment list macros definition ///
 
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
////////////////////////////////////////////////////Base classes (infantry)
    class O_G_officer_F;
    class O_G_Soldier_SL_F;
    class O_G_Soldier_F;
    class O_G_Soldier_M_F;
    class O_G_Soldier_GL_F;
	class O_G_medic_F;
	class O_G_Soldier_lite_F;
	class O_G_Soldier_LAT_F;    
    class O_G_Soldier_AR_F;
    class O_G_Soldier_A_F;
    class O_G_engineer_F;
    class O_G_Soldier_exp_F;
    class o_g_soldier_unarmed_f;  
////////////////////////////////////////////////////Infantry
	class O_ti_CL_F: O_G_officer_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="ti_CL_F";
		scope=2;
        scopeCurator = 2;
		displayName="Cell Leader";
        genericNames="TakistaniMen";
        uniformClass="TRYK_U_taki_BLK";
        model = "tryk_unit\data\tk_sps.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bk_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
            "rhs_weap_ak74m",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]=
        {
			"H_Beret_blk"
        };
		respawnWeapons[]=
		{
            "rhs_weap_ak74m",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            mag_7(rhs_30Rnd_545x39_AK),
            mag_3(16Rnd_9x21_Mag),
            mag_4(HandGrenade),
            mag_2(ACE_M84)
		};
		respawnMagazines[]=
		{
            mag_7(rhs_30Rnd_545x39_AK),
            mag_3(16Rnd_9x21_Mag),
            mag_4(HandGrenade),
            mag_2(ACE_M84)
		};
        items[]=
        {
            "FirstAidKit"
        };
		linkedItems[]=
		{
            "H_Beret_blk",
			"TRYK_V_harnes_blk_L",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        respawnitems[] = 
        {
            "FirstAidKit"
        };
		respawnLinkedItems[]=
		{
			"H_Beret_blk",
			"TRYK_V_harnes_blk_L",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_SL_F: O_G_Soldier_SL_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_SL_F";
		scope=2;
        scopeCurator = 2;
		displayName="Squad leader";
        genericNames="TakistaniMen";
		weapons[]=
		{
            "rhs_weap_ak74m",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
            "rhs_weap_ak74m",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
            mag_7(rhs_30Rnd_545x39_AK),
            mag_3(16Rnd_9x21_Mag),
            mag_4(HandGrenade),
            mag_2(ACE_M84)
		};
		respawnMagazines[]=
		{
            mag_7(rhs_30Rnd_545x39_AK),
            mag_3(16Rnd_9x21_Mag),
            mag_4(HandGrenade),
            mag_2(ACE_M84)
        };
		linkedItems[]=
		{
			"FirstAidKit",
			"V_HarnessO_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_HarnessO_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_soldier_F: O_G_Soldier_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_soldier_F";
		scope=2;
        scopeCurator = 2;
		displayName="Fighter";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"arifle_TRG20_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG20_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"HandGrenade",
			"HandGrenade",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_Chestrig_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_Chestrig_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_m_F: O_G_Soldier_M_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_m_F";
		scope=2;
        scopeCurator = 2;
		displayName="Marksman";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"srifle_DMR_01_DMS_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"srifle_DMR_01_DMS_F",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"10Rnd_762x51_Mag",
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_BandollierB_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_BandollierB_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_gl_F: O_G_Soldier_GL_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_gl_F";
		scope=2;
        scopeCurator = 2;
		displayName="Grenadier";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"arifle_TRG21_GL_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG21_GL_F",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_HE_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_Smoke_Grenade_shell",
			"Chemlight_blue",
			"Chemlight_blue"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_Chestrig_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_Chestrig_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_medic_F: O_G_medic_F
	{
		side=0;
		faction="O_ti";
		backpack="B_FieldPack_ocamo_Medic";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_medic_F";
		scope=2;
        scopeCurator = 2;
		displayName="Medic";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"Chemlight_red",
			"Chemlight_blue",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed"
		};
		respawnMagazines[]=
		{
			"SmokeShell",
			"Chemlight_red",
			"Chemlight_blue",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShell",
			"SmokeShellGreen",
			"SmokeShellRed"
		};
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_light_F: O_G_Soldier_lite_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_light_F";
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (light)";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"SMG_02_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_02_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"HandGrenade",
			"Chemlight_blue"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"HandGrenade",
			"Chemlight_blue"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_ar_F: O_G_Soldier_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_ar_F";
		scope=2;
        scopeCurator = 2;
		displayName="autorifleman";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"arifle_Katiba_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		respawnWeapons[]=
		{
			"arifle_Katiba_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"Chemlight_blue",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"Chemlight_blue",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"HandGrenade",
			"HandGrenade"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_TacVestCamo_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_TacVestCamo_khk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
        };
        class eventhandlers;
	};
	class O_ti_pistol_F: O_G_Soldier_lite_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_pistol_F";
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (Pistol)";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"9Rnd_45ACP_Mag",
			"Chemlight_red",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[]=
		{
			"9Rnd_45ACP_Mag",
			"Chemlight_red",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade",
			"HandGrenade"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_lat_F: O_G_Soldier_LAT_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_FieldPack_cbr_LAT";
		_generalMacro="O_ti_lat_F";
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (RPG)";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"launch_RPG32_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"launch_RPG32_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"Chemlight_red",
			"RPG32_HE_F",
			"SmokeShell",
			"SmokeShell",
			"RPG32_HE_F"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"RPG32_HE_F",
			"SmokeShell",
			"SmokeShell",
			"RPG32_HE_F"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_aa_F: O_G_Soldier_LAT_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_FieldPack_ocamo_AA";
		_generalMacro="O_ti_aa_F";
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (AA)";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"launch_O_Titan_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"launch_O_Titan_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"Chemlight_red",
			"Titan_AA",
			"SmokeShell",
			"SmokeShell",
			"Titan_AA"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"Titan_AA",
			"SmokeShell",
			"SmokeShell",
			"Titan_AA"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_mg_F: O_G_Soldier_AR_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="O_ti_amg_F";
		scope=2;
        scopeCurator = 2;
		displayName="Machinegunner";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"LMG_Zafir_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"LMG_Zafir_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"Chemlight_red",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer",
			"SmokeShell",
			"150Rnd_762x51_Box_Tracer"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer",
			"SmokeShell",
			"150Rnd_762x51_Box_Tracer"
		};
		linkedItems[]=
		{
			"V_HarnessO_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessO_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_amg_F: O_G_Soldier_A_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="MenSupport";
		author="Alganthe";
		backpack="B_FieldPack_oucamo_Ammo";
		_generalMacro="O_ti_amg_F";
		scope=2;
        scopeCurator = 2;
		displayName="Assist MG";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"hgun_PDW2000_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_PDW2000_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"Chemlight_blue",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"Chemlight_blue",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer"
		};
		linkedItems[]=
		{
			"V_TacVest_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_aar_F: O_G_Soldier_A_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="MenSupport";
		author="Alganthe";
		backpack="B_FieldPack_oucamo_Ammo";
		_generalMacro="O_ti_aar_F";
		scope=2;
        scopeCurator = 2;
		displayName="Assist autorifleman";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"hgun_PDW2000_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_PDW2000_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"Chemlight_blue",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"Chemlight_blue",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer",
			"150Rnd_762x51_Box_Tracer"
		};
		linkedItems[]=
		{
			"V_TacVest_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_eng_F: O_G_engineer_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_Carryall_ocamo_Eng";
		_generalMacro="O_ti_eng_F";
		scope=2;
        scopeCurator = 2;
		displayName="Engineer";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"arifle_Mk20_plain_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Mk20_plain_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"Chemlight_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_Chestrig_blk",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_Chestrig_blk",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_exp_F: O_G_Soldier_exp_F
	{
		side=0;
		faction="O_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_FieldPack_ocamo_ReconExp";
		_generalMacro="O_ti_exp_F";
		scope=2;
        scopeCurator = 2;
		displayName="Explosive specialist";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"arifle_TRG20_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_TRG20_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"Chemlight_red",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell"
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
			"APERSMine_Range_Mag",
			"APERSMine_Range_Mag",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"SmokeShell"
		};
		linkedItems[]=
		{
			"V_HarnessOSpec_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"V_HarnessOSpec_brn",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
	class O_ti_driver_F: o_g_soldier_unarmed_f
	{
		side=0;
		faction="O_ti";
		vehicleclass="MenSupport";
		author="Alganthe";
		_generalMacro="O_ti_driver_F";
		scope=2;
        scopeCurator = 2;
		displayName="Driver";
        genericNames="TakistaniMen";
		weapons[]=
		{
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={};
		magazines[]=
		{
			"30Rnd_9x21_Mag",
			"Chemlight_blue",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag"
		};
		respawnMagazines[]=
		{
			"30Rnd_9x21_Mag",
			"Chemlight_blue",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Mag"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"LanguagePER_F",
			"Head_TK",
			"G_IRAN_default"
		};
        class eventhandlers;
	};
////////////////////////////////////////////////////Vehicles
	class B_G_Offroad_01_F;
	class O_ti_technical_F: B_G_Offroad_01_F
	{
		displayName="Technical (unarmed)";
		vehicleclass="Car";
		side=0;
		faction="O_ti";
		scope=2;
        scopeCurator = 2;
		_generalMacro="O_ti_technical_F";
		author="Alganthe";
		crew="O_ti_driver_F";
	};
	class B_G_Offroad_01_armed_F;
	class O_ti_technical_a_F: B_G_Offroad_01_armed_F
	{
		displayName="Technical";
		vehicleclass="Car";
		side=0;
		scope=2;
        scopeCurator = 2;
		faction="O_ti";
		_generalMacro="O_ti_technical_a_F";
		author="Alganthe";
		crew="O_ti_pistol_F";
	};
	class B_G_Van_01_transport_F;
	class O_ti_truck_s_F: B_G_Van_01_transport_F
	{
		displayName="Small Truck";
		vehicleclass="Car";
		side=0;
		scope=2;
        scopeCurator = 2;
		faction="O_ti";
		_generalMacro="O_ti_truck_s_F";
		author="Alganthe";
		crew="O_ti_driver_F";
	};
	class C_SUV_01_F;
	class O_ti_suv_F: C_SUV_01_F
	{
		displayName="SUV";
		vehicleclass="Car";
		side=0;
		scope=2;
        scopeCurator = 2;
		faction="O_ti";
		_generalMacro="O_ti_suv_F";
		author="Alganthe";
		crew="O_ti_driver_F";
	};
	class B_G_Van_01_fuel_F;
	class O_ti_fuel_F: B_G_Van_01_fuel_F
	{
		displayName="Small Truck Fuel";
		vehicleclass="Support";
		side=0;
		scope=2;
        scopeCurator = 2;
		faction="O_ti";
		_generalMacro="O_ti_fuel_F";
		author="Alganthe";
		crew="O_ti_driver_F";
	};
	class B_G_Offroad_01_repair_F;
	class O_ti_technical_r_F: B_G_Offroad_01_repair_F
	{
		displayName="Offroad Repair";
		vehicleclass="Support";
		side=0;
		scope=2;
        scopeCurator = 2;
		faction="O_ti";
		_generalMacro="O_ti_technical_r_F";
		author="Alganthe";
		crew="O_ti_eng_F";
	};
////////////////////////////////////////////////////Statics
	class O_Mortar_01_F;
	class O_ti_mortar_F: O_Mortar_01_F
	{
		displayName="82mm Mortar";
		vehicleclass="Static";
		side=0;
        scope=2;
        scopeCurator = 2;
		faction="O_ti";
		_generalMacro="O_ti_mortar_F";
		author="Alganthe";
		crew="O_ti_driver_F";
	};