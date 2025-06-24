/*
#include <iostream>
using namespace std;

class samaye{
    private:
    int hour;
    int minutes;
    public:
    samaye(){
        hour = 0;
        minutes = 0;
    }

    samaye(int h, int m){
        hour = h;
        minutes = m;
    }
    
    void setdata(int h, int m){
        hour = h;
        minutes = m;
    }

    void display(){
        cout<< "Time: " << hour << ":" << minutes  << endl;
    }

    bool operator >(samaye tm){
        int total1 = hour * 60 + minutes;
        int total2 = tm.hour * 60 + minutes;
        if(total1 > total2){
            return 1;
        }
        else{
            return 0;
        }
    }

    bool operator =(samaye tm){
        int total1 = hour * 60 + minutes;
        int total2 = tm.hour * 60 + minutes;
        if(total1 = total2){
            return 1;
        }
        else{
            return 0;
        }
    }

    void operator +=(samaye tm){
        hour += tm.hour;
        minutes += tm.minutes;

    }

};

    
int main(){
    samaye t1,t2,t3,t4;
    int h,m;
    cout << "Enter the time (t1): ";
    cin >>h>>m;
    t1.setdata(h,m);
    cout << "Enter the time (t1): ";
    cin >>h>>m;
    t2.setdata(h,m);
    if(t1 = t2){
        cout << "T1 is equal to T2" <<endl;
    }
    else if(t1 > t2){
        cout << "Time T1 is latgest" <<endl;
    }
    else{
        cout << "Time T1 is latgest" <<endl;
    }
    t1.display();
    t2.display();
    t2 += t1;
    t2.display();
    return 0;
}
*/



/*------------------------------------*/


/*
#include <iostream>
using namespace std;


int main(){
    int a = 98;

    char ch = static_cast<char>(a);
    cout << "character of 98 is " << ch <<endl;
    return 0;
}
*/



/*------------------------------------*/


#include <iostream>
using namespace std;

class dist{
    private:
    int km,mile;
    public:
    dist(){
        km = 0;
        mile = 0;
    }
    void setdata(int k,int m){
        km = k;
        mile = m;
    }

    dist(float l){

        km = l /10; // To get km from mile
        mile = (l-km)*100; // To get mile from km
    }

    void display(){
        cout << "len into km and meter:" << endl << km << " " << mile;
    }
};

int main(){
    float len;
    cout << "Enter distance [in km.meter]: " ;
    cin >> len;
    dist d1(len); // distd1 = len; sem thing
    d1.display();
    return 0;
}
