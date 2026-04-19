/*
Program 3: Array Insertion Operations

Problem Statement:
Write a C program to perform insertion operations in an array:
a) Insert at beginning
b) Insert at end
c) Insert at any position

Example:
Array: 10 20 30 40
Insert 5 at beginning → 5 10 20 30 40
Insert 50 at end → 10 20 30 40 50
Insert 25 at position 3 → 10 20 25 30 40

Algorithm:

   Start
   Input size and elements of array
   For beginning: shift all elements right, insert at index 0
   For end: insert at index n
   For position: shift elements right from that position, insert value
   Print updated array
   Stop
*/
/*
Time complexity:
- Insert at beginning: O(n) - shifting all elements to the right
- Insert at end: O(1) - inserting at the last position
- Insert at any position: O(n) - shifting elements to the right from that position
*/
#include <stdio.h>

int main() {
    int arr[100], n, i, value, pos, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n1. Insert at Beginning");
    printf("\n2. Insert at End");
    printf("\n3. Insert at Any Position");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter value: ");
        scanf("%d", &value);

        for(i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = value;
        n++;
    }
    else if(choice == 2) {
        printf("Enter value: ");
        scanf("%d", &value);

        arr[n] = value;
        n++;
    }
    else if(choice == 3) {
        printf("Enter position (1 to %d): ", n);
        scanf("%d", &pos);

        printf("Enter value: ");
        scanf("%d", &value);

        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
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