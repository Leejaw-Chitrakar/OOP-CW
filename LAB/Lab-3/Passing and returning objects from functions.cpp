#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product(string n = "Unknown", double p = 0.0) : name(n), price(p) {}

    void display() {
        cout << "Product: " << name << ", Price: $" << price << endl;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }

    string getName() const {
        return name;
    }
    double getPrice() const {
        return price;
    }
};

Product adjustProductPrice(Product p, double adjustment) {
    cout << "--- Inside adjustProductPrice function ---" << endl;
    cout << "Received Product: ";
    p.display();

    p.setPrice(p.getPrice() + adjustment);

    cout << "Modified Product inside function: ";
    p.display();

    Product newP("Adjusted " + p.getName(), p.getPrice());
    cout << "--- Exiting adjustProductPrice function ---" << endl;
    return newP;
}

int main() {
    cout << "--- Main Program Start ---" << endl;

    Product laptop("Laptop", 1200.00);
    cout << "Original Product in Main: ";
    laptop.display();

    Product finalProduct = adjustProductPrice(laptop, 50.00);

    cout << "\n--- Back in Main Program ---" << endl;
    cout << "Original 'laptop' object (unchanged): ";
    laptop.display();

    cout << "Returned 'finalProduct' object: ";
    finalProduct.display();

    cout << "\n--- Main Program End ---" << endl;

    return 0;
}