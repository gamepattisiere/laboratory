// “ú–{Œê


#include <iostream>
#include <vector>
#include <initializer_list>


class Base {
	virtual int GetInt() const throw() = 0;
};

class Hoge
	: public Base
{
public:
	int integer_;

	int GetInt() const throw() {
		return this->integer_;
	}
	int GetInt() {
		return this->integer_;
	}
	template<typename T>
	void Print(const T& value) {
		std::cerr << value << "\n";
	}
};

int main() {
	Hoge hoge;
	hoge.integer_;
}

