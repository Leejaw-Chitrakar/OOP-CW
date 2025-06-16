#include <stdio.h>
#include <math.h>

int main() {
    double num, floor_val, ceil_val;

    printf("Enter a floating-point number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    floor_val = floor(num);
    ceil_val = ceil(num);

    printf("Original number: %.2f\n", num);
    printf("Floor value: %.2f\n", floor_val);
    printf("Ceiling value: %.2f\n", ceil_val);

    return 0;
}
