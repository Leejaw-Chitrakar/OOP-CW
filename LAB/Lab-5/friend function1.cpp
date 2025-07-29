// WAP to illustrate the use of friend function to calculate sum of two data members of a same class.

#include <iostream>
using namespace std;

class MyClass {
private:
    int num1;
    int num2;
public:
    MyClass(int a, int b) : num1(a), num2(b) {}
    friend int sumDataMembers(MyClass obj);
    void display() {
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
};

int sumDataMembers(MyClass obj) {
    return obj.num1 + obj.num2;
}

int main() {
    MyClass obj1(10, 20);
    cout << "Object data: ";
    obj1.display();
    int totalSum = sumDataMembers(obj1);
    cout << "Sum of data members using friend function: " << totalSum << endl;
    return 0;
}