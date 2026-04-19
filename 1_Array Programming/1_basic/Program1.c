/*
Program 1: Fixed Size Array and Print Elements

Problem Statement:
Write a C program to declare a fixed-size array, store elements in it, and print all the elements.

Example:
Input: 5 elements → 10 20 30 40 50
Output: 10 20 30 40 50

Algorithm:
   Start
   Declare an array with fixed size (e.g., size = 5)
   Take input for array elements
   Traverse the array using a loop
   Print each element
   Stop
*/
/*
Time complexity: 
at all the cases time complexity is O(1) because we are just declaring an array and printing its elements, which takes constant time regardless of the number of elements in the array.
*/

#include <stdio.h>

int main() {
    int arr[5];  // Fixed size array
    int i;

    // Input elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}