#!/bin/bash

# Navigate to the parent directory and the 'Code' folder
cd ../Code || {
    echo "Failed to navigate to the Code directory"
    exit 1
}

# Define the output executable name and source files
OUTPUT="run"
SOURCES="printMenu.cpp getOS.cpp clearScreen.cpp getIntFromUser.cpp getIntFromAlphabet.cpp getAlphabetFromInt.cpp getExitStatus.cpp shiftCipher.cpp monoalphabaticCipher.cpp vernamCipher.cpp playfairCipher.cpp hillCipher.cpp transpositionCipher.cpp rsaAlgorithm.cpp diffieHellmanAlgorithm.cpp main.cpp"

# Compile the C++ source files
if g++ -o "$OUTPUT" "$SOURCES"; then
    # Move the compiled executable to the parent directory
    mv "$OUTPUT" ../ || {
        echo "Failed to move the executable"
        exit 1
    }

    # Navigate back to the parent directory
    cd .. || {
        echo "Failed to navigate back to the parent directory"
        exit 1
    }

    # Run the executable
    ./"$OUTPUT"
else
    echo "Compilation failed."
    exit 1
fi
