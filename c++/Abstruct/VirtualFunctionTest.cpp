


#include <iostream>


class Virtual
{
public:

	virtual int getter()
	{
		return 1;
	}
};



class Main : public Virtual
{
public:

	int getter()
	{
		int local = 1;

		// 継承もとの関数を呼び出したい
		local += Virtual::getter();
		//local += __super::getter();

		return local;
	}
};



int main()
{
	Main main1;

	// 2 と出れば期待通り
	std::cout << main1.getter() << std::endl;

	return 0;
}


