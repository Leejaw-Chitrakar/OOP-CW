#include <iostream>
using namespace std;
int main(){
    int n,i,res = 1;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0){
        cout<<"Number should be non-negative number!!!"<<endl;
        return 1;
    }
    else if(n==0){
            cout<<"The factorial of 0 is 1.";
        return 0;
    }
    else{
        for(i=1;i<=n;i++){
            res *= i;
        }
    }
    cout<<"The factorial of "<<n<<" is "<<res<<endl;
    return 0;
}
