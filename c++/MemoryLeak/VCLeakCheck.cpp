

#include <iostream>
#include <crtdbg.h>



int main()
{


	_CrtDumpMemoryLeaks();	// この時点で開放されていないメモリの情報の表示
	return 0;
}


