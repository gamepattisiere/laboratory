/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date   2010.04.14 11:09:31
 *
 * @version 0.01, Shishido Takuya, 2010.04.14 11:09:31
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef STORAGE_HPP_INCLUDED
#define STORAGE_HPP_INCLUDED

//-----------------------------------------------------
//  includ
//-----------------------------------------------------
#include <vector>
#include "ReciprocateData.h"


/**----------------------------------------------------
 * @brief �f�[�^�i�[���ς񂾃f�[�^�� error ����t������
 * @note        �`�F�b�N�p�B�{���b������ error �����Ċi�[���邱�Ƃ͂Ȃ��͂��c
 * @param[in]   data_   ��ʂ�̃f�[�^�̊i�[���ς񂾃f�[�^
 * @return      data_ �� error �������f�[�^
 *---------------------------------------------------*/
ReciprocateData* bindDataOnWithError(ReciprocateData* data_, const char* errorWord_);



/**----------------------------------------------------
 * @brief �f�[�^�i�[
 * @param[in]   data_   �i�[����f�[�^
 * @param[in]   key_    �L�[
 * @return      data_ ����菑���ɕ���Ċi�[�����f�[�^�̃A�h���X
 *---------------------------------------------------*/
ReciprocateData* storage_Int(int data_, const char* key_);


/**----------------------------------------------------
 * @brief �f�[�^�i�[
 * @param[in]   data_   �i�[����f�[�^
 * @param[in]   key_    �L�[
 * @return      data_ ����菑���ɕ���Ċi�[�����f�[�^�̃A�h���X
 *---------------------------------------------------*/
ReciprocateData* storage_IntArray(const std::vector<int>& data_, const char* key_);


/**----------------------------------------------------
 * @brief �f�[�^�i�[
 * @param[in]   data_   �i�[����f�[�^
 * @param[in]   key_    �L�[
 * @return      data_ ����菑���ɕ���Ċi�[�����f�[�^�̃A�h���X
 *---------------------------------------------------*/
ReciprocateData* storage_String(const char* data_, const char* key_);


/**----------------------------------------------------
 * @brief �f�[�^�i�[
 * @param[in]   data_   �i�[����f�[�^
 * @param[in]   key_    �L�[
 * @return      data_ ����菑���ɕ���Ċi�[�����f�[�^�̃A�h���X
 *---------------------------------------------------*/
//ReciprocateData* storage_Error(const char* data_, const char* key_);




#endif
