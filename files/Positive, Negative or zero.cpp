#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n==0){
        cout<<"Zero is neither positive nor negative Number.";
    }
    else if (n>0){
        cout<<"Positive Number!!!";
    }
    else{
        cout<<"Negative Number!!!";
    }
    return 0;
}
