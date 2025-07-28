// WAP to ask user for two numbers and add iff both are positive numbers else display "number is negative".

#include <iostream>
#include <exception>

using namespace std;
int main(){
    int a = 0, b = 0, sum = 0;
    cout << "Enter any 2 numbers: " ;
    cin >> a >> b;
    try{
        if(!(a>0 && b>0)){
            throw out_of_range("Both numbers must be positive.");
        } else {
            sum = a + b;
            cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
        }
    }
    catch( const out_of_range & e){
        cout << e.what();
    }
    return 0;
}