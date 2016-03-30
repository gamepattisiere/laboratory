/**
 * @file
 * @brief 外部呼出し用モジュール。
 * @note    これを Perl なりで呼び出してもらうと、
 *              一通りの作業が c++ で行われる。
 *
 * @author Takuya Shishido
 * @date   2010.04.27 11:10:15
 *
 * @version 0.01, Shishido Takuya, 2010.04.27 11:10:15
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/


//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/CInterfaceLeague/CInterface_LeagueMode.hpp"
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/cpp/LeagueModeManager.hpp"



/**----------------------------------------------------
 * @brief LeagueMode → チームセレクトに関する処理担当
 *----------------------------------------------------*/
void LeagueMode_TeamSelect()
{
	LeagueMode::LeagueModeManager::executeModule(LeagueMode::LEAGUEMODEMANAGERBEHAVIOR_TEAMSELECT);
	//LeagueMode::LeagueModeManager::destroyInstance();
}



/**----------------------------------------------------
 * @brief LeagueMode → 試合結果の出力に関する処理担当
 *----------------------------------------------------*/
void LeagueMode_AutoGame(const char* homeTeam_, const char* awayTeam_)
{
	//TODO
	//::LeagueMode::LeagueModeManager::executeModule(LeagueMode::LEAGUEMODEMANAGERBEHAVIOR_AUTOGAME);
	::LeagueMode::LeagueModeManager::behaviorGame(homeTeam_, awayTeam_);
	::LeagueMode::LeagueModeManager::destroyInstance();
}




