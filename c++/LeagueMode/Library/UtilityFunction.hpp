/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date   2010.04.02 19:35:16
 *
 * @version 0.01, Shishido Takuya, 2010.04.02 19:35:16
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef LEAGUEMODE_UTILITYFUNCTION_HPP_INCLUDED
#define LEAGUEMODE_UTILITYFUNCTION_HPP_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include <vector>
#include <string>
#include <sstream>

namespace LeagueMode {


/**----------------------------------------------------
 * @brief  stringstream ������������֐�
 * @param[in]   ss_     ����������X�g���[��
 *---------------------------------------------------*/
template<typename Type>
void clearStream(Type& ss_)
{
	// �o�b�t�@�N���A
	ss_.str("");
	// �X�g���[���̏�Ԃ��N���A����B���̍s���Ȃ��ƈӐ}�ʂ�ɓ��삵�Ȃ�
	ss_.clear(std::stringstream::goodbit);
}



/**----------------------------------------------------
 * @brief  stringstream ������������֐�
 * @param[in]   ss_     ����������X�g���[��
 *---------------------------------------------------*/
std::vector<std::string> splitString(std::string& string_);




}    // namespace LeagueMode

#endif

