#include <iostream>
using namespace std;

int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int add(float a, float b, float c){
    float sum;
    sum = a + b + c;
    return sum;
}

int main(){
    int a = 5, b = 13;
    cout << "The sum of " << a << " and " << b << " is " << add(a,b) << endl;

    float d = 4.8, e = 7.7, f = 2.6;
    cout << "The sum of " << d << ", " << e << " and " << f << " is " << add(d,e,f) << endl;

    return 0;
}