/*

Program 5: Min & Max using Divide and Conquer

Problem Statement:
Write a C program to find the minimum and maximum elements of an array using the divide and conquer technique.

Example:
Input: 10 25 5 40 15
Output:
Minimum = 5
Maximum = 40

Algorithm : 
   1. Start
   2. Declare global variables: min, max
   3. Input number of elements n
   4. Input array elements A[0...n-1]
   5. Call function maxmin(A, 0, n-1)
      Function maxmin(A, i, j)

   6. If (i == j) then
      min = A[i]
      max = A[i]

   7. Else if (i == j - 1) then
       If (A[i] < A[j]) then
             min = A[i]
             max = A[j]
       Else
              min = A[j]
              max = A[i]
   8. Else
      mid = (i + j) / 2
      Call maxmin(A, i, mid)
      min1 = min
      max1 = max

      Call maxmin(A, mid+1, j)
      min2 = min
      max2 = max

      If (min1 < min2) then
           min = min1
      Else
           min = min2

      If (max1 > max2) then
           max = max1
      Else
           max = max2

9. Return
*/

/*
Time Complexity:
best csase - O(n) - when the array is already sorted in increasing or decreasing order, we can find the minimum and maximum in a single pass.
worst case - O(n) - when the array is unsorted, we need to compare each element to find the minimum and maximum, which takes linear time.
*/

#include <stdio.h>

int min, max;  // Global variables

void maxmin(int arr[], int i, int j) {
    int mid;

    if (i == j) {
        min = arr[i];
        max = arr[i];
    }
    else if (i == j - 1) {
        if (arr[i] < arr[j]) {
            min = arr[i];
            max = arr[j];
        } else {
            min = arr[j];
            max = arr[i];
        }
    }
    else {
        int min1, max1, min2, max2;

        mid = (i + j) / 2;

        // Left part
        maxmin(arr, i, mid);
        min1 = min;
        max1 = max;

        // Right part
        maxmin(arr, mid + 1, j);
        min2 = min;
        max2 = max;

        // Combine
        if (min1 < min2)
            min = min1;
        else
            min = min2;

        if (max1 > max2)
            max = max1;
        else
            max = max2;
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    maxmin(arr, 0, n - 1);

    printf("Minimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}