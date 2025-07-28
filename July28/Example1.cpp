#include <iostream>
#include <exception>

using namespace std;
int main(){
    int a = 0,b = 0, c = 0;
    cout << "Enter numbers to devide: ";
    cin >> a >> b;
    try{
        if(b == 0){
            throw out_of_range("Division by zero is not allowed.");
        }else{
            cout << "You entered " << a << " and " << b << endl;    
        }
    }
    catch(const out_of_range& e){
        cout << e.what() << endl;
    }
    return 0;
}