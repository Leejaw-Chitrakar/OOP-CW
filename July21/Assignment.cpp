
#include <iostream>
using namespace std;


class Number {
private:
    int Num[5];
    double mean;
public:
    Number(int n[5]) {
        for (int i = 0; i < 5; i++) {
            Num[i] = n[i];
        }
        calc_mean();
    }
    void calc_mean() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += Num[i];
        }
        mean = sum / 5.0;
    }
    friend void display(Number);
};

void display(Number N) {
    cout << "Listed numbers are:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << N.Num[i] << endl;
    }
    cout << "Mean: " << N.mean << endl;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    Number N(arr);
    display(N);
    return 0;
}