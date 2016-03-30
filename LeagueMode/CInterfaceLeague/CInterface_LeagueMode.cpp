/**
 * @file
 * @brief �O���ďo���p���W���[���B
 * @note    ����� Perl �Ȃ�ŌĂяo���Ă��炤�ƁA
 *              ��ʂ�̍�Ƃ� c++ �ōs����B
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
 * @brief LeagueMode �� �`�[���Z���N�g�Ɋւ��鏈���S��
 *----------------------------------------------------*/
void LeagueMode_TeamSelect()
{
	LeagueMode::LeagueModeManager::executeModule(LeagueMode::LEAGUEMODEMANAGERBEHAVIOR_TEAMSELECT);
	//LeagueMode::LeagueModeManager::destroyInstance();
}



/**----------------------------------------------------
 * @brief LeagueMode �� �������ʂ̏o�͂Ɋւ��鏈���S��
 *----------------------------------------------------*/
void LeagueMode_AutoGame(const char* homeTeam_, const char* awayTeam_)
{
	//TODO
	//::LeagueMode::LeagueModeManager::executeModule(LeagueMode::LEAGUEMODEMANAGERBEHAVIOR_AUTOGAME);
	::LeagueMode::LeagueModeManager::behaviorGame(homeTeam_, awayTeam_);
	::LeagueMode::LeagueModeManager::destroyInstance();
}




