/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date   2010.04.06 13:59:00
 *
 * @version 0.01, Shishido Takuya, 2010.04.06 13:59:00
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef LEAGUEMODE_PLAYERDATAFORCPP_HPP_INCLUDED
#define LEAGUEMODE_PLAYERDATAFORCPP_HPP_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include <iostream>
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Structure/PlayerData.h"



/**----------------------------------------------------
 * @brief �o�͗p�� operator <<
 * @param[in]  os               �X�g���[���I�u�W�F�N�g
 * @param[in]  playerData_      �o�̓I�u�W�F�N�g
 *---------------------------------------------------*/
std::ostream& operator<<(std::ostream& os, const PlayerData& playerData_);


#endif
