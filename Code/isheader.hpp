#ifndef IS_HEADER
#define IS_HEADER

#include<iostream>

using namespace std;

int getOS();
void printMenu();
int getIntFromUser();
int getIntFromAlphabet(char alphabet);
char getAlphabetFromInt(int integer);
bool getExitStatus();
int shiftCipher();
int monoalphabaticCipher();
int vernamCipher();
int playfairCipher();
int hillCipher();
int transpositionCipher();
int rsaAlgorithm();
int diffieHellmanAlgorithm();

#endif
