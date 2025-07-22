#include <iostream>
#include <string>

using namespace std;

class Centimeters {
private:
    double cm_value;
public:
    Centimeters() : cm_value(0.0) {}

    Centimeters(double m) : cm_value(m * 100.0) {
        cout << "Basic (double) to User-Defined (Centimeters) conversion via constructor." << endl;
    }

    void display() const {
        cout << "Value in Centimeters: " << cm_value << " cm" << endl;
    }
};

class Meters {
private:
    double meter_value;
public:
    Meters() : meter_value(0.0) {}
    Meters(double m) : meter_value(m) {}

    void display() const {
        cout << "Value in Meters: " << meter_value << " m" << endl;
    }

    operator double() const {
        cout << "User-Defined (Meters) to Basic (double) conversion via operator double()." << endl;
        return meter_value;
    }
};

class Kilometers {
private:
    double km_value;
public:
    Kilometers() : km_value(0.0) {}

    void display() const {
        cout << "Value in Kilometers: " << km_value << " km" << endl;
    }

    Kilometers(const Meters& m) {
        cout << "User-Defined (Meters) to User-Defined (Kilometers) conversion via constructor." << endl;
        km_value = static_cast<double>(m) / 1000.0;
    }
};

int main() {
    cout << "--- Data Conversion Examples ---" << endl;

    // 1) basic to user defined
    cout << "\n1. Basic to User-Defined Conversion:" << endl;
    double length_in_meters = 1.5;
    Centimeters c1 = length_in_meters;
    c1.display();

    // 2) user defined to basic
    cout << "\n2. User-Defined to Basic Conversion:" << endl;
    Meters m1(2.75);
    m1.display();
    double converted_meters = m1;
    cout << "Converted Meters to double: " << converted_meters << " (basic type)" << endl;

    // 3) user defined to user defined
    cout << "\n3. User-Defined to User-Defined Conversion:" << endl;
    Meters m2(5000.0);
    m2.display();
    Kilometers k1 = m2;
    k1.display();

    cout << "\n--- End of Program ---" << endl;

    return 0;
}