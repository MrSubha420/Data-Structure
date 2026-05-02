/*
Program 4: Array Deletion Operations

Problem Statement:
Write a C program to perform deletion operations in an array:
a) Delete from end
b) Delete from any position

Example:
Array: 10 20 30 40 50
Delete from end → 10 20 30 40
Delete from position 3 → 10 20 40 50

Algorithm:
   Algorithm: Delete an element from an array with condition check

Start
Input number of elements n
Input array elements arr[n]
Input element item to be deleted
Set index = -1
Traverse array from i = 0 to n-1
If arr[i] == item
→ set index = i and break
If index == -1
Print "Element not found" and Stop
Else
If index == n-1
→ Print "Element is at last position, no shifting required"
→ Decrease size: n = n - 1
Else
→ Print "Element is not last, perform left shifting"
→ For i = index to n-2
→ arr[i] = arr[i+1]
→ Decrease size: n = n - 1
Print updated array
Stop
   */

/*
   Time Complexity:
   - Delete from end: O(1) - simply reducing the size
   - Delete from any position: O(n) - shifting elements to the left from that position
*/

#include <stdio.h>

int main() {
    int arr[100], n, i, item, index = -1;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to delete
    printf("Enter element to delete: ");
    scanf("%d", &item);

    // Search element
    for(i = 0; i < n; i++) {
        if(arr[i] == item) {
            index = i;
            break;
        }
    }

    // Check existence
    if(index == -1) {
        printf("Element not found\n");
    } else {
        if(index == n - 1) {
            printf("Element is at last position, no shifting required\n");
            n--;  // delete last element
        } else {
            printf("Element is not last, performing left shift\n");
            for(i = index; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }

        // Print updated array
        printf("Updated array:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}