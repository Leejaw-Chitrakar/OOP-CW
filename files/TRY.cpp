// WAP to read and display 10 objects of item class containing data member item, name, code and price
#include <iostream>
using namespace std;

class Item
{
private:
    int itemNum;
    string itemName;
    int itemCode;
    float itemPrice;

public:
    void setdate(int num, string name, int code, float price)
    {
        itemNum = num;
        itemName = name;
        itemCode = code;
        itemPrice = price;
    }
    void display()
    {
        cout << "Item Number: " << itemNum << endl;
        cout << "Item Name: " << itemName << endl;
        cout << "Item Code: " << itemCode << endl;
        cout << "Item Price: $" << itemPrice << endl;
    }
} I[3];

int main()
{
    int num;
    string name;
    int code;
    float price;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for item " << (i + 1) << ":" << endl;
        cout << "Item Number: ";
        cin >> num;
        cout << "Item Name: ";
        cin >> name;
        cout << "Item Code: ";
        cin >> code;
        cout << "Item Price: ";
        cin >> price;

        I[i].setdate(num, name, code, price);
    }

    cout << "\nDisplaying Item Details:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\nItem " << (i + 1) << ":" << endl;
        I[i].display();
    }

    return 0;
}