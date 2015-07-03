    class Uniform_Base;
    class UniformItem;

    class TRYK_U_taki_BLK: Uniform_Base
	{
		scope = 2;
		displayName = "TRYK Special force mideast style (BLK)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bk_co.paa"};
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = ti_CL_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class TRYK_U_taki_COY: Uniform_Base
	{
		scope = 2;
		displayName = "TRYK Special force mideast style (COY)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_1_co.paa"};
	class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = O_ti_SL_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class TRYK_U_taki_G_WH: Uniform_Base
    {
		scope = 2;
		displayName = "TRYK Special force mideast style Denim (WH)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_3_co.paa"};
	class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = O_ti_driver_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class B_takisp_G_BL_F: Uniform_Base
    {
		scope = 2;
		displayName = "TRYK Special force mideast style Denim (COY)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bl_co.paa"};
	class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = O_ti_eng_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};   
	class TRYK_ZARATAKI: Uniform_Base
	{
		scope = 2;
		displayName = "TRYK Takistan Soldier 1";
		picture = "\tryk_unit\data\ui\icon_loc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = O_ti_soldier_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class TRYK_ZARATAKI2: Uniform_Base
	{
		scope = 2;
		displayName = "TRYK Takistan Soldier 2";
		picture = "\tryk_unit\data\ui\icon_loc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = O_ti_m_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class TRYK_ZARATAKI3: Uniform_Base
	{
		scope = 2;
		displayName = "TRYK Takistan Soldier 3";
		picture = "\tryk_unit\data\ui\icon_loc.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_3_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = O_ti_gl_F;
			containerClass = "Supply40";
			mass = 40;
		};
	};