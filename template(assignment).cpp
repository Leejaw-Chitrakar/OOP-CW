#include <iostream>
#include <string>

using namespace std;

template<class T>
void swap_values(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    cout << "Swapping integers:" << endl;
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap_values(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;

    cout << "\nSwapping doubles:" << endl;
    double d1 = 3.14, d2 = 2.71;
    cout << "Before swap: d1 = " << d1 << ", d2 = " << d2 << endl;
    swap_values(d1, d2);
    cout << "After swap:  d1 = " << d1 << ", d2 = " << d2 << endl;

    cout << "\nSwapping strings:" << endl;
    string s1 = "Hello", s2 = "World";
    cout << "Before swap: s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"" << endl;
    swap_values(s1, s2);
    cout << "After swap:  s1 = \"" << s1 << "\", s2 = \"" << s2 << "\"" << endl;

    return 0;
}