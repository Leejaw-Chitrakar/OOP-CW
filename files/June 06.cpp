/*
#include <iostream>
using namespace std;
int check(int a,int b){
    return (a>b)?b:a;
}
int main(){
    int n1,n2,res;
    cout<<"Enter any 2 numbers: ";
    cin>>n1>>n2;
    res = check(n1,n2);
    cout<<"The minimum value is "<<res;
    return 0;
}
*/


/*
#include <iostream>
using namespace std;
int swap(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    return 0;
}
int main(){
    int x,y;
    cout<<"Enter any 2 numbers: ";
    cin>>x>>y;
    cout<<"Before swap"<<endl<<"x = "<<x<<endl<<"y = "<<y;
    swap(x,y);
    cout<<"After swap"<<endl<<"x = "<<x<<endl<<"y = "<<y;
    return 0;
}
*/



/*
//return by reference
#include <iostream>
using namespace std;
int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}
int main(){
    int x,y;
    cout<<"Enter any 2 numbers: ";
    cin>>x>>y;
    cout<<"Before swap"<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
    swap(&x,&y);
    cout<<"After swap"<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
    return 0;
}
*/



/*
#include <iostream>
using namespace std;
float calculate_amount(float p,float t, float r){
    float si;
    si =p*t*r/100;
    return si;
}
int main(){
    float p,t,r;
    cout<<"Enter the principle time and rate per annum: ";
    cin>>p>>t>>r;
    cout<<"Simple Interest is "<<calculate_amount(p,t,r);
    return 0;
}
*/



/*
#include <iostream>
using namespace std;
int g = 20; //global variable
int main(){
    int i = 10; //local variable
    if(i<20){
        int n =100;
        cout<<"inside if"<<endl;
        cout<<"g = "<<g<<endl;
        cout<<"i = "<<i<<endl;
        cout<<"n = "<<n<<endl;
    }
    cout<<"Below if";
    cout<<"g = "<<g<<endl;
    cout<<"i = "<<i<<endl;
    //cout<<"n = "<<n<<endl; error can not be accessed
}
*/


