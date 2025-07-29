// WAP to create a class 'NPR' having private attributes 'rs' and 'paisa'
// and another class 'USD' having attributes 'dollar' and 'cent'.
// Use operator overloading with friend function to add 'rs' with 'dollar'
// and add 'paisa' with 'cent' and display new 'rs' and 'paisa'
// using conversion 1 dollar = 133 rs and 1 cent = 60 paisa.

#include <iostream>
using namespace std;

class USD;

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

    friend NPR operator+(const NPR& n, const USD& u);
};

class USD {
private:
    int dollar;
    int cent;

public:
    USD(int d = 0, int c = 0) : dollar(d), cent(c) {
        if (cent >= 100) {
            dollar += cent / 100;
            cent %= 100;
        }
    }

    void display() const {
        cout << dollar << " dollar and " << cent << " cent" << endl;
    }

    friend NPR operator+(const NPR& n, const USD& u);
};

NPR operator+(const NPR& n, const USD& u) {
    const int DOLLAR_TO_RS = 133;
    const int CENT_TO_PAISA = 60;

    int convertedRs = static_cast<int>(u.dollar) * DOLLAR_TO_RS;
    int convertedPaisa = static_cast<int>(u.cent) * CENT_TO_PAISA;

    int totalRs = n.rs + convertedRs;
    int totalPaisa = n.paisa + convertedPaisa;

    if (totalPaisa >= 100) {
        totalRs += totalPaisa / 100;
        totalPaisa %= 100;
    }

    return NPR(static_cast<int>(totalRs), static_cast<int>(totalPaisa));
}

int main() {
    NPR nepaliAmount(500, 75);
    USD americanAmount(10, 50);

    cout << "Nepali Amount: ";
    nepaliAmount.display();
    cout << "American Amount: ";
    americanAmount.display();

    NPR combinedAmount = nepaliAmount + americanAmount;

    cout << "\nCombined amount (in NPR): ";
    combinedAmount.display();

    NPR npr2(100, 20);
    USD usd2(1, 10);

    cout << "\nNepali Amount 2: ";
    npr2.display();
    cout << "American Amount 2: ";
    usd2.display();

    NPR combinedAmount2 = npr2 + usd2;
    cout << "Combined amount 2 (in NPR): ";
    combinedAmount2.display();

    return 0;
}