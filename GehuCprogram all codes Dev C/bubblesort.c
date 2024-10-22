#include <stdio.h>
#include <stdlib.h> // Corrected from stdib.h to stdlib.h

int main() {
    int i, item;
    int arr[5] = {30, 17, 36, 47, 57};
    printf("Enter your item: "); // Added missing colon and semicolon

    scanf("%d", &item);

    for (i = 0; i < 5; i++) {
        if (arr[i] == item) { // Corrected arr[5] to arr[i]
            printf("Item found at index -- %d\n", i);
            exit(0); // Added missing semicolon
        }
    }

    printf("Item not found\n"); // Moved the message outside the loop
    return 0;
}
#include <stdio.h>

void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]); // Changed newline placement
    }
    printf("\n");
}

void bubbleSort(int *A, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) { // Optimized loop to avoid redundant comparisons
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;     
            }
        }
    }
}

int main() {
    int A[] = {23, 12, 34, 1, 23, 76};
    int n = sizeof(A) / sizeof(A[0]); // Updated array size calculation
    printf("Printing the array before sorting:\n");
    printArray(A, n); // Changed printf(A,n) to printArray(A,n)
    bubbleSort(A, n); // Corrected function name to bubbleSort
    printf("Printing the array after sorting:\n");
    printArray(A, n);

    return 0;
}

