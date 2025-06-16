/*
#include <iostream>
namespace ram{
    int count;

    namespace pandey{
        int count = 60;
        int age = 49;

        namespace khatri{
            int age=30;
        }
    }

}
using namespace std;
using namespace ram::pandey::khatri; //to use the elements of khatri
namespace ball = ram::pandey::khatri;
using namespace ball;
using ball::age;
int main(){
    cout<<"Age khatri = "<<age<<endl;
    cout<<"Age khatri = "<<ball::age<<endl;
    cout<<"Count of pandey = "<<ram::pandey::count<<endl; //yessma dhaneenu parxa
    return 0;
}
*/
/*
#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main()
{
    int num = 50;

    cout << "Before setting the width: \n" << num << endl;
    cout << "Setting the width using setw() fn to 5: \n"<< setw(5)<<num;

    return 0;
}
*/

/*
//WAP to check whether the number is positive, negative or zero

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num==0){
        cout<<"Zero is neither positive nor negative Number.";
    }
    else if (num>0){
        cout<<"Positive Number!!!";
    }
    else{
        cout<<"Negative Number!!!";
    }
    return 0;
}
*/

