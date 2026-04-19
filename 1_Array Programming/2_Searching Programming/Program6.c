/* 
Program: Linear Search in C

Problem Statement:
Write a C program to implement Linear Search and find the position of a given element.

Algorithm:
   Start
   Input number of elements n
   Input array elements A[0...n-1]
   Input element to search key
   For i = 1 to n
   If A[i] == key, print position and stop
   If element not found, print "Not Found"
   Stop
   */

   /*
   Time Complexity : 
   Best Case : O(1) - if element is found at the first position
   Worst Case : O(n) - if element is found at the last position or not found at all, i.e., we have to traverse the entire array.
   */

 #include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i + 1; // return position starting from 1
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, n, key);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", result);

    return 0;
}