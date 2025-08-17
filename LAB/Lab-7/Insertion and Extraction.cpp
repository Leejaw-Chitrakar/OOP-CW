#include <iostream>
#include <conio.h>

using namespace std;

// WAP to illustrate the insertion and extraction operator overloading.
class Point
{
private:
    int x;
    int y;

public:
    Point() : x(0), y(0) {}

    friend ostream &operator<<(ostream &os, const Point &p);
    friend istream &operator>>(istream &is, Point &p);
};

ostream &operator<<(ostream &os, const Point &p)
{
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

istream &operator>>(istream &is, Point &p)
{
    cout << "Enter x: ";
    is >> p.x;
    cout << "Enter y: ";
    is >> p.y;
    return is;
}

int main()
{
    Point p;
    cout << "Enter point coordinates (x, y):" << endl;
    cin >> p;
    cout << "You entered: " << p << endl;

    getch();
    return 0;
}
