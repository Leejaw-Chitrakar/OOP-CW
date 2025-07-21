#include <iostream>
using namespace std;

class Operation
{
private:
    int num1, num2;

public:
    Operation()
    {
        num1 = 0;
        num2 = 0;
    }

    Operation(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void display()
    {
        cout << "First Number is " << num1 << endl;
        cout << "Second Number is " << num2 << endl;
    }

    Operation operator+(Operation &temp)
    {
        return Operation(num1 + temp.num1, num2 + temp.num2);
    }
};

int main(){
    Operation O1(10, 20);
    Operation O2(6, 2);
    Operation O3 = O1 + O2;
    O3.display();
    return 0;
}