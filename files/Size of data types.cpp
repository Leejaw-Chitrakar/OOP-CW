#include <iostream>
using namespace std;
int main(){
    int I;
    char C;
    string S;
    float F;
    double DF;
    cin>>C;
    cin>>I;
    cout<<"Size of Integer is "<<sizeof(I)<<endl;
    cout<<"Size of Character is "<<sizeof(C)<<endl;
    cout<<"Size of String is "<<sizeof(S)<<endl;
    cout<<"Size of Float is "<<sizeof(F)<<endl;
    cout<<"Size of DoubleFloat is "<<sizeof(DF)<<endl;
    cout<<"Character as Integer: "<<int(C)<<endl;
    cout<<"Integer as Character: "<<char(I)<<endl;
    return 0;
}
