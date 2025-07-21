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

    void setdata(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Nmae: " << name << endl;
        cout << "Age: " << age << endl;
    }

    ~Person()
    {
        cout << "Object Destroyed!!!" << endl;
    }
};

int main()
{
    Person P1, P2;
    P1.setdata("Leejaw", 20);
    P2.setdata("Sita", 29);
    P1.display();
    P2.display();
    return 0;
}