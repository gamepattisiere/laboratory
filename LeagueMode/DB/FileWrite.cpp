/**
 * @file
 * @brief �t�@�C���ɏ������ޏ����B�{���� perl ���s���d��
 *
 * @author Takuya Shishido
 * @date   2010.04.07 16:07:26
 *
 * @version 0.01, Shishido Takuya, 2010.04.07 16:07:26
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/


//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/DB/FileWrite.hpp"
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Define/LeagueModeDefineData.h"
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Structure/GameResultForCpp.hpp"


/**-------------------------------------------------------------
 * @brief �����̌��ʂ��t�@�C���ɏ����o���B
 * @param[in]   userID_     �������s�������[�U�̂h�c
 * @param[in]   gameResult  ��������
 *-------------------------------------------------------------*/
void writeFile_GameResult(int userID_, const GameResult* gameResult_)
{
	// �����o�����W���[���쐬
	std::ofstream fileout(dataBaseResultFileName, std::ios::app);

	// �J���Ȃ������ꍇ�͏I��
	if(fileout.fail()) {
		std::cout << dataBaseResultFileName << "cannot open." << std::endl;
		assert(0);
	}

	// �o��
	fileout << "userID = " << userID_ << std::endl;
	fileout << "GameResult = " << (*gameResult_) << std::endl;

	// �t�@�C�������
	fileout.close();
}



