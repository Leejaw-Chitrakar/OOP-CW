#include <iostream>
using namespace std;
class Rectangle{
    public:
        int length,breadth;
        void calc_area(){
            int area=length*breadth;
            cout<<"The area of the rectangel is "<<area<<endl;
        }
};

int main(){
    Rectangle r1;
    r1.length = 17;
    r1.breadth = 4;
    r1.calc_area();
    return 0;
}