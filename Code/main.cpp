#include "isheader.hpp"

int main()
{
	bool exitStatus = true;
	while(exitStatus)
	{
		printMenu();
		switch(getIntFromUser())
		{
			case 0:
			{
				system("cls");
				exitStatus = false;
				break;
			}
			case 1:
			{
				cout << getOS() << endl;
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
				hillCipher();
				break;
			}
			case 6:
			{
				transpositionCipher();
				break;
			}
			case 7:
			{
				rsaAlgorithm();
				break;
			}
			case 8:
			{
				diffieHellmanAlgorithm();
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
