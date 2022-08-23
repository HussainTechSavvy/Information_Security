#include"csheader.hpp"

char getAlphabetFromInt(int integer)
{
    cout << "Get Alphabet From Int" << endl;
    if(integer%26 == 0)
    {
        return 'Z';
    }
    else
    {
        return char((integer%26)+64);
    }
}