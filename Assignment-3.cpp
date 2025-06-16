/* Assignment 1 */
/*
#include <iostream>
using namespace std;
class rectangle {
private:
    float length;
    float breadth;
public:
    void calc_area(int length, int breadth) {
        cout << "Area of rectangle is: " << length * breadth << endl;
    }

    rectangle() {
        length = 0;
        breadth = 0;
    }
    
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
};
int main(){
    int l, b;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    rectangle r1;
    r1.calc_area(l,b);
    return 0;
}
*/

/* Assignment 2 */
/*
#include <iostream>
using namespace std;
class cat{
private:
    string breed;
    string color;
    float weight;
public:
    cat(){
        breed = "Husky";
        color = "Brown";
        weight = 3.5;
    }
    
    void setdetails(string b, string c, float w) {
        breed = b;
        color = c;
        weight = w;

    }

    void display(){
        cout << "Breed: " << breed << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << endl;
    }
};

int main(){
    cat c1,c2;
    string breed, color;
    float weight;
    cout << "Details of c1:" << endl;
    cin>> breed >> color >> weight;
    c1.setdetails(breed, color, weight);
    cout << endl << "Details of c1:" << endl;
    c1.display();
    cout << endl;
    c2.setdetails("persian", "White", 4.5);
    cout << "Details of c2:" << endl;
    c2.display();
    return 0;
}
*/

/* Assignment 3 */
/*
#include <iostream>
using namespace std;
class employee {
private:
    int emp_id;
    string name;
    string post;
public:
    employee(){
        emp_id = 0;
        name = "Default Name";
        post = "Default Post";
    }
    employee(int id, string n ,string p){
        emp_id = id;
        name = n;
        post = p;
    }

    void showdata(){
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
    }
};
int main(){
    employee e1,e2,e3;
    int id;
    string name, post;
    cout << "Details of e1 (default constructor):" << endl;
    e1.showdata();
    cout << "Enter Employee ID, Name and Post for e2: ";
    cin >> id >> name >> post;
    e2 = employee(id, name, post);
    cout << "Details of e2 (parameterized constructor):" << endl;
    e2.showdata();
    e3 = e2;
    cout << "Details of e3 (copy constructor):" << endl;
    e3.showdata();
    return 0;
}
*/

/* Assignment 4 */
/*
Create any class of your choice with your own data members.
    a. Define a parameterized constructor and a function to display the data
    members.
    b. In the main module,
        i. Create an object using the parametrized constructor.
        ii. Create another object using the default copy constructor.
    c. Finally, define a destructor that prints: “Destructor Executed!!”
*/
#include <iostream>
using namespace std;

class car{
private:
    string model,make;
    int year;
public:
    car(){
        model = "Default Model";
        make = "Default Make";
        year = 0;
    }
    
    car(string m, string mk, int y){
        model = m;
        make = mk;
        year = y;
    }

    void display(){
        cout << "Model: " << model << endl;
        cout << "Make: " << make << endl;
        cout << "Year: " << year << endl;   
    }

    ~car() {
        cout << endl << "Destructor Executed!!" << endl;
    }

};

int main(){
    string model, make;
    int year;
    cout << "Enter car model, make and year: ";
    cin >> model >> make >> year;
    cout << endl;
    car c1(model, make, year);
    c1.display();
    cout << endl;
    car c2 = c1; // Default copy constructor
    cout << "Details of copied car:" << endl;
    c2.display();
    return 0;
}