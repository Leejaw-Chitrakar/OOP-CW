#include <iostream>
using namespace std;

int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

int add(float a, float b, float c){
    int sum;
    sum = a + b + c;
    return sum;
}

int main(){
    int a, b, c;
    a = 5;
    b = 10;

    cout << "The sum of " << a << " and " << b << " is " << add(a,b) << endl;

    a = 4.5;
    b = 7.5;
    c = 2.5;
    cout << "The sum of " << a << ", " << b << " and " << c << " is " << add(a,b,c) << endl;

    return 0;
}