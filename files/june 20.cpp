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



/* Nameless Temporary Argument */
/* Its called nameless because only the compiler uses it not the used and the process is hidded */
/* Always use parameterized constructor */
/* Also include a Default constructor */

/*
#include <iostream>
using namespace std;

class car{
    private:
    int price;
    public:
    car(){
        price = 150000;
    }

    void display(){
        cout << "Price os the car is Rs."<< price << endl;
    }

    void setdata(int p){
        price = p;
    }

    car operator ++(){
        car temp;
        temp.price = ++price;
        return temp;
    }

    // Parameterized Constructor
    car(int p){
        price = p;
    }
    
};

int main(){
    car c1,c2,c3;
    c1.display();
    c2 = ++c1;
    c2.display();
    c3.setdata(250000);
    c3.display();
    c2 = ++c3;
    c2.display();
    return 0;
}
*/


