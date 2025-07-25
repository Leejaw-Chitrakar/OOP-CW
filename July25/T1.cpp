#include <iostream>
using namespace std;

template <class T>
class shape
{
private:
    T l, b;

public:
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

class rect: public shape<float>{
    private: 
    float l,b;
    public:
    rect(float l, float b): shape <float>(l,b){
        this -> l = l;
        this -> b = b;
    }

    void display(){
        cout << "length: " << l << endl;
        cout << "bradth: " << b << endl;
        cout << "-----------------------" << endl;
    }
};

int main()
{
    shape s1(4, 5);
    s1.disp();

    rect r1(40, 50);
    r1.display();
    return 0;
}