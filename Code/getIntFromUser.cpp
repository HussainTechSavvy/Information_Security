#include "isheader.hpp"

int getIntFromUser()
{
    int userInput = 0;
    cout << "\nEnter Your Input (Integer from 0 to 8): ";
    cin >> userInput;
    while (cin.fail())
    {
        cout << "(Error: Enter an Integer)\nEnter Your Input (Integer from 0 to 8): ";
        cin.clear();
        cin.ignore(256, '\n');
        cin >> userInput;
    }
    return userInput;
}
