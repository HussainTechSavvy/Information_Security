#include "csheader.hpp"

bool getExitStatus()
{
    char userInput;
    bool exitCode;
    cout << "\nDo you want to continue?(Y/N): ";
    cin >> userInput;

    while (cin.fail())
    {
        cout << "(Error: Enter a Character)\nDo you want to continue?(Y/N): ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> userInput;
    }

    if (userInput == 'y' || userInput == 'Y')
    {
        return true;
    }
    else
    {
        return false;
    }
}