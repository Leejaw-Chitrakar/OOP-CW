/*Assignment 1*/
/*
#include <iostream>
using namespace std;
class Rectangle{
    public:
        int length,breadth;
        void calc_area(){
            int area=length*breadth;
            cout<<"The area of the rectangel is "<<area<<endl;
        }
};

int main(){
    Rectangle r1;
    r1.length = 17;
    r1.breadth = 4;
    r1.calc_area();
    return 0;
}
*/


/*Assignment 2*/
/*
#include <iostream>
using namespace std;

class cat {
    private:
        string breed,color;
        float weight;

    public:
        void setdetails(string Cbreed, string Ccolor, float Cweight){
            breed = Cbreed;
            color = Ccolor;
            weight = Cweight;
        }

        void display(){
            cout << "Cat Details:"<<endl;
            cout << "Breed: "<<breed<<endl;
            cout << "Color: "<<color<<endl;
            cout << "Weight: "<<weight<<"Kg"<<endl;
        }
};

int main() {
    cat c1;
    c1.setdetails("American Bobtail", "Cream", 5.6);
    c1.display();
    return 0;
}
*/

/*Assignment 3*/
/*
#include <iostream>
using namespace std;

class employee{
    private:
        int emp_id;
        string name,post;


    public:
        void setdata(){
            cout<<"Enter the ID: ";
            cin>>emp_id;
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the post: ";
            cin>>post;
        }
        void showdata(){
            cout << "Employee ID: " << emp_id << endl;
            cout << "Name: " << name << endl;
            cout << "Post: " << post << endl;
        }

};

int main(){
    employee e1,e2;
    cout << "Please provide details for Employee 1:" <<endl;
    e1.setdata();
    e1.showdata();
    cout << "Please provide details for Employee 2:" <<endl;
    e2.setdata();
    e2.showdata();
    return 0;
}
*/
