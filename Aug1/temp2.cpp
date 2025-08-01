#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Person(string n, int a) : name(n), age(a) {}
    Person(string name = "Leejaw", int age = 20)
    {
        this->name = name;
        this->age = age;
    }

    friend void operator>>(istream &in, Person &P);
    friend void operator<<(ostream &out, Person &P);
};

void operator>>(istream &in, Person &P)
{
    cout << "Enter name: ";
    // cin >> P.name; [we can still use cin but we don't need to]
    in >> P.name;
    cout << "Enter age: ";
    // cin >> P.age; [we can still use cin but we don't need to]
    in >> P.age; 
}

void operator<<(ostream &out, Person &P)
{
    cout << "Name is: ";
    // cout << P.name; [we can still use cin but we don't need to]
    out << P.name;
    cout << endl;
    cout << "Age is: ";
    // cout << P.age; [we can still use cin but we don't need to]
    out << P.age;
    cout << endl;
}

int main()
{
    Person P1;
    cin >> P1;
    cout << P1;
    return 0;
}