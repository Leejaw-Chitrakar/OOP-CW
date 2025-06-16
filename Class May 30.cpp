/*
#include <iostream>
using namespace std;
int add(int a,int b);

int main(){
    int a,b,result;
    cout<<"Enter any 2 numbers: ";
    cin>>a>>b;
    result = add(a,b);
    cout<<"Sum of "<<a<<" and  "<<b<<" is "<<result;
    return 0;
}

int add(int a, int b){
    int sum = a+b;
    return sum;
}
*/

/*
#include <iostream>0
using namespace std;
float area_circle(float r);
int main(){
    float r;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"Area of the circle is "<<area_circle(r);
    return 0;
}
float area_circle(float r){
    float result = 3.14*r*r;
    return result;
}
*/

/*
//we can take an input even if an default value is set to any function
#include <iostream>
using namespace std;
float div(float nu, float d = 3);
int main(){
    float nu,d;
    cout<<"enter a numerator and denominator: ";
    cin>>nu>>d;
    cout<<"Result with default denominator is: "<<div(nu)<<endl;
    cout<<"Result with user input is: "<<div(nu,d)<<endl;
    return 0;
}
float div(float nu, float d){
    if(d==0){
        cout<<"divisor must not be Zero";
    }
    else{
        return nu/d;
    }
}
*/

/*
#include <iostream>
using namespace std;
int square(int l){
    return l*l;
}
int rectangle(int l,int b){
    return l*b;
}
int main(){
    int sl,rl,rb;
    cout<<"Enter the length of square: ";
    cin>>sl;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>rl>>rb;
    cout<<"Area of square is "<<square(sl)<<endl;
    cout<<"Area of rectangle is "<<rectangle(rl,rb)<<endl;
    return 0;
}
*/


/*
#include<iostream>
using namespace std;
int area(int l)
{

return l*l;
}
float area(float l)

{
	return l;
}int main()
{
	float l= 4.32;
	int m= 4.32;
	cout<<"Area of square with integer:"<<area(m)<<endl;
	cout<<"Area of square with floats:"<<area(l)<<endl;
	return 0;

}
*/
