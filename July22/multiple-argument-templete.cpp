#include <iostream>
using namespace std;

template<class T, class U>
U find_max(T a, U b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
// Remember to check the return type


int main(){
    cout << "Larger Num is " << find_max(4.6,4) << endl;
    return 0;
}