/*
Program 4: Array Deletion Operations

Problem Statement:
Write a C program to perform deletion operations in an array:
a) Delete from beginning
b) Delete from end
c) Delete from any position

Example:
Array: 10 20 30 40 50
Delete from beginning → 20 30 40 50
Delete from end → 10 20 30 40
Delete from position 3 → 10 20 40 50

Algorithm:
   Start
   Input size and elements of array
   For beginning: shift all elements left from index 1
   For end: reduce size by 1
   For position: shift elements left from that position
   Print updated array
   Stop
   */

   /*
   Time Complexity:
   - Delete from beginning: O(n) - shifting all elements to the left
   - Delete from end: O(1) - simply reducing the size
   - Delete from any position: O(n) - shifting elements to the left from that position
   */

   #include <stdio.h>

int main() {
    int arr[100], n, i, pos, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Delete from Beginning");
    printf("\n2. Delete from End");
    printf("\n3. Delete from Any Position");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        for(i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else if(choice == 2) {
        n--;
    }
    else if(choice == 3) {
        printf("Enter position (1 to %d): ", n);
        scanf("%d", &pos);

        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    else {
        printf("Invalid choice!");
        return 0;
    }

    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}