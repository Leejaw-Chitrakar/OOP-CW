#include <iostream>
using namespace std;

class book{
    private:
    int price;
    public:
    book(){
        price = 450;
    }

    void display(){
        cout << "Price of the book is Rs."<< price <<endl;
    }

    book operator ++(){
        book temp;
        temp.price =  ++price;
        return temp;
    }
    
    book operator --(){
        book temp;
        temp.price =  price--;
        return temp;
    }
};

int main(){
    book b1,b2,b3,b4;
    b1.display();
    b2 = ++b1;
    b2.display();

    b3.display();
    b4 = --b3;
    b3.display();
    return 0;
}