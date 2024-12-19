// Programmer: Sophia Bhoria
// Date: Oct 15, 2024
// Purpose: Implements the logic for finding the maximum element and calculating occurrences in the array.

#include <iostream>
#include "header.h"

using namespace std;

// Description: Finds and returns the maximum element in the array.
// Pre: An array of integers (elements[]) and the size of the array (int).
// Post: Returns the maximum element (int).
int maxElement(int elements[], int size) {
    // Initialize the maximum value as the first element of the array
    int max = elements[0];

    // Loop through the array to find the maximum element
    for (int i = 1; i < size; i++) {
        if (elements[i] > max) {
            max = elements[i];  // Update max if a larger value is found
        }
    }

    return max;  // Return the maximum element found
}

// Description: Calculates and prints the occurrences of each element in the array.
// Pre: An array of integers (elements[]), the size of the array (int), and the maximum element (int).
// Post: Prints the occurrences of each element based on its index.
void occurrences(int elements[], int size, int max) {
    // Dynamically create an array of size max+1 to store the counts of each element
    int* result = new int[max + 1]();  // Initialize all values to 0

    // Loop through the elements array and count the occurrences of each value
    for (int i = 0; i < size; i++) {
        result[elements[i]]++;  // Increment the count of the current element
    }

    // Print the occurrences of each element from 0 to max
    for (int i = 0; i <= max; i++) {
        cout << result[i];  // Print the count of the current element
        if (i < max) {
            cout << ", ";  // Print a comma between elements (except after the last one)
        }
    }
    cout << endl;  // Print a new line after the last occurrence is printed

    // Deallocate the dynamically allocated memory for result
    delete[] result;
}

