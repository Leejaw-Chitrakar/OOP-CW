/*
CLASS: book
Attribute: Price
(++operator)
*/

/*
#include <iostream>
using namespace std;

class book{
    int Price = 1500;

public:
    void display(){
        cout << "Price of the book is Rs."<< Price <<endl;
    }

    void operator ++(){
        ++Price;
    }
};

int main(){
    book b1;
    b1.display();

    ++b1;
    b1.display();
    return 0;
}
*/

/* Returning objects form operator fuction */

/*
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
};

int main(){
    book b1,b2;
    b1.display();

    b2 = ++b1;
    b2.display();
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

class apple
{
private:
    int count;

public:
    apple()
    {
        count = 9;
    }

    void display()
    {
        cout << "Number of apple is " << count << endl;
    }

    apple operator++()
    {
        apple temp;
        temp.count = ++count;
        return temp;
    }
};

int main()
{
    apple ap1, ap2;
    ap1.display();

    ap2 = ++ap1;
    ap2.display();
    return 0;
}
*/



