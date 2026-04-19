/*
Program 2: Dynamic Size Array 

Problem Statement:
Write a C program to create an array whose size is given at runtime and print its elements.

Example:
Input:
Enter size = 5
Elements → 10 20 30 40 50
Output:
10 20 30 40 50

Algorithm:

   Start
   Declare an integer n
   Take size input from user
   Declare array using int arr[n]
   Input elements into the array
   Traverse and print elements
   Stop

*/   

/*
time complexity: 
at all the cases time complexity is O(n) because we are taking input for n elements and then printing them, which takes linear time with respect to the number of elements in the array.
*/

#include <stdio.h>

int main() {
    int n, i;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Variable Length Array

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}