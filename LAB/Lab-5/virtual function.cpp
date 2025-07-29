// Program to illustrate the use of virtual function

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
    virtual ~Shape() {
        cout << "Shape destructor called." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
    ~Circle() {
        cout << "Circle destructor called." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destructor called." << endl;
    }
};

int main() {
    Circle myCircle;
    Rectangle myRectangle;
    Shape* shapePtr1;
    Shape* shapePtr2;
    shapePtr1 = &myCircle;
    shapePtr2 = &myRectangle;
    cout << "--- Demonstrating Virtual Function ---" << endl;
    shapePtr1->draw();
    shapePtr2->draw();
    cout << "\n--- Direct Calls ---" << endl;
    myCircle.draw();
    myRectangle.draw();
    return 0;
}