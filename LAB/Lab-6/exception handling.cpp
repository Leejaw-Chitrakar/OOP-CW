// WAP to illustrate the basic exception handling

#include <iostream>
#include <exception>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw "Division by zero is not allowed!";
    }
    return static_cast<double>(numerator) / denominator;
}

int main() {
    int num1 = 10;
    int den1 = 2;
    int num2 = 15;
    int den2 = 0;

    cout << "--- Basic Exception Handling ---" << endl;

    try {
        double result = divide(num1, den1);
        cout << num1 << " / " << den1 << " = " << result << endl;
    } catch (const char* msg) {
        cerr << "Error caught: " << msg << endl;
    }

    cout << "\n";

    try {
        double result = divide(num2, den2);
        cout << num2 << " / " << den2 << " = " << result << endl;
    } catch (const char* msg) {
        cerr << "Error caught: " << msg << endl;
    }

    cout << "Program continues after exception handling." << endl;

    return 0;
}