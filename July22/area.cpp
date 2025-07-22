#include <iostream>
using namespace std;

template<class T>
T find_area(T l, T b){
    return l*b;
}

// template<class T, class U>
// U convertor(T c){
//     return static_cast<U>(c);
// }

int main(){
    cout << "Area: " << find_area(2, 5) << endl;
    cout << "Area: " << find_area(2.6, 5.7) << endl;
    // cout << "Letter is : " << convertor<int, char>(66) << endl;
    return 0;
}