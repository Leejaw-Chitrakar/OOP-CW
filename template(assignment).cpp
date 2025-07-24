#include <iostream>

using namespace std;

template<class T>
void check(T num){
    if (num % 2 == 0) {
        cout << num << " is Even" << endl;
    } else {
        cout << num << " is Odd" << endl;
    }
}

int main(){
    cout << "Checking integer parity:" << endl;
    check(22);
    check(45);
    check(-32);
    check(-7);
    return 0;
}