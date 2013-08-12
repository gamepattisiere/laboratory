


#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>

#include <iostream>
#ifdef _DEBUG
#define new new(_NORMAL_BLOCK,__FILE__,__LINE__)     // これが重要
#endif


int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
    //_CrtSetBreakAlloc( num );    // num は取得された番号

	{
		void* voider = reinterpret_cast<void*>(0x00112233);
	}

	 _CrtDumpMemoryLeaks();

	return 0;
}


