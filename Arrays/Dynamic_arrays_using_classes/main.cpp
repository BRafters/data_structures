#include <iostream>
#include "container.h"

// This program will demonstrate dynamic arrays using classes

int main() {
    // Create the array
    container<int> dArray;

    // Insert elements into the array
    for (int i = 0; i < 6; ++i) {
        dArray.insert(i+1);
    }

    // Retrieve an element from the third index of the array
    std::cout << dArray[3] << std::endl;

    // Retrieve an element outsize of the array (error supposed to occur)
    std::cout << dArray[8] << std::endl;

    // Print out the entirety of the array
    std::cout << dArray << std::endl;

}
