#include "isheader.hpp"

int getOS()
{
    #ifdef __linux__
    return 1;
    #elif __APPLE__ || __MACH__
	return 2;
    #elif _WIN32 || _WIN64
	return 3;
    #else
	return 0;
    #endif
}
