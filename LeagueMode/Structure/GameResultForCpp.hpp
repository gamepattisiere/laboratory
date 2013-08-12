/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date   2010.04.07 15:08:09
 *
 * @version 0.01, Shishido Takuya, 2010.04.07 15:08:09
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef GAMERESULTFORCPP_HPP_INCLUDED
#define GAMERESULTFORCPP_HPP_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Structure/GameResult.h"

/**----------------------------------------------------
 * @brief �o�͗p�� operator <<
 * @note       ������Ƌ��������������� TODO
 * @param[in]  os               �X�g���[���I�u�W�F�N�g
 * @param[in]  dataSet_         �o�̓I�u�W�F�N�g
 *---------------------------------------------------*/
std::ostream& operator<<(std::ostream& os, const GameResult& gameResult_);



#endif

