// Programmer: Sophia Bhoria
// Date: Oct 15, 2024
// Purpose: Handles user input, calls functions to find the maximum element and print the occurrences of each element in the array.

#include <iostream>
#include "header.h"

using namespace std;

int main() {
    const int size = 8;  // Define the size of the array as 8
    int elements[size];  // Declare an array named 'elements' to hold 8 integers

    // Prompt the user to enter 8 integers
    cout << "Enter 8 integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> elements[i];  // Read input from the user for each element of the array
    }

    // Find the maximum element in the array by calling the maxElement function
    int max = maxElement(elements, size);

    // Calculate and print the occurrences of each element in the array
    occurrences(elements, size, max);

    return 0;  // Return 0 to indicate successful program termination
}
