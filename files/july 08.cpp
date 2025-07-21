// Inheritance
/*
#include <iostream>
using namespace std;

class base
{
public:
    int a;

private:
    int b;

protected:
    int c;

    base()
    {
        a = 20;
        b = 30;
        c = 40;
    }
};

class derived1 : public base
{
public:
    void display()
    {
        cout << "Derived1 display function" << endl;
        cout << "a: " << a << endl; // Accessible
        // cout << "b: " << b << endl; // Not accessible, private in base
        cout << "c: " << c << endl; // Accessible only in derived1, protected in base
    }
}d1;

class derived2 : public derived1
{
public:
    void display()
    {
        cout << "Derived2 display function" << endl;
        cout << "a: " << a << endl; // Accessible
        // cout << "b: " << b << endl; // Not accessible, private in base
        cout << "c: " << c << endl; // Accessible only in derived1, protected in base
    }
}d2;

int main(){
    d1.display();
    d2.display();
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Person{
    private:
    string name, address, SSID;
    public:
    void setdata(string n, string a, string s){
        name = n;
        address = a;
        SSID = s;
    }

    void displayP(){
        cout << "Name: " << name << endl;
        cout << "SSID: " << SSID << endl;
        cout << "Address: " << address << endl;
    }
};

class Student : public Person{
    private:
    string faculty;
    public:
    void set_data(string n, string a, string s, string f){
        setdata(n, a, s);
        faculty = f;
    }

    void displayS(){
        displayP();
        cout << "Faculty: " << faculty << endl;
    }
};

int main(){
    Student s1;
    s1.set_data("Leejaw", "Kathmandu", "5-2-1113-2024-60", "BSc.CSIT");
    s1.displayS();
    return 0;
}
*/

#include <iostream>
using namespace std;

class Course
{
private:
    string title, code;

public:
    Course(){
        title = "Unknown" code = "000"}

    void set_date_for_Course(string t, string c)
    {
        title = t;
        code = c;
    }

    void display_Course()
    {
        cout << "Course: " << title << endl;
        cout << "Code: " << code << endl;
    }
};

class LectureCourse : public Course
{
private:
    int LectureHallCapacity, scheduledLectureTimes;
    string assignLecturer;

public:
}

int
main()
{

    return 0;
}