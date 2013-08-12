


#include <iostream>
#include <cstdlib>


void out(const char* strings) throw() {
	std::cerr << strings << std::endl;
}

int main() {
	unsigned char strings[0x100];
	memset(strings, 0, sizeof(strings));

	out(strings);
}

