/**
 * @file
 * @brief 
 *
 * @author Takuya Shishido
 * @date   2010.04.06 14:07:58
 *
 * @version 0.01, Shishido Takuya, 2010.04.06 14:07:58
 *      (c) 2010 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/

#ifndef RECIPROCATEDATAFORCPP_HPP_INCLUDED
#define RECIPROCATEDATAFORCPP_HPP_INCLUDED

//-----------------------------------------------------
//  include
//-----------------------------------------------------
#include <iostream>
#include "ReciprocateData.h"


/**----------------------------------------------------
 * @brief �o�͗p�� operator <<
 * @param[in]  os               �X�g���[���I�u�W�F�N�g
 * @param[in]  dataSet_         �o�̓I�u�W�F�N�g
 *---------------------------------------------------*/
std::ostream& operator<<(std::ostream& os, const ReciprocateData& reciprocateData_);


#endif  // RECIPROCATEDATAFORCPP_HPP_INCLUDED
