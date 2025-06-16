#include <iostream>
int swap(int &p,int &q);
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Before Swap........"<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    swap(a,b);
    cout<<"After Swap........."<<endl;
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}

int swap(int &p,int &q){
    p=p+q;
    q=p-q;
    p=p-q;
    return p && q;
}
