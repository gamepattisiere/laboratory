/**
 * @file
 * @brief �C���^�[�t�F�[�X�����B
 * @note    �������Ăb���ł̓f�[�^�̂������s���B
 *
 * @author Takuya Shishido
 * @date 2010.04.07 14:37:55
 *
 * @version 0.01, Shishido Takuya, 2010.04.07 14:37:55
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef RECIPROCATE_H_INCLUDED
#define RECIPROCATE_H_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Structure/PlayerData.h"
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Structure/TeamData.h"
#include "D:/PersonalTool/xyzzy/laboratory/LeagueMode/Structure/DBError.h"


#ifdef __cplusplus
extern "C" {
#endif



/**-------------------------------------------------------------
 * @brief ID �𗊂�� �c�a ����f�[�^������Ă���
 * @note    �C���[�W�I�ɂ͂���̎����� perl �ƂȂ����Ă��āA
 *              �Ԃ�l�͂���ɂ���ē���ꂽ�f�[�^
 * @param[in]       command_    �R�}���h�itype=INT,value=playerNumber�j
 * @param[out]      data_       �f�[�^�i�[��
 * @return          �c�a�G���[�̓��e
 *------------------------------------------------------------*/
DBError findPlayerData_by_Number(ReciprocateData* command_, PlayerData* data_);


/**-------------------------------------------------------------
 * @brief ���O�𗊂�� �c�a ����f�[�^������Ă���
 * @note    �C���[�W�I�ɂ͂���̎����� perl �ƂȂ����Ă��āA
 *              �Ԃ�l�͂���ɂ���ē���ꂽ�f�[�^
 * @param[in]       command_    �R�}���h�itype=STRING,value=playerName�j
 * @param[out]      data_       �f�[�^�i�[��
 * @return          �c�a�G���[�̓��e
 *------------------------------------------------------------*/
DBError findPlayerData_by_PlayerName(ReciprocateData* command_, PlayerData* data_);


/**-------------------------------------------------------------
 * @brief �`�[���̖��O�𗊂�ɁA���̃`�[���ɏ�������I��̃f�[�^�ꗗ��
 *              �c�a �������Ă���
 * @note    �C���[�W�I�ɂ͂���̎����� perl �ƂȂ����Ă��āA
 *              �Ԃ�l�͂���ɂ���ē���ꂽ�f�[�^
 * @param[in]       command_    �R�}���h�itype=string,value=teamName�j
 * @param[out]      data_       �f�[�^�i�[��
 * @return          �c�a�G���[�̓��e
 *------------------------------------------------------------*/
DBError findPlayerDataByTeamName(ReciprocateData* command_, TeamData* data_);


/**-------------------------------------------------------------
 * @brief �������ʂ� perl �ɓn��
 * @note    �C���[�W�I�ɂ͂���̎����� perl �ƂȂ����Ă���B
 * @param[in]       command_    �R�}���h�itype=string,value=teamName�j
 * @return          �c�a�G���[�̓��e
 *------------------------------------------------------------*/
DBError sendGameResult(ReciprocateData* command_);


#ifdef __cplusplus
}
#endif



#endif

