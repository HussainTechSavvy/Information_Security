#include"csheader.hpp"

int getIntFromAlphabet(char alphabet)
{
	cout << "Get Int From Alphabets" << endl;
	if(int(alphabet)>=65 && int(alphabet)<=90)
    {
        return int(alphabet)-64;
    }
	return 0;
}
