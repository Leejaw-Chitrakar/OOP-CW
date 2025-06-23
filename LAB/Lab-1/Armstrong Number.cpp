#include <iostream>

using namespace std;

int pow(int base, int exp) {
    int res = 1, i;
    for ( i = 0; i < exp; ++i) {
        res *= base;
    }
    return res;
}

int main() {
    int num, originalNum, r, n = 0, result = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num;

    while (temp != 0) {
        r = temp % 10;
        result += pow(r, n);
        temp /= 10;
    }

    if (result == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }

    return 0;
}