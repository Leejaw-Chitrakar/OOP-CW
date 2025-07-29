// #include <iostream>
// using namespace std;

// class NRS{
//     private:
//     int rupee,paisa;
//     public:
//     NRS(int r,int p){
//         rupee = r;
//         paisa = p;
//     }
//     operator float(){
//         float w = rupee + (static_cast<float>(paisa)/100);
//         return w;
//     }
// };

// int main(){
//     NRS np(200,50);
//     float z = (float)np;
//     cout << "The converted amount is: " << z << endl;
//     return 0;
// }



//Conversion logic can be used bith in source or distination

#include <iostream>
using namespace std;

class MKS;
class FPS; // pre decleration of class

class MKS{
    private:
    int km, m;
    public:
    MKS(){
        km = 0;
        m = 0;
    }

    MKS(int k, int mtr){
        km = k;
        m = mtr;
    }

    void display(){
        cout << "---------------------------------------" << endl;
        cout << "Km: " << km << endl << "Meter: " << m <<endl;
        cout << "---------------------------------------" << endl;
    }

    // operator FPS(){
    //    int fe = km * 3280;
    //    int in = m * 40;
    //    // To normalize
    //    fe = fe + (in/12);
    //    in = in%12;
    //    return FPS(fe,in);
    // }

    // To use kn and m in FPS
    int getkm(){
        return km;
    }

    int getm(){
        return m;
    }
};


// Shift the class to the top is not working in practical exam
class FPS{
    private:
    int feet, inch;
    public:
    FPS(){
        feet = 0;
        inch = 0;
    }
    
    FPS(int f, int i){
        feet = f;
        inch = i;
    }

    void display(){
        cout << "---------------------------------------" << endl;
        cout << "Feet: " << feet << endl << "Inch: " << inch << endl;
        cout << "---------------------------------------" << endl;
    }

    // Only the object of MKS can call the value of km and m
    FPS(MKS m3){
        feet = m3.getkm()*3280;
        inch = m3.getm()*40;
        feet = feet + (inch/12);
        inch = inch%12;
    }
};




// Convert form MKS to FPS
int main(){
    MKS m1(2,30);
    FPS f1;
    // Destination = Source
    f1 = m1;
    m1.display();
    f1.display();
    
    return 0;
}