// WAP to count total objects created for a class
// Static data Member Function
/*
#include <iostream>
using namespace std;

class car {
    private:
        string model, make;
        int year;
        static int count;
    public:
        void set_data(string m, string mk, int y) {
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
    cout << "data of car 1: " << endl;
    cout << "-------------------------" << endl;
    c1.set_data("ModelX", "Tesla", 2020);
    c1.display();
    cout << endl ;
    car c2;
    cout << "-------------------------" << endl;
    cout << "data of car 2: " << endl;
    cout << "-------------------------" << endl;

    c2.set_data("ModelS", "Tesla", 2021);
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
/*
#include <iostream>
using namespace std;

class rect{
    private:
        int length, breadth;
    public:
    void set_data(int l, int b) {
        length = l;
        breadth = b;
    }

    void display(){
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << length * breadth << endl;
        cout << "*********************" << endl;
    }

    void add(rect r6, rect r7){
        length = r6.length + r7.length;
        breadth = r6.breadth + r7.breadth;
    }

    void display_sum_area() {
        cout << "Sum of Length: " << length << endl;
        cout << "Sum of Breadth: " << breadth << endl;
        cout << "Sum of Area: " << length * breadth << endl;
        cout << "*********************" << endl;
    }
};

int main(){
    rect r1, r2, r3;
    int l, b;
    r1.set_data(10, 5);
    r1.display();
    r2.set_data(20, 10);
    r2.display();
    r3.add(r1,r2);
    cout << "After adding r1 and r2:" << endl;
    r1.display_sum_area();
    return 0;
}
*/


/* June 17 */


/* Return object form functions */
/*
#include <iostream>
using namespace std;

class rect
{
private:
    int length, breadth;
public:
    void set_data(int l, int b){
        length = l;
        breadth = b;
    }

    void display(){
        cout << "Length = " << length << endl;
        cout << "Breadth= " << length << endl;
        cout << "Area = " << length*breadth << endl;
    }

    rect add(rect r6){
        rect r8;
        r8.length = length + r6.length;
        r8.breadth = breadth + r6.breadth;
        return r8;
    }
};

int main()
{
    rect r1, r2, r3;
    r1.set_data(12, 5);
    r2.set_data(10, 7);
    r1.display();
    r2.display();
    r3 = r1.add(r2);
    r3.display();
    return 0;
}
*/

/* WAP to create a class colmpex having attributes real and imaginary.
    create two objects c1 and c2 abd assign the vlaues to attrubutes.
    create a c3 object by addding c1 and c2.
*/

/*
#include <iostream>
using namespace std;

class complex{
private:
    float real, imiginary;
public:
    void setdata(float r, float i){
        real = r;
        imiginary = i;
    }

    void display(){
        cout << "Real = " << real << endl;
        cout << "Imiginary = " << imiginary << endl;
        cout << "Sum = " << real << " + " << imiginary << "i" << endl;

    }

    complex addcomplex(complex c){
        complex a;
        a.real = real + c.real;
        a.imiginary = imiginary + c.imiginary;
        return a;
    }
};

int main(){
    complex c1, c2 ,c3;
    c1.setdata(3, 5);
    c2.setdata(4, 6);

    c3 = c2.addcomplex(c1);
    c3.display();
}
*/



/* Error xa */
/*
#include <iostream>
using namespace std;

class apple {
public:
    int a;

    apple(){
        a = 10;
    }

    void display(){
        cout << a << endl;
    }
};

int mainm(){
    apple m1;
    m1.display();
    m1.a++;
    m1.display();
    return 0;
}
*/


/* Operator Overloading */
/*
#include <iostream>
using namespace std;

class apple {
public:
    int a;

    apple(){
        a = 25;
    }

    void display(){
        cout << "A = " << a << endl;
    }

    void operator ++(){
        ++a;
    }
};

int main(){
    apple ap;
    ap.display();

    ++ap;
    ap.display();

}
*/

/* (sizeof(), &, ., *, ?) Expect these operators all other operators can be overloaded */
/* unary operaor doesn't takes any operand and binary takes only one operand */
/* unary = no operand */
/* Binary = only one operand */
/* we can't combine operators inside operator function */
