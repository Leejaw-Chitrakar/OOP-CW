#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    int year;

public:
    void setdate(string m, int y)
    {
        model = m;
        year = y;
    }

    void display()
    {
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main()
{
    Car c1, c2;
    c1.setdate("X", 1998);
    c1.display();
    c2.setdate("Y", 2002);
    c2.display();
    return 0;
}