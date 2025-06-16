#include <stdio.h>
#include <stdlib.h>
#define MAX_SET_SIZE 100

void printSet(int set[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d", set[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

int main() {
    int sizeA, sizeB, A[sizeA], B[sizeB], i, j;

    printf("Enter the number of elements for Set A (max %d): ", MAX_SET_SIZE);
    if (scanf("%d", &sizeA) != 1 || sizeA <= 0 || sizeA > MAX_SET_SIZE) {
        printf("Invalid size for Set A. Please enter a positive integer up to %d.\n", MAX_SET_SIZE);
        return 1;
    }

    printf("Enter %d elements for Set A:\n", sizeA);
    for (i = 0; i < sizeA; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &A[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    printf("\nEnter the number of elements for Set B (max %d): ", MAX_SET_SIZE);
    if (scanf("%d", &sizeB) != 1 || sizeB <= 0 || sizeB > MAX_SET_SIZE) {
        printf("Invalid size for Set B. Please enter a positive integer up to %d.\n", MAX_SET_SIZE);
        return 1;
    }

    printf("Enter %d elements for Set B:\n", sizeB);
    for (i = 0; i < sizeB; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &B[i]) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
        }
    }

    printf("\nSet A: ");
    printSet(A, sizeA);

    printf("Set B: ");
    printSet(B, sizeB);

    printf("\nCartesian Product (A x B):\n");
    printf("{ ");
    for (i = 0; i < sizeA; i++) {
        for (j = 0; j < sizeB; j++) {
            printf("(%d, %d)", A[i], B[j]);
            if (!(i == sizeA - 1 && j == sizeB - 1)) {
                printf(", ");
            }
        }
    }
    printf(" }\n");

    return 0;
}
