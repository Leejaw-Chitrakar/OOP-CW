#include <iostream>
using namespace std;

inline int mul(int n1, int n2){
    return n1*n2;
}

int main(){
    int num1,num2,res;
    num1 = 4;
    num2 = 8;
    res = mul(num1,num2);
    cout << "Result of multiplying " << num1 << " and " << num2 << ": " << res << endl;

    num1 = 6;
    num2 = 6;
    res = mul(num1,num2);
    cout << "Result of multiplying " << num1 << " and " << num2 << ": " << res << endl;

    return 0;
}