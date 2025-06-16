//Unit 3


//class ==> blueprint of an object
#include <iostream>
using namespace std;

class class_name{
    //Access specifer
    //Data member
    //Member function
};

class student{
    public:
    int roll;
    string name;

    void display(){
        cout<<"Your roll name is "<<name<<endl;
        cout<<"Your roll no. is "<<roll<<endl;
    }
};

class student_details{
    public:
    int roll;
    string name;
    int contact;

    void get_details(){
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the roll no. of the student: ";
        cin>>roll;
        cout<<"Enter the contact no. of the student: ";
        cin>>contact;
    }

    void show_details(){
        cout<<"Your roll name is "<<name<<endl;
        cout<<"Your roll no. is "<<roll<<endl;
        cout<<"Your contact no. is "<<contact<<endl;
    }
}S[5];

class book{
    public:
    string name;
    string author;
    int price;
    void get_details(){
        cout<<"Enter the name of the book: ";
        cin>>name;
        cout<<"Enter the name of the Author: ";
        cin>>author;
        cout<<"Enter the name of the price: ";
        cin>>price;
    }

    void display_details(){
        cout<<"Name of the book is "<<name<<endl;
        cout<<"Author of the book is "<<author<<endl;
        cout<<"Price of the book is "<<price<<endl;
    }
}B[5];


int main(){
    int n,i;
    cout<<"Enter the number of student: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<endl;
        S[i].get_details();
        cout<<endl;
    }
    for(i=0;i<n;i++){
        cout<<endl<<"Details of Student["<<i+1<<"]: "<<endl;
        S[i].show_details();
    }
}

/*
int main(){
    int n,i;
    cout<<"Enter the number of Books: ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<endl;
        B[i].get_details();
        cout<<endl;
    }
    for(i=0;i<n;i++){
        cout<<endl<<"Details of the Book["<<i+1<<"]: "<<endl;
        B[i].display_details();
    }
    return 0;
}
*/

