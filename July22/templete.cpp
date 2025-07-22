//Use use templete to work with generic data type (multiple data type)
// Templete is used only when we have to work with sam function with different data type
#include <iostream>
using namespace std;

// int find_max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// Templete
// Syntax
// template<class/type-name valid-identifier(T)>
// Example
template<class T>
T find_max(T a, T b){
    // Here T is replaced by datatype
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}


int main(){
    cout << "Larger Num is " << find_max(22,45) << endl;
    cout << "Larger Num is " << find_max(22.6,0.45) << endl;
    cout << "Larger Num is " << find_max('A','Z') << endl;
    return 0;
}