cd ..
cd Code
if g++ -o run printMenu.cpp getOS.cpp clearScreen.cpp getIntFromUser.cpp getIntFromAlphabet.cpp getAlphabetFromInt.cpp getExitStatus.cpp shiftCipher.cpp monoalphabaticCipher.cpp vernamCipher.cpp playfairCipher.cpp hillCipher.cpp transpositionCipher.cpp rsaAlgorithm.cpp diffieHellmanAlgorithm.cpp main.cpp; then
mv run ../
cd ..
./run
fi
