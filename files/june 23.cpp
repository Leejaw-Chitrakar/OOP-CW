#include <iostream>
using namespace std;

class samaye
{
private:
    int hour, minutes;

public:
    samaye()
    {
        hour = 0;
        minutes = 0;
    }

    samaye(int h, int m)
    {
        hour = h;
        minutes = m;
    }

    void display()
    {
        cout << "Time: " << hour << ": " << minutes << endl;
    }

    samaye operator+(samaye s5)
    {
        samaye temp;
        temp.hour = hour + s5.hour;
        temp.minutes = minutes + s5.minutes;

        // Self Implemented
        // if (temp.minutes > 60)
        // {
        //     temp.hour = temp.hour + temp.minutes / 60;
        //     temp.minutes = temp.minutes % 60;
        // }

        return temp; // return samaye(temp.hour, temp.minutes)
    }
    // fot nameless
    //  samaye operator +(samaye s5){
    //      int hr = hour + s5.hour;
    //      int min = minutes + s5.minutes;
    //      return samaye(hr,min);
    //  }
};

int main()
{
    samaye s1(2, 40), s2(10, 50), s3;
    s1.display();
    s2.display();
    s3 = s1 + s2; // Equivalent to s3 = s1.operator +(s2)
    s3.display();
    return 0;
}



// #include <iostream>
// using namespace std;

// class dhewa{
//     private:
//     int rupees, paisa;
//     public:
    
//     dhewa(){
//         rupees = 0;
//         paisa = 0;
//     }

//     dhewa(int r, int p){
//         rupees = r;
//         paisa = p;
//     }

//     void display(){
//         cout << "I have " << rupees << "rupees" << "and " << paisa << "paisa." << endl;
//     }

//     dhewa operator -=(dhewa d5){
//         dhewa maru;
//         maru.rupees = rupees - d5.rupees;
//         maru.paisa = paisa - d5.paisa;
//         return maru;
//     }

//     // nameless
//     // dhewa operator -= (dhewa d5){
//     //     int r = rupees - d5.rupees;
//     //     int p = paisa - d5.paisa;
//     //     return dhewa(r,p);
//     // }
// };

// int main(){
//     dhewa d1(150, 75), d2(50, 25), d3;
//     d1.display();
//     d2.display();
//     d3 = d1 -= d2;
//     d3.display();
//     return 0;
// }