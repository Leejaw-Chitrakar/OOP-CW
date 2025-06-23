#include <iostream>

int addition(int a,int b);
int subtraction(int a,int b);
int multiplication(int a,int b);
int division(int a,int b);

using namespace std;
int main(){
    int num1,num2;
    char choice;
    cout<<"Enter any two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter operation sign [+,-,*,/]: ";
    cin>>choice;
    switch(choice){
        case '+':
            addition(num1,num2);

            break;
        case '-':
            subtraction(num1,num2);
            break;

        case '*':
            multiplication(num1,num2);
            break;
        case '/':
            division(num1,num2);
            break;
        default:
            cout<<"Invalid input!!!";
            break;
    }
    return 0;
}

int addition(int a,int b){
    cout<<"The Sum of "<<a<<" and "<<b<<" is "<<a+b;
    return 0;
    }

int subtraction(int a,int b){
    cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b;
    return 0;
}

int multiplication(int a,int b){
    cout<<"The Product  of "<<a<<" and "<<b<<" is "<<a*b;
    return 0;
}

int division(int a,int b){
    if(b==0){
        cout<<"Divisor must not be zero!!!!";
        return 0;
    }
    else{
        cout<<"The Quotient of "<<a<<" and "<<b<<" is "<<a/b;
        return 0;
    }
}

