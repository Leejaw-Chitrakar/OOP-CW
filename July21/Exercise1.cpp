// Friend Class Example

#include <iostream>
using namespace std;
class person;
class student
{
    int roll;
    string name;

public:
    student(int r, string n)
    {
        this->roll = r;
        this->name = n;
    }
    friend class person;
};

class person
{
    string ssn, add;

public:
    person()
    {
        ssn = "565";
        add = "KTM";
    }
    void display(student s1)
    {
        cout << "SSN: " << ssn << endl
             << "Address: " << add << endl;
        cout << "Roll: " << s1.roll << endl
             << "Name: " << s1.name << endl;
    }
};
int main()
{
    student s1(14, "Leejaw");
    person p1;
    p1.display(s1);
    return 0;
}