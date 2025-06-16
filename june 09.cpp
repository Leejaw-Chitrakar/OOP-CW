/*
#include <iostream>
using namespace std;
int a = 50;
int *p = &a;

int main (){
        cout<<"a = "<<a<<endl; //value of a
        cout<<"p = "<<p<<endl; // Mem of a
        cout<<"&a = "<<&a<<endl; //mem address of a
        cout<<"&p = "<<&p<<endl; //mem address of a
        cout<<"*p = "<<*p<<endl; //mem address of p ---> 50
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int a[5] = {};
int *p = a;

int main(){
    int i;
    cout<<"Enter the elements of a: ";
    for(i=0;i<5;i++){
        cin>>*(p+i);
    }
    for(i=0;i<5;i++){
        cout<<"a["<<i<<"] = "<<*(p+i)<<endl;
    }
    return 0;
}
*/

/*
// by pointer int arr[5] / int *arr
// sized array arr[5]
// unsized array arr[]
#include <iostream>
using namespace std;
int a[5] = {10, 15, 20, 25, 30};
int *ptr = a;
void display(int ptr[]){
    for(int i=0;i<5;i++){
        cout<<"a["<<i<<"] = "<<*(ptr+i)<<endl;
    }
}

int main(){
    display(a);
    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int n;
int main(){
    cout<<"Enter total number of students: ";
    cin>>n;

    float *m = new float[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the mark of the student["<<i+1<<"]: ";
        cin>>*(m+i);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"The mark of student["<<i+1<<"] = "<<*(m+i)<<endl;
    }
    delete[] m;
    return 0;
}
*/






