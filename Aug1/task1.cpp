#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    friend void operator>>(istream &in, Time &T);
    friend void operator<<(ostream &out, Time &T);
};

void operator>>(istream &in, Time &T)
{
    cout << "Enter hours: ";
    in >> T.hours;
    cout << "Enter minutes: ";
    in >> T.minutes;
    cout << "Enter seconds: ";
    in >> T.seconds;
}

void operator<<(ostream &out, Time &T) {
    cout << "Time is : " << endl;
    out << T.hours << " : " << T.minutes << " : " << T.seconds << endl;
}


int main(){
    Time T1(4,43,56);
    cin >> T1;
    cout << T1;
    return 0;
}

