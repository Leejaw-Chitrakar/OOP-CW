#include <stdio.h>
#include <math.h>
#define U_size 5

void printF(float F[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("(%d, %.2f)", i, F[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

void F_U(float FA[], float FB[], float resultF[], int size) {
    for (int i = 0; i < size; i++) {
        resultF[i] = fmax(FA[i], FB[i]);
    }
}

void F_IN(float FA[], float FB[], float resultF[], int size) {
    for (int i = 0; i < size; i++) {
        resultF[i] = fmin(FA[i], FB[i]);
    }
}

void F_Cam(float F[], float resultF[], int size) {
    for (int i = 0; i < size; i++) {
        resultF[i] = 1.0f - F[i];
    }
}

int main() {
    int i;
    float FA[U_size] = {0.8f, 0.3f, 1.0f, 0.1f, 0.7f},
          FB[U_size] = {0.2f, 0.9f, 0.5f, 0.6f, 0.4f},
          U_res[U_size],
          IN_res[U_size],
          CamA_res[U_size],
          CamB_res[U_size];

    printf("Fuzzy Set A: ");
    printF(FA, U_size);

    printf("Fuzzy Set B: ");
    printF(FB, U_size);
    printf("\n");

    F_U(FA, FB, U_res, U_size);
    printf("Fuzzy Union (A U B): ");
    printF(U_res, U_size);

    F_IN(FA, FB, IN_res, U_size);
    printf("Fuzzy Intersection (A n B): ");
    printF(IN_res, U_size);

    F_Cam(FA, CamA_res, U_size);
    printf("Fuzzy Complement of A (A'): ");
    printF(CamA_res, U_size);

    F_Cam(FB, CamB_res, U_size);
    printf("Fuzzy Complement of B (B'): ");
    printF(CamB_res, U_size);

    return 0;
}
