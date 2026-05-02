//Program 1: Fixed Size Array and Print Elements
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