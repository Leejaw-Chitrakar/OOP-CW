#include <iostream>
using namespace std;

class std_id
{
private:
    int id;

public:

    std_id(){
        id = 10;
    }

    std_id(int I){
        id = I;
    }

    void display(){
        cout << "Your ID is " << id << endl ;
    }

    std_id operator --(){
        id--;
        return std_id(id);
    }

};

int main()
{
    std_id S1, S2, S3, S4;
    S1.display();
    S2 = --S1;
    S2.display();
    S3 = --S2;
    S3.display();
    S4 = --S3;
    S4.display();
    return 0;
}
