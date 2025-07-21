#include <iostream>
using namespace std;

class Shape
{
protected:
    float length, breadth, height;

public:
    void setdata()
    {
        length = 3;
        breadth = 4;
        height = 5;
    }

    virtual void calcArea() = 0;
};

class rectangle : public Shape
{
public:
    void calc_rect()
    {
        cout << "Area of rectangle is " << length * breadth;
    }
};

int main()
{
    rectangle r1;
    r1.setdata(4, 5);
    r1.display();
    return 0;
}