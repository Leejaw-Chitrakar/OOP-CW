#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()
    {
        name = "Unknown";
        age = 0;
    }

    Person(Person& other)
    {
        name = other.name;
        age = other.age;
    }

    void setdata(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person P1, P2;
    P1.setdata("Leejaw", 20);
    P2.setdata("Ram", 30);

    P1.display();
    P2.display();

    cout << "----------Copy of a Constructor----------" << endl;
    Person P3 = P1;
    P3.display();
    return 0;
}