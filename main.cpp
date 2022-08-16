//This is Beta Version
#include"csheader.hpp"

int main()
{
	cout << "Main File Test" << endl;
	bool exitStatus = true;
	while(exitStatus)
	{
		cout << "Enter Your Input (int): ";	
		switch(getIntFromUser())
		{
			case 0:
			{
				exitStatus = false;
				break;
			}
			case 1:
			{
				shiftCipher();
				break;
			}
			case 2:
			{
				monoalphabaticCipher();
				break;
			}
			case 3:
			{
				vernamCipher();
				break;
			}
			case 4:
			{
				playfairCipher();
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				break;
			}
			case 7:
			{
				break;
			}
			case 8:
			{
				break;
			}
			default:
			{
				cout << "(Error: Enter Correct Integer)" << endl;
			}
		}
	}
	return 0;
}
