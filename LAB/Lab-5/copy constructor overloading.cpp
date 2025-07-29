// WAP to illustrate the copy constructor overloading using assignment operator.

#include <iostream>
using namespace std;

class MyData {
private:
    int* data;
    string name;

public:
    MyData(const string& n = "Def", int val = 0) : name(n) {
        data = new int(val);
    }

    MyData(const MyData& other) : name(other.name + "-copy") {
        data = new int(*other.data);
    }

    MyData& operator=(const MyData& other) {
        if (this != &other) {
            delete data;
            data = new int(*other.data);
            name = other.name;
        }
        return *this;
    }

    ~MyData() {
        delete data;
        data = nullptr;
    }

    void setData(int val) {
        if (data) *data = val;
    }

    int getData() const {
        return data ? *data : -1;
    }

    void display() const {
        cout << "Obj: " << name << ", Data: " << getData() << endl;
    }
};

int main() {
    MyData obj1("Orig", 100);
    obj1.display();

    MyData obj2 = obj1;
    obj2.setData(200);
    obj1.display();
    obj2.display();

    MyData obj3("Another", 300);
    MyData obj4("Target", 400);
    obj3.display();
    obj4.display();

    obj4 = obj3;
    obj4.setData(500);
    obj3.display();
    obj4.display();

    obj3 = obj3;
    obj3.display();

    return 0;
}