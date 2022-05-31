////////////////////////////////////////////////////////////////////
//DeRap: structures_walls\config.bin
//Produced from mikero's Dos Tools Dll version 8.35
//https://mikero.bytex.digital/Downloads
//'now' is Tue May 31 17:05:34 2022 : 'file' last modified on Wed Dec 31 19:00:01 1969
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(8 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Structures_Walls
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class Land_Wall_Gate_Camp: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_camp.p3d";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.7;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
			class Doors4
			{
				displayName = "door 4";
				component = "Doors4";
				soundPos = "doors4_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.7;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Fen2_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fen2_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateMeshOpen";
				soundClose = "doorMetalGateMeshClose";
				soundLocked = "doorMetalGateMeshRattle";
				soundOpenABit = "doorMetalGateMeshOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Fen2_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fen2_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateMeshOpen";
				soundClose = "doorMetalGateMeshClose";
				soundLocked = "doorMetalGateMeshRattle";
				soundOpenABit = "doorMetalGateMeshOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenG: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_feng.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenG_Big: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_feng_big.p3d";
		bounding = "BSphere";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenG_Big_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_feng_big_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenG_Big_Open: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_feng_big_open.p3d";
		bounding = "BSphere";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenG_Big_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_feng_big_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenG_Open: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_feng_open.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenR: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fenr.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenR_Big: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fenr_big.p3d";
		bounding = "BSphere";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenR_Big_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fenr_big_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenR_Big_Open: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fenr_big_open.p3d";
		bounding = "BSphere";
		class Doors
		{
			class DoorsTwin1
			{
				displayName = "door Twin1";
				component = "DoorsTwin1";
				soundPos = "doorsTwin1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenR_Big_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fenr_big_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 1;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_FenR_Open: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_fenr_open.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind1_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind1_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind1_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind1_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind2A_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind2a_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind2A_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind2a_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind2B_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind2b_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind2B_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind2b_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind2Rail_L: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind2rail_l.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Ind2Rail_R: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_ind2rail_r.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateBigOpen";
				soundClose = "doorMetalGateBigClose";
				soundLocked = "doorMetalGateBigRattle";
				soundOpenABit = "doorMetalGateBigOpenABit";
			};
			class Static_Wall_CBrk_5: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CBrk_5.p3d";
			};
			class Static_Wall_CBrk_5_D: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CBrk_5_D.p3d";
			};
			class Static_Wall_CBrk_Corner: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CBrk_Corner.p3d";
			};
			class Static_Wall_CBrk_End: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CBrk_End.p3d";
			};
			class Static_Wall_CBrk_Pole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CBrk_Pole.p3d";
			};
			class Static_Wall_CGry_5: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGry_5.p3d";
			};
			class Static_Wall_CGry_5_D: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGry_5_D.p3d";
			};
			class Static_Wall_CGry_Corner: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGry_Corner.p3d";
			};
			class Static_Wall_CGry_Corner_2: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGry_Corner_2.p3d";
			};
			class Static_Wall_CGry_End: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGry_End.p3d";
			};
			class Static_Wall_CGryLow_5: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGryLow_5.p3d";
			};
			class Static_Wall_CGryLow_End1: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGryLow_End1.p3d";
			};
			class Static_Wall_CGryLow_End2: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CGryLow_End2.p3d";
			};
			class Static_Wall_Cnc_5: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Cnc_5.p3d";
			};
			class Static_Wall_CncSmall_4: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CncSmall_4.p3d";
			};
			class Static_Wall_CncSmall_8: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CncSmall_8.p3d";
			};
			class Static_Wall_CYel_5: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CYel_5.p3d";
			};
			class Static_Wall_CYel_Corner: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CYel_Corner.p3d";
			};
			class Static_Wall_CYel_End: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CYel_End.p3d";
			};
			class Static_Wall_CYel_End2: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_CYel_End2.p3d";
			};
			class Static_Wall_Fen1_5: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen1_5.p3d";
			};
			class Static_Wall_Fen1_5_2: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen1_5_2.p3d";
			};
			class Static_Wall_Fen1_5_Hole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen1_5_Hole.p3d";
			};
			class Static_Wall_Fen1_5_Pole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen1_5_Pole.p3d";
			};
			class Static_Wall_Fen2_6: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen2_6.p3d";
			};
			class Static_Wall_Fen2_6_Hole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen2_6_Hole.p3d";
			};
			class Static_Wall_Fen2_Pole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Fen2_Pole.p3d";
			};
			class Static_Wall_FenG_3: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenG_3.p3d";
			};
			class Static_Wall_FenG_Pole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenG_Pole.p3d";
			};
			class Static_Wall_FenR_3: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenR_3.p3d";
			};
			class Static_Wall_FenR_Pole: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenR_Pole.p3d";
			};
			class Static_Wall_FenW_7: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenW_7.p3d";
			};
			class Static_Wall_FenW_7_D: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenW_7_D.p3d";
			};
			class Static_Wall_FenW_7_S: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_FenW_7_S.p3d";
			};
			class Static_Wall_ForFieldFen_1: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_ForFieldFen_1.p3d";
			};
			class Static_Wall_ForFieldFen_2: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_ForFieldFen_2.p3d";
			};
			class Static_Wall_ForFieldFen_end: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_ForFieldFen_end.p3d";
			};
			class Static_Wall_GarbCont: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_GarbCont.p3d";
			};
			class Static_Wall_GarbCont_Corner: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_GarbCont_Corner.p3d";
			};
			class Static_Wall_Gate_CGry: HouseNoDestruct
			{
				scope = 2;
				model = "DZ\structures\Walls\Wall_Gate_CGry.p3d";
			};
		};
	};
	class Land_Wall_Gate_Village: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_village.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorMetalGateOpen";
				soundClose = "doorMetalGateClose";
				soundLocked = "doorMetalGateRattle";
				soundOpenABit = "doorMetalGateOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Wood1: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_wood1.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorWoodGateSmallOpen";
				soundClose = "doorWoodGateSmallClose";
				soundLocked = "doorWoodGateSmallRattle";
				soundOpenABit = "doorWoodGateSmallOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Wood2: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_wood2.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorWoodGateSmallOpen";
				soundClose = "doorWoodGateSmallClose";
				soundLocked = "doorWoodGateSmallRattle";
				soundOpenABit = "doorWoodGateSmallOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Wood3: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_wood3.p3d";
		bounding = "BSphere";
		class Doors
		{
			class Doors1
			{
				displayName = "door 1";
				component = "Doors1";
				soundPos = "doors1_action";
				animPeriod = 1;
				initPhase = 0;
				initOpened = 0.3;
				soundOpen = "doorWoodGateSmallOpen";
				soundClose = "doorWoodGateSmallClose";
				soundLocked = "doorWoodGateSmallRattle";
				soundOpenABit = "doorWoodGateSmallOpenABit";
			};
		};
	};
	class Land_Wall_Gate_Wood4: HouseNoDestruct
	{
		scope = 1;
		model = "\dz\structures\walls\wall_gate_wood4.p3d";
		bounding = "BSphere";
	};
};
