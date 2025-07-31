// WAP to illustrate the use of multiple types in class template

#include <iostream>
using namespace std;

template <class T1, class T2>
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

    Pair<string, char> p2("Hello", 'W');
    cout << "Pair 2: ";
    p2.display();

    return 0;
}