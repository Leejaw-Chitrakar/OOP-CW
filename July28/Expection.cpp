#include <iostream>
#include <exception>

using namespace std;
int main(){
    int a = -1;
    try{
        if(a<0){
            throw out_of_range("Negative valuse are not allowes");
        }
        else{
            cout << "valuse for a: " << a << endl;
        }
    }
    catch(int & r){
        cout << r.what() ;
    }
    return 0;
}

//  throw and catch should have sem data type
// '&' should be used to catch reference type without making multiple copies
// 