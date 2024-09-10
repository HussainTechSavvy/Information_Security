#include "isheader.hpp"

int getIntFromAlphabet(char alphabet)
{
    if (int(alphabet) >= 65 && int(alphabet) <= 90)
    {
        return int(alphabet) - 64;
    }
    return 0;
}
