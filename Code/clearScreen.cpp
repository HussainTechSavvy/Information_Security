#include "isheader.hpp"

void clearScreen()
{
    int os = getOS();
    if(os != 0)
    {
        if(os == 1 || os == 2)
        {
            system("clear");
        }
        else if (os == 3)
        {
            system("cls");
        }
        
    }
}