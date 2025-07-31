//WAP of your choice to illustrate the use of function template with multiple arguments

#include <iostream>
using namespace std;

template <typename T1, typename T2>
auto add(T1 val1, T2 val2) {
    return val1 + val2;
}

template <typename T1, typename T2>
void display(T1 item1, T2 item2) {
    cout << "Item 1: " << item1 << endl;
    cout << "Item 2: " << item2 << endl;
}

int main() {
    double sum1 = add(10, 5.5);
    cout << "Sum of 10 and 5.5: " << sum1 << endl;

    int sum2 = add(20, 30);
    cout << "Sum of 20 and 30: " << sum2 << endl;

    string s1 = "Hello, ";
    string s2 = "Templates!";
    string combined_string = add(s1, s2);
    cout << "Combined String: " << combined_string << endl;

    return 0;
}