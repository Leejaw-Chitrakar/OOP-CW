#include <iostream>
#include <cstring>
int a = 0;
using namespace std;
namespace leejaw{
    int a = 5; 
    string fname = "Leejaw Chitrakar";
}
int main(){
    int a = 0;
    cout<<"global variable of a is: "<<a<<endl;
    a = 10;
    cout<<"local variable of a is: "<<a<<endl;
    :: a = 20;
    cout<<"updated global variable of a is: "<<::a<<endl;
    cout<<"updated variable a using namespace leejaw: "<<leejaw::a<<endl;
    cout<<leejaw::fname;
    return 0;
}
