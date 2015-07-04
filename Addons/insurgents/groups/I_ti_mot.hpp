            class I_ti_mot
            {
                name ="Motorized groups";
                class I_ti_mot_g_s
                {
                    name="Motorized squad (12 men)";
                    side=2;
                    faction="I_ti";
                    class Unit0
                    {
						side=2;
						vehicle="I_ti_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
                    class Unit1
                    {
                        side=2;
                        vehicle="I_ti_truck_s_F";
                        rank="PRIVATE";
                        position[]={0,-10,0};
                    };
                    class Unit2
					{
						side=2;
						vehicle="I_ti_lat_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_ti_ar_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit4
					{
						side=2;
						vehicle="I_ti_medic_F";
						rank="CORPORAL";
						position[]={15,-15,0};
					};
					class Unit5
					{
						side=2;
						vehicle="I_ti_aar_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
                    class Unit6
                    {
                        side=2;
                        vehicle="I_ti_m_F";
                        rank="PRIVATE";
                        position[]={20,-20,0};
                    };
                    class Unit7
                    {
                        side=2;
                        vehicle="I_ti_aa_F";
                        rank="PRIVATE";
                        position[]={-20,-20,0};
                    };
                    class Unit8
                    {
                        side=2;
                        vehicle="I_ti_mg_F";
                        rank="PRIVATE";
                        position[]={25,-25,0};
                    };
                    class Unit9
                    {
                        side=2;
                        vehicle="I_ti_gl_F";
                        rank="PRIVATE";
                        position[]={-25,-25,0};
                    };
                    class Unit10
                    {
                        side=2
                        vehicle="I_ti_eng_F";
                        rank="PRIVATE";
                        position[]={30,-30,0};
                    };
                    class Unit11
                    {
                        side=2;
                        vehicle="I_ti_soldier_F";
                        rank="PRIVATE";
                        position[]={-30,-30,0};
                    };
                    class Unit12
                    {
                        side=2;
                        vehicle="I_ti_m_F";
                        rank="PRIVATE";
                        position[]={-35,-35,0};
                    };
                };
                class I_ti_mot_g
				{
					name="Motorized Fighter Group";
					side=2;
					faction="I_ti";
					class Unit0
					{
						side=2;
						vehicle="I_ti_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_ti_technical_F";
						rank="CORPORAL";
						position[]={0,-10,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_ti_ar_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit3
					{
						side=2;
						vehicle="I_ti_lat_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
                    class Unit4
					{
						side=2;
						vehicle="I_ti_aar_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
                    class Unit5
					{
						side=2;
						vehicle="I_ti_medic_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};     
				};
				class I_ti_mot_tech
				{
					name="Technicals";
					side=2;
					faction="I_ti";
					class Unit0
					{
						side=2;
						vehicle="I_ti_technical_a_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=2;
						vehicle="I_ti_technical_a_F";
						rank="SERGEANT";
						position[]={10,-10,0};
					};
					class Unit2
					{
						side=2;
						vehicle="I_ti_technical_a_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
                };
            };