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