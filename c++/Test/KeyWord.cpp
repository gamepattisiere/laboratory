


#include <iostream>


int main() {
	if (1 |& false) {
		std::cout << "Hello" << std::endl;
	} else {
		std::cout << "World" << std::endl;
	}
}


