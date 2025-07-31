// WAP to illustrate the use of multiple types in class template

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }

    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 20.5);
    cout << "Pair 1: ";
    p1.display();
    cout << "First value: " << p1.getFirst() << ", Second value: " << p1.getSecond() << endl;

    Pair<string, char> p2("Hello", 'W');
    cout << "Pair 2: ";
    p2.display();

    Pair<bool, int> p3(true, 123);
    cout << "Pair 3: ";
    p3.display();

    return 0;
}