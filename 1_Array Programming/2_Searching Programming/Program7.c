/* 
Program: Binary Search using Divide and Conquer (Recursive)

Problem Statement:
Write a C program to implement Binary Search using divide and conquer strategy.

Important Condition: Binary Search works only on a sorted array

Algorithm (DAC Style):
   Start
   Input number of elements n
   Input sorted array A[0...n-1]
   Input element to search key
   Call binarySearch(A, low, high, key)
   If low > high → return -1 (not found)
   Find mid = (low + high) / 2
   Else- if A[mid] == key → return position
   Elase-If key < A[mid] → search left half cy call binarySearch(A, low, mid-1, key)
   Else → search right half by call binarySearch(A, mid+1, high, key)
   Stop

   Time Complexity:
   Best Case : O(1) - if the element is found at the middle position in the first comparison.
   Worst Case : O(log n) - if the element is not found or found at the beginning or end of the array, we need to divide the array log n times.
*/

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    int mid;

    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, high, key);
}

int main() {
    int arr[100], n, i, key, result;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if(result != -1)
        printf("Element found at position %d\n", result + 1);
    else
        printf("Element not found");

    return 0;
}