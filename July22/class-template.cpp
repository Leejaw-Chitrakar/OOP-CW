#include <iostream>
using namespace std;

template <class T>

class demo
{
private:
    T a, b;

public:
    demo(T a, T b)
    {
        this->a = a;
        this->b = b;
    }

    T get_max()
    {
        if (a > b)
        {
            return a;
        }
        else
        {
            return b;
        }
        // Or use 
        // return (a > b) ? a : b;
    }
};

int main(){
    demo <int>d1(23,46);
    d1.get_max();
    return 0;
}