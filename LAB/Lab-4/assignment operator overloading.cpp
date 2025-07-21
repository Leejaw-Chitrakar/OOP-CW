#include <iostream>
using namespace std;

class MyItem {
private:
    int id;
    string description;

public:
    MyItem(int i = 0, string desc = "Default Item") : id(i), description(desc) {}

    MyItem& operator=(const MyItem& other) {
        cout << "Assignment operator called!" << endl;

        if (this == &other) {
            return *this;
        }

        id = other.id;
        description = other.description;

        return *this;
    }

    void display() const {
        cout << "ID: " << id << ", Description: " << description << endl;
    }

    void setDescription(string desc) {
        description = desc;
    }
};

int main() {
    MyItem item1(101, "Laptop");
    MyItem item2(202, "Monitor");

    cout << "Initial states:" << endl;
    item1.display();
    item2.display();

    cout << "\nAssigning item2 = item1;" << endl;
    item2 = item1;

    cout << "\nStates after assignment:" << endl;
    item1.display();
    item2.display();

    cout << "\nModifying item1 to show independence:" << endl;
    item1.setDescription("Gaming Laptop");
    item1.display();
    item2.display();

    return 0;
}