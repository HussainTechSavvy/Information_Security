#ifndef MY_CLASS_H
#define MY_CLASS_H

#include<iostream>

using namespace std;

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
