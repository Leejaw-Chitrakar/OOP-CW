// WAP to count total objects created for a class
// Static Date Member Function
/*
#include <iostream>
using namespace std;

class car {
    private:
        string model, make;
        int year;
        static int count;
    public:
        void set_date(string m, string mk, int y) {
            model = m;
            make = mk;
            year = y;
            count++;
        }

        void display() {
            cout << "Model: " << model << endl;
            cout << "Make: " << make << endl;
            cout << "Year: " << year << endl;
            cout << "Total cars created: " << count << endl;
            cout << "*********************" << endl;
        }
};

int car::count = 0;

int main(){
    string model, make;
    int year;
    car c1;
    cout << "-------------------------" << endl;
    cout << "Date of car 1: " << endl;
    cout << "-------------------------" << endl;
    c1.set_date("ModelX", "Tesla", 2020);
    c1.display();
    cout << endl ;
    car c2;
    cout << "-------------------------" << endl;
    cout << "Date of car 2: " << endl;
    cout << "-------------------------" << endl;

    c2.set_date("ModelS", "Tesla", 2021);
    c2.display();

    return 0;
}
*/


/* Static Members Function*/
/*
#include <iostream>
using namespace std;

class book{
    private:
        string name;
        float price;
        static int count;
    public:
    void setData(string n, float p) {
        name = n;
        price = p;
        count++;
    }

    void displayData() {
        cout << "Book Name  : " << name << endl;
        cout << "Price(NRs.): " << price << endl << endl;
    }

    static void display() {
        cout << "Total books created: " << count << endl;
    }

    static int getCount() {
        return count;
    }
};

int book::count = 0;

int main(){
    book b1, b2, b3;
    b1.setData("Math", 250.0);
    b2.setData("Science", 300.0);
    b3.setData("History", 200.0);
    b1.displayData();
    b2.displayData();
    b3.displayData();
    book::display();
    return 0;
}
*/


/* Area of Retangle */
#include <iostream>
using namespace std;

class rect{
    private:
        int length, breadth;
    public:
    void set_date(int l, int b) {
        length = l;
        breadth = b;
    }

    void display(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
        cout << "*********************" << endl;
    }
};

int main(){
    rect r1, r2;
    int l, b;
    r1.set_date(10, 5);
    r1.display();
    r2.set_date(20, 10);
    r2.display();
    return 0;
}