/**
 * @file
 * @brief Delete �� define ���� smart_ptr �ł��Ǘ��ł���l��
 *          �t�@���N�^ deleter ������Ă݂�
 *          ���ǁAsmart_ptr �ł͏���ɊǗ�����邱�ƂɋC�Â����̂�
 *          �S���Ӗ����������ƂɋC�t����
 *
 * @author Takuya Shishido
 * @date 2009.11.25 11:13:07
 *
 * @version 0.01, Shishido Takuya, 2009.11.25 11:13:07
 *      (c) 2009 Konami Digital Entertainment Co., Ltd. All Rights Reserved.
*/


#include <iostream>
#include <vector>


/**
 * @brief allocate �f�[�^�ۑ��N���X
 *          
 * @author  Takuya Shishido
 * @date    2009.11.25 11:14:30
 * @version 0.01, Shishido Takuya, 2009.11.25 11:14:30
 */
class Data
{
public:

	unsigned int line;
	const char* file;

	Data(unsigned int line_, const char* file_)
		: line(line_)
		, fine(file_)
	{ }
};
std::vector<Data> allocData;

/**
 * @brief ��L�����𖞂������߂̃t�@���N�^
 *          
 * @author  Takuya Shishido
 * @date    2009.11.25 11:14:30
 * @version 0.01, Shishido Takuya, 2009.11.25 11:14:30
 */
class Deleter
{
public:

	/**----------------------------------------------------
	 * @brief constructor
	 *---------------------------------------------------*/
	Deleter();


	/**----------------------------------------------------
	 * @brief destructor
	 *---------------------------------------------------*/
	~Deleter();



	/**----------------------------------------------------
	 * @brief operator test
	 * @note    smart_ptr �ł��g����悤��
	 *---------------------------------------------------*/
	void operator() (void* address, unsigned int line_, const char* file_) {
		Data
	}

private:


};    // class Deleter



int main()
{


	return 0;
}


