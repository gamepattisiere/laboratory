

#include <iostream>
#include <boost/utility.hpp>
#include <boost/any.hpp>
#include <boost/static_assert.hpp>


#define STATIC_ASSERT(cond)        extern int assert_function(int [(cond)?1:-1])


using namespace std;


//! \brief ���^�v���O���~���O�E����p���C�u�����B
//! \note   is_class, has_xxx ���� SFINAE �����܂��g�ݍ��킹�邽�߂̂���
//!         boost �̂��̂Ɠ��@�\�Ȃ̂Ŏԗւ̍ĊJ���ł��B
//!         �m��p
//! \author  Takuya Shishido
//! \date    2010.10.18 15:09:24
//! \version 0.01, Shishido Takuya, 2010.10.18 15:09:24
template<bool B, typename T = void>
struct enable_if_c {
	typedef T type;
};
template<typename T>
struct enable_if_c<false, T> {};

template<typename Cond, typename T = void>
struct enable_if : public enable_if_c<Cond::value, T> {};



//! \brief ���^�v���O���~���O�E����p���C�u�����B
//!          is_class, has_xxx ���� SFINAE �����܂��g�ݍ��킹�邽�߂̂���
//!          boost �̂��̂Ɠ��@�\�Ȃ̂Ŏԗւ̍ĊJ���ł��B
//!          �ے�p
//! \author  Takuya Shishido
//! \date    2010.10.18 15:09:24
//! \version 0.01, Shishido Takuya, 2010.10.18 15:09:24
template<bool B, typename T = void>
struct disable_if_c {
	typedef T type;
};

template<typename T>
struct disable_if_c<true, T> {};

template<typename Cond, typename T = void>
struct disable_if : public disable_if_c<Cond::value, T> {};


//! \brief requestDataType �� typedef ���Ă��邩�ǂ����̔���p
//! \author  Takuya Shishido
//! \date    2010.10.18 15:09:24
//! \version 0.01, Shishido Takuya, 2010.10.18 15:09:24
template<typename T>
class has_requestDataType {
	typedef char yes;
	typedef struct { char a[2]; } no;

	template<typename U>
	static yes test(typename U::requestDataType*);

	template<typename U>
	static no test(...);
public:
	static const bool value = sizeof(test<T>(0)) == sizeof(yes);
};


//�I�[�o�[���[�h����
template< typename T >
class has_setData_impl {

	typedef char yes_type ;
	typedef struct { char c[8]; } no_type ;

	template< typename U >
	static yes_type check( U *, void (U::*)(const typename T::requestDataType&) = &T::setData);


	template< typename U >
	static no_type check(...) ;
public:
	static const bool value = sizeof( check<T>( NULL ) ) == sizeof( yes_type ) ;
};


/*
    �� �g����
        �P�DTest �̂悤�Ƀf�[�^���Z�b�g���Ă��炢�����ꍇ��
                ���̌^�� requestDataType �Ƃ��� typedef ����B
        �Q�DsetData(Data& data_) �֐�����������iData& data_�j�̕����͔C�ӁB
                requestDataType& �^���ƊԈႢ�͂����ɂ���
*/


class Data {
public:
	Data(int integer_ = 0) : integer(integer_) {}

	int integer;
};

class Data1 {
public:
	Data1(int integer_ = 0) : integer(integer_) {}

	int integer;
};


class Test {
public:
	typedef Data requestDataType;
	typedef Data1 requestDataType1;

	void setData(const requestDataType& data_) { this->data = data_; }
	void setData(const requestDataType1& data_) { this->data1 = data_; }

	requestDataType data;
	requestDataType1 data1;
};


//! \brief requestDataType �� typedef ���Ă���ꍇ�̃N���X�p�̃f�[�^�Z�b�g�֐�
//! \note   requestDataType �������ꍇ���ʂɒ�`���Ă���
//              �g�����͕��ʂ̊֐��Ɠ����悤�ɂQ�ڂ܂ň����Ƀf�[�^���Z�b�g���Ă��
//! \param[in]  collector_  �f�[�^���Z�b�g���ė~������
//! \param[in]  data_       �Z�b�g�����f�[�^
//! \retval     true        �f�[�^�̓Z�b�g���ꂽ
//! \retval     false       boost::any_cast �ɂ� setData �Ŋ��҂���Ă����^�ւ̕ϊ��Ɏ��s����
template <typename Collecter, typename Data>
bool setData(Collecter& collector_, Data& data_, typename enable_if<has_requestDataType<Collecter> >::type* = 0) {
	bool result = true;
	result = callSetData(collector_, data_);
	return result;
}


//! \brief requestDataType �� typedef ���Ă��Ȃ��N���X�p�̃f�[�^�Z�b�g�֐�
//! \note   �������Ȃ�
template <typename Collecter, typename Data>
bool setData(Collecter& collector_, Data& data_, typename boost::disable_if<has_requestDataType<Collecter> >::type* = 0) {
	bool result = true;
	cout << "No setData" << endl;
	return result;
}


// SetData ������ꍇ�Ă΂��
template<typename Collecter, typename Data>
bool callSetData(Collecter& collector_, typename Data data_,
				 typename boost::enable_if< has_setData_impl<Collecter> >::type* = 0 )
{
	cout << "enable_if" << endl;
	cout << __FUNCTION__ << endl;
	bool result = true;
	try {
		collector_.setData(boost::any_cast<Collecter::requestDataType>(data_));
	} catch (boost::bad_any_cast& ) {
		result = false;
	}
	return result;
}

class NoRequest {
public:
	//typedef int requestDataType;

	//void setData(const int& integer_) { this->integer = integer_; }

	NoRequest(int integer_ = 0) : integer(integer_) {}
	int integer;
};

int main() {
	Test test;
	Data data;
	NoRequest noRequest;

	setData(test, data);
	setData(noRequest, data);
}