#include <iostream>
using namespace std;

class student{
    private:
        int roll;
        string name;
        float price;
    public:
        void displaystd(){
            cout<<"---------------"<<endl;
            cout<<"Name: "<<name<<endl<<"Roll: "<<roll<<endl;
            cout<<"---------------"<<endl;
        }

        student(){
            name = "john Doe";
            roll = 0;
        }

        //Parameterized constructor
        student (string n, int r){
            name = n;
            roll = r;
        }

        student(student &temp){ //code works without this block of code [remove this part for default copy]
            name = temp.name;
            roll = temp.roll;
        }
};

class book{
    private:
        string name;
        float price;
    public:
        void displaybook(){
                cout<<"---------------"<<endl;
                cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
                cout<<"---------------"<<endl;
            }
            book(){
                name = "Avenger";
                price = 1500;
            }
};

int main(){
    int r;
    string n;
    student s1;
    book b1;
    s1.displaystd();
    b1.displaybook();

    student s2("Leejaw", 14);
    s2.displaystd();

    cout<<"Enter the name and roll for student 3: ";
    cin>>n>>r;
    student s3(n,r);
    s3.displaystd();


    student s4(s2); //here type of s2 is student [class are the user-define type]
    s4.displaystd();


    return 0;
}
