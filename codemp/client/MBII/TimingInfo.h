#include <client/client.h>
#include <string>
#include <format>
class TimingInfo
{
public:
	struct Animation_Table_s
	{
		const char* Name;
		int Index;
	};
	struct saberMoveData_s
	{
		const char* name;
		int animToUse;
		int	startQuad;
		int	endQuad;
		unsigned animSetFlags;
		int blendTime;
		int blocking;
		int chain_idle;
		int chain_attack;
		int trailLength;
		qboolean ScriptedLock;
	};
	static std::pair<TimingInfo::Animation_Table_s*, int> pAnim_Table;
	static std::pair<TimingInfo::saberMoveData_s*, int> pSaberMoveData_Table;
	static void InitializeTables();
	static saberMoveData_s SaberMoveData_Table[];
	static saberMoveData_s SaberMoveData_Table_Beta[];
	static Animation_Table_s Anim_Table[];
	static Animation_Table_s Anim_Table_Beta[];
	static void PrintInfos();
};