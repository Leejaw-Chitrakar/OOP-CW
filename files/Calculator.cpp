#include <iostream>
#include "CAL.cpp"
using namespace std;
int main(){
    int num1,num2;
    char choice;
    cout<<"Enter any two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter operation sign [+,-,*,/]: ";
    cin>>choice;
    result(num1, num2, choice);
    return 0;
}
