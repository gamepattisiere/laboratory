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

#ifndef FILEWRITE_HPP_INCLUDED
#define FILEWRITE_HPP_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include "../GameResult.h"


#ifdef __cplusplus
extern "C" {
#endif

/**-------------------------------------------------------------
 * @brief �����̌��ʂ��t�@�C���ɏ����o���B
 * @param[in]   userID_     �������s�������[�U�̂h�c
 * @param[in]   gameResult  ��������
 *-------------------------------------------------------------*/
void writeFile_GameResult(int userID_, const GameResult* gameResult_);

#ifdef __cplusplus
}
#endif


#endif

