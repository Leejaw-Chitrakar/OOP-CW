/* Return object form functions */

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
