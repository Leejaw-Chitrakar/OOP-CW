// WAP to create two objects of a class 'NPR' having private attributes 'rs' and 'paisa'.
// Add the respective data members of both the class and display them using friend function.

#include <iostream>
using namespace std;

class NPR {
private:
    int rs;
    int paisa;

public:
    NPR(int r = 0, int p = 0) : rs(r), paisa(p) {
        if (paisa >= 100) {
            rs += paisa / 100;
            paisa %= 100;
        }
    }

    void display() const {
        cout << rs << " rs and " << paisa << " paisa" << endl;
    }

    friend NPR addNPR(NPR n1, NPR n2);
};

NPR addNPR(NPR n1, NPR n2) {
    int totalRs = n1.rs + n2.rs;
    int totalPaisa = n1.paisa + n2.paisa;

    if (totalPaisa >= 100) {
        totalRs += totalPaisa / 100;
        totalPaisa %= 100;
    }

    return NPR(totalRs, totalPaisa);
}

int main() {
    NPR amount1(10, 75);
    NPR amount2(5, 50);

    cout << "Amount 1: ";
    amount1.display();
    cout << "Amount 2: ";
    amount2.display();

    NPR sumAmount = addNPR(amount1, amount2);

    cout << "Sum of amounts: ";
    sumAmount.display();

    return 0;
}