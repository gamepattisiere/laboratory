/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date 2010.04.07 15:08:09
 *
 * @version 0.01, Shishido Takuya, 2010.04.07 15:08:09
 *      (c) 2009 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/


//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include <iostream>
#include <cassert>
#include "GameResultForCpp.hpp"


/**----------------------------------------------------
 * @brief �o�͗p�� operator <<
 * @note       ������Ƌ��������������� TODO
 * @param[in]  os               �X�g���[���I�u�W�F�N�g
 * @param[in]  dataSet_         �o�̓I�u�W�F�N�g
 *---------------------------------------------------*/
std::ostream& operator<<(std::ostream& os, const GameResult& gameResult_)
{
	os << "DataType :: GameResult" << std::endl;
	os << "name : " << gameResult_.name << std::endl;
	os << "system time : " << gameResult_.time << std::endl;

	tm* time = localtime(&gameResult_.time);
	os << "year:" << time->tm_year << ", day:" << time->tm_mon << ":" << time->tm_mday <<
		", time:" << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << std::endl;

	os << "score : " << gameResult_.score << std::endl;

	switch (gameResult_.victory) {
		case GAMERESULTCATEGORY_WIN: {
			os << "victory? : Win!"<< std::endl;
			break;
		}
		case GAMERESULTCATEGORY_LOSE: {
			os << "victory? : Lose..."<< std::endl;
			break;
		}
		case GAMERESULTCATEGORY_PKWIN: {
			os << "victory? : PK Win!"<< std::endl;
			break;
		}
		case GAMERESULTCATEGORY_PKLOSE: {
			os << "victory? : PK Lose..."<< std::endl;
			break;
		}
		case GAMERESULTCATEGORY_INVALID: {
			os << "victory? : Invalid Game!!!!"<< std::endl;
			break;
		}
		case GAMERESULTCATEGORY_MAX:
		// �� through down
		default: {
			assert(0);
			break;
		}
	}

	return os;
}



