// 日本語
#include <iostream>


class Test {
public:
	int integer_;
};


void func() {
	int integer_ = 0;
}


int main() {
	try {
		// 日本語入力テスト
		std::cout << "Hello" << std::endl;
		Test test;

		test.integer_ = 4;
		std::cout << test.integer_ << std::endl;
	} catch (...) {
		std::cerr << "catch some error" << std::endl;
	}
}
