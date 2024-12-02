@ECHO OFF
REM Navigate to the parent directory and the 'Code' folder
cd ..
cd Code || (echo Failed to navigate to the Code directory & exit /b 1)

REM Define the output executable name and source files
set OUTPUT=run.exe
set SOURCES=printMenu.cpp getOS.cpp clearScreen.cpp getIntFromUser.cpp getIntFromAlphabet.cpp getAlphabetFromInt.cpp getExitStatus.cpp shiftCipher.cpp monoalphabaticCipher.cpp vernamCipher.cpp playfairCipher.cpp hillCipher.cpp transpositionCipher.cpp rsaAlgorithm.cpp diffieHellmanAlgorithm.cpp main.cpp

REM Compile the C++ source files
g++ -o %OUTPUT% %SOURCES%
if %ERRORLEVEL% EQU 0 (
    REM Move the executable to the parent directory
    move %OUTPUT% ..\ 1>NUL || (echo Failed to move the executable & exit /b 1)

    REM Navigate back to the parent directory
    cd .. || (echo Failed to navigate back to the parent directory & exit /b 1)

    REM Run the executable
    %OUTPUT%
) else (
    echo Compilation failed.
    exit /b 1
)
