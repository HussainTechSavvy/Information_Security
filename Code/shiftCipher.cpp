#include "isheader.hpp"

int shiftCipher()
{
	bool exitCode = true;
	clearScreen();
	cout << "\n\n\t\tBREAKING THE SHIFT CIPHER" << endl;
	cout << "\t\t-------- --- ----- ------" << endl;
	cout << getOS() << endl;

	while (exitCode)
	{
		string plainText = "", cipherText = "";
		int key;

		cin.clear();
		cin.ignore(256, '\n');
		cout << "\n\tEnter the Plain Text (String): ";
		getline(cin, plainText);
		cout << "\n\tEnter your key (int)         : ";
		cin >> key;
		
		while (cin.fail())
		{
			cout << "\n(Error: Enter an Integer)\n\tEnter your key (int)         : ";
			cin.clear();
			cin.ignore(256,'\n');
			cin >> key;
		}

		for (int i = 0; i < plainText.length(); i++)
		{
			if (char(plainText[i]) >= 97 && char(plainText[i]) <= 122)
			{
				plainText[i] = plainText[i] - 32;
			}

			if (char(plainText[i]) >= 65 && char(plainText[i]) <= 90)
			{
				cipherText += getAlphabetFromInt(getIntFromAlphabet(plainText[i]) + key);
			}
			else if (char(plainText[i]) == 32)
			{
				cipherText += ' ';
			}
		}

		cout << "\n\t                  Cipher Text: " << cipherText << endl;

		exitCode = getExitStatus();
	}

	return 0;
}
