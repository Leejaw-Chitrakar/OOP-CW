#include <iostream>
using namespace std;
#include <exception>

int main(){
    int a= 100, b=5;
    try{
        if(b==0){
            throw b;
        }
        else if(a>100){
            throw ("a must be smaller than 100");
        }
        else{
            cout << "a is divisible by b" ;
        }
    }
    catch( const string& s){
        cout << s;
    }
    catch(const int& e){
        cout<< "Error divisor must be greater than 0";
    }
    return 0;
}