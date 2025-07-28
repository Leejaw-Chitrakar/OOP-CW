// WAP to input a number from user along with an index to store it in array of size 10.
// 1) Handle exceotion of (int type) if number is negetive.
// 2) Handel expection of (char type) if index is out of bound.

#include <iostream>
#include <exception>
using namespace std;

int main()
{
    int n, A[10];
    cout << "Enter a number: ";
    cin >> n;
    try
    {
        if (n < 0)
        {
            throw n;
        }
        else
        {
            cout << "Enter an index to store the number in array (0-9): ";
            int index;
            cin >> index;
            if (index < 0 || index >= 10)
            {
                throw "Index out of bounds.";
            }
            else
            {
                A[index] = n;
                cout << "Number " << n << " stored at index " << index << endl;
            }
        }
    }
    catch(const int& e){
        cout << "Error: Number must be positive." << endl;
    }
    catch(const char* s){
        cout << "Error: " << s << endl;
    }

    return 0;
}