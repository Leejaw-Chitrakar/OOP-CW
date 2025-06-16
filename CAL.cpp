#include <iostream>
using namespace std;

int addition(int a,int b);
int subtraction(int a,int b);
int multiplication(int a,int b);
int division(int a,int b);

int result(int num1, int num2 ,char choice){
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
    }

int subtraction(int a,int b){
    cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b;
}

int multiplication(int a,int b){
    cout<<"The Product  of "<<a<<" and "<<b<<" is "<<a*b;
}

int division(int a,int b){
    if(b==0){
        cout<<"Divisor must not be zero!!!!";
    }
    else{
        cout<<"The Quotient of "<<a<<" and "<<b<<" is "<<a/b;
    }
}
