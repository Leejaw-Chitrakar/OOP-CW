#include <iostream>
using namespace std;

class Operation {
private:
    int NUM;
public:
    Operation() {
        NUM = 0;
    }

    Operation(int n) {
        NUM = n;
    }

    void display() {
        cout << "Number: " << NUM << endl;
    }

    bool operator == (Operation& temp) {
        return (NUM == temp.NUM);
    }
};

int main() {
    Operation op1(10), op2(20), op3(10);

    cout << "op1: ";
    op1.display();
    cout << "op2: ";
    op2.display();
    cout << "op3: ";
    op3.display();
    if (op1 == op2) {
        cout << "op1 is equal to op2" << endl;
    } else {
        cout << "op1 is not equal to op2" << endl;
    }
    if (op1 == op3) {
        cout << "op1 is equal to op3" << endl;
    } else {
        cout << "op1 is not equal to op3" << endl;
    }
    return 0;
}