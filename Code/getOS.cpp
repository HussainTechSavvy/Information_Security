#include "isheader.hpp"

int getOS()
{
    #ifdef _WIN32
	return 1;
    #elif _WIN64
	return 1;
    #elif __APPLE__ || __MACH__
	return 2;
    #elif __linux__
	return 3;
    #else
	return 0;
    #endif
}
