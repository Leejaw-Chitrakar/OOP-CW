#include <iostream>
using namespace std;

template <class T>
class shape
{
private:
    T l, b;

public:
    shape()
    {
        l = 0;
        b = 0;
    }
    shape(T l, T b)
    {
        this->l = l;
        this->b = b;
    }
    void disp()
    {
        cout << "length: " << l << endl;
        cout << "bradth: " << b << endl;
        cout << "-----------------------" << endl;
    }
};

template<class T>
class square : public shape<float>
{
private:
    float l, b;

public:
    square(float l, T b) : shape<float>(l, b){
        this -> l = l;
        this -> b = b;
    }
    void display()
    {
        cout << "length: " << l << endl;
        cout << "bradth: " << b << endl;
        cout << "-----------------------" << endl;
    }
};

int main()
{
    shape s1(4, 5);
    s1.disp();

    square <int> sq1(4.3, 9.2);
    sq1.display();
    return 0;
}