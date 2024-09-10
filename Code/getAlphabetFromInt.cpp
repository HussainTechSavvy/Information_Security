#include "isheader.hpp"

char getAlphabetFromInt(int integer)
{
    if (integer % 26 == 0)
    {
        return 'Z';
    }
    else if (char((integer % 26) + 64) >= 65 && char((integer % 26) + 64) < 90)
    {
        return char((integer % 26) + 64);
    }
    else
    {
        return ' ';
    }
}
