@ECHO OFF
cd..
cd Code
g++ -o run printMenu.cpp getIntFromUser.cpp getIntFromAlphabet.cpp getAlphabetFromInt.cpp getExitStatus.cpp shiftCipher.cpp monoalphabaticCipher.cpp vernamCipher.cpp playfairCipher.cpp hillCipher.cpp transpositionCipher.cpp rsaAlgorithm.cpp diffieHellmanAlgorithm.cpp main.cpp
if %errorlevel% == 0 (
    move run.exe ..\
    cd..
    run.exe
) else (
    pause
)