#include <iostream>
using namespace std;

class Vehicle {
public:
    string color;
    int speed;

    Vehicle(string col = "White", int spd = 0) : color(col), speed(spd) {
        cout << "Vehicle constructor called for " << color << " vehicle." << endl;
    }

    void accelerate(int increaseBy) {
        speed += increaseBy;
        cout << "Vehicle accelerated. Current speed: " << speed << " km/h." << endl;
    }

    void brake(int decreaseBy) {
        speed -= decreaseBy;
        if (speed < 0) {
            speed = 0;
        }
        cout << "Vehicle braked. Current speed: " << speed << " km/h." << endl;
    }

    void displayVehicleInfo() const {
        cout << "Color: " << color << ", Speed: " << speed << " km/h." << endl;
    }

    ~Vehicle() {
        cout << "Vehicle destructor called for " << color << " vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    int numDoors;

    Car(string col = "Red", int spd = 0, int doors = 4)
        : Vehicle(col, spd), numDoors(doors) {
        cout << "Car constructor called for " << color << " car with " << numDoors << " doors." << endl;
    }

    void openDoors() {
        cout << "Opening all " << numDoors << " doors of the " << color << " car." << endl;
    }

    void displayVehicleInfo() const {
        Vehicle::displayVehicleInfo();
        cout << "Number of Doors: " << numDoors << endl;
    }

    ~Car() {
        cout << "Car destructor called for " << color << " car." << endl;
    }
};

int main() {
    cout << "--- Creating a Vehicle object ---" << endl;
    Vehicle myBike("Black", 20);
    myBike.displayVehicleInfo();
    myBike.accelerate(10);
    myBike.brake(5);
    myBike.displayVehicleInfo();
    cout << endl;

    cout << "--- Creating a Car object ---" << endl;
    Car myCar("Blue", 0, 4);
    myCar.displayVehicleInfo();
    myCar.accelerate(50);
    myCar.openDoors();
    myCar.brake(20);
    myCar.displayVehicleInfo();
    cout << endl;

    cout << "--- Demonstrating inheritance features ---" << endl;
    myCar.color = "Green";
    myCar.accelerate(10);
    cout << "My car is now " << myCar.color << endl;
    myCar.displayVehicleInfo();

    cout << endl;
    cout << "--- Program End ---" << endl;

    return 0;
}