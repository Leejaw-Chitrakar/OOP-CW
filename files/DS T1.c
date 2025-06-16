#include <stdio.h>
#include <stdbool.h>

void printSet(int set[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

bool containsElement(int set[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (set[i] == element) {
            return true;
        }
    }
    return false;
}

void findUnion(int A[], int sizeA, int B[], int sizeB, int UN[], int *unionSize) {
    *unionSize = 0;
    for (int i = 0; i < sizeA; i++) {
        UN[*unionSize] = A[i];
        (*unionSize)++;
    }
    for (int i = 0; i < sizeB; i++) {
        if (!containsElement(UN, *unionSize, B[i])) {
            UN[*unionSize] = B[i];
            (*unionSize)++;
        }
    }
}

void findIntersection(int A[], int sizeA, int B[], int sizeB, int IN[], int *intersectionSize) {
    *intersectionSize = 0;
    for (int i = 0; i < sizeA; i++) {
        if (containsElement(B, sizeB, A[i])) {
            if (!containsElement(IN, *intersectionSize, A[i])) {
                IN[*intersectionSize] = A[i];
                (*intersectionSize)++;
            }
        }
    }
}

void findDifference(int A[], int sizeA, int B[], int sizeB, int differenceSet[], int *differenceSize) {
    *differenceSize = 0;
    for (int i = 0; i < sizeA; i++) {
        if (!containsElement(B, sizeB, A[i])) {
            differenceSet[*differenceSize] = A[i];
            (*differenceSize)++;
        }
    }
}

void findComplement(int U[], int sizeU, int targetSet[], int sizeTarget, int complementSet[], int *complementSize) {
    *complementSize = 0;
    for (int i = 0; i < sizeU; i++) {
        if (!containsElement(targetSet, sizeTarget, U[i])) {
            complementSet[*complementSize] = U[i];
            (*complementSize)++;
        }
    }
}

int main() {
    int A[] = {1, 2, 3, 4, 5}, sizeA = sizeof(A) / sizeof(A[0]),
        B[] = {4, 5, 6, 7, 8}, sizeB = sizeof(B) / sizeof(B[0]),
        U[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sizeU = sizeof(U) / sizeof(U[0]),
        choice,
        UN[sizeA + sizeB], unionSize,
        IN[sizeA < sizeB ? sizeA : sizeB], intersectionSize,
        diffAB[sizeA], sizeDiffAB,
        diffBA[sizeB], sizeDiffBA,
        CamA[sizeU], sizeCamA,
        CamB[sizeU], sizeCamB;

    printf("Set A: ");
    printSet(A, sizeA);
    printf("Set B: ");
    printSet(B, sizeB);
    printf("Universal Set (U): ");
    printSet(U, sizeU);
    printf("\n");

    printf("Choose a set operation:\n");
    printf("1. Union (A U B)\n");
    printf("2. Intersection (A n B)\n");
    printf("3. Difference (A - B and B - A)\n");
    printf("4. Complement (A^c and B^c)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            findUnion(A, sizeA, B, sizeB, UN, &unionSize);
            printf("Union (A U B): ");
            printSet(UN, unionSize);
            break;
        }
        case 2: {
            findIntersection(A, sizeA, B, sizeB, IN, &intersectionSize);
            printf("Intersection (A n B): ");
            printSet(IN, intersectionSize);
            break;
        }
        case 3: {
            findDifference(A, sizeA, B, sizeB, diffAB, &sizeDiffAB);
            printf("Difference (A - B): ");
            printSet(diffAB, sizeDiffAB);

            findDifference(B, sizeB, A, sizeA, diffBA, &sizeDiffBA);
            printf("Difference (B - A): ");
            printSet(diffBA, sizeDiffBA);
            break;
        }
        case 4: {
            findComplement(U, sizeU, A, sizeA, CamA, &sizeCamA);
            printf("Complement of A (A^c): ");
            printSet(CamA, sizeCamA);

            findComplement(U, sizeU, B, sizeB, CamB, &sizeCamB);
            printf("Complement of B (B^c): ");
            printSet(CamB, sizeCamB);
            break;
        }
        default: {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
        }
    }

    return 0;
}
