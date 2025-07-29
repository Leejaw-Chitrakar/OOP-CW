// Write any program of your choice to illustrate the use of this pointer.

#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    double score;

public:
    Student(string name, int rollNumber, double score)
    {
        this->name = name;
        this->rollNumber = rollNumber;
        this->score = score;
        cout << "Student " << this->name << " created." << endl;
    }

    Student &setScore(double newScore)
    {
        this->score = newScore;
        return *this;
    }

    void displayInfo() const
    {
        cout << "Name: " << name
             << ", Roll No: " << rollNumber
             << ", Score: " << score << endl;
    }

    bool isOlder(const Student &other) const
    {
        return this->rollNumber > other.rollNumber;
    }
    string getName() const
    {
        return name;
    }
};

int main()
{
    Student s1("Alice", 101, 85.5);
    s1.displayInfo();
    cout << "\nUpdating score and displaying (chained call):" << endl;
    s1.setScore(92.0).displayInfo();
    Student s2("Bob", 102, 78.0);
    s2.displayInfo();
    cout << "\nComparing students:" << endl;
    if (s2.isOlder(s1))
    {
        cout << s2.getName() << " is older than " << s1.getName() << endl;
    }
    else
    {
        cout << s1.getName() << " is older than or same age as " << s2.getName() << endl;
    }
    return 0;
}