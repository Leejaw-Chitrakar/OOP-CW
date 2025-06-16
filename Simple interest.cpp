#include <iostream>
using namespace std;
int main(){
    int P;
    float T,R,SI;
    cout<<"Enter the details below."<<endl;
    cout<<"Principle(P): ";
    cin>>P;
    cout<<"Time(T)(in year): ";
    cin>>T;
    cout<<"Rate per annum(R): ";
    cin>>R;
    SI = (P*T*R)/100;
    cout<<"Simple Interest is Rs."<<SI;
    return 0;
}
