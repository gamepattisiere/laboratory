/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date   2010.04.13 16:00:17
 *
 * @version 0.01, Shishido Takuya, 2010.04.13 16:00:17
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef PARSE_H_INCLUDED
#define PARSE_H_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include <vector>
#include "ReciprocateData.h"


#ifdef __cplusplus
extern "C" {
#endif

/**----------------------------------------------------
 * @brief Perl ������󂯎�����f�[�^����͂���
 * @param[in]       reciprocateData_    Perl ����󂯎�����f�[�^
 * @return          reciprocateData_->type �^�̃f�[�^�� void* �ɕϊ���������
 *---------------------------------------------------*/
const void* getKeyValue(const ReciprocateData& reciprocateData_, const char* key, std::vector<int> node_ = std::vector<int>());


#ifdef __cplusplus
}
#endif

#endif

