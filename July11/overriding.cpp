// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     int a, b;
//     void setdata()
//     {
//         cout << "Enter the values for a and b: ";
//         cin >> a >> b;
//     }

//     void display()
//     {
//         cout << "A = " << a << endl
//              << "B = " << b << endl;
//     }
// };

// class Derived : public Base
// {
// public:
//     int c;
//     void setdata()
//     {
//         cout << "Enter the value for C: " << endl;
//         cin >> c;
//     }

//     void display()
//     {
//         cout << "C = " << c << endl;
//     }
// };

// int main()
// {
//     Derived d1,d2;
//     d1.setdata();
//     d1.display();
//     // derived_class_obj.base_class_name::overriden_function
//     d2.Base::setdata();
//     d2.Base::display();
//     return 0;
// }

#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;

public:
    void setdata(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "The name of the person is " << name << " and age is " << age  << "." << endl;
    }
};

class Student : public Person
{
    int roll;

public:
    Student()
    {
    }
    void setdata(string n, int a, int r){
        Person::setdata(n, a);
        roll = r;
    }

    void display()
    {
        Person::display();
        cout << "Roll no.: "<< roll << endl;
    }
};

int main()
{
    Person p1, p2;
    Student s1, s2;
    p1.Person::setdata("Ram",20);
    p1.Person::display();

    s1.setdata("Shyam", 19, 4);
    s1.display();
}