// Programmer: Sophia Bhoria
// Date: Oct 15, 2024
// Purpose: Declares the function prototypes to be shared between main.cpp and functions.cpp

#ifndef HEADER_H
#define HEADER_H

// Function prototypes for maxElement and occurrences

// Finds the maximum element in the given array.
// Pre: An array of integers and its size (int).
// Post: Returns the maximum element (int).
int maxElement(int elements[], int size);

// Calculates and prints the occurrences of each element in the array.
// Pre: An array of integers, the size of the array, and the maximum element (int).
// Post: Prints the occurrences of each element.
void occurrences(int elements[], int size, int max);

#endif
