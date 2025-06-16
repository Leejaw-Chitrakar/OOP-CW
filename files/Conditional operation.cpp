#include <iostream>
using namespace std;
int main(){
    int n;
    string res;
    cout<<"Enter a positive number: ";
    cin>>n;
    if(n==0){
        cout<<"Enter a non zero number!!!";
        return 1;
    }
    else if(n<0){
        cout<<"Enter a positive number!!!";
        return 2;
    }
    else{
        res = (n%2==0)?"Even number":"Odd number";//ternary operation
        cout<<res;
    }
    return 0;
}
