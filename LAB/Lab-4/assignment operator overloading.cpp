#include <iostream>

using namespace std;

class Weight
{
private:
    int kilograms;
    int grams;

public:
    void setData(int kg, int g)
    {
        kilograms = kg;
        grams = g;
    }

    void display()
    {
        cout << "Total weight = " << kilograms << " kg and " << grams << " grams" << endl;
    }

    void operator+=(Weight temp)
    {
        kilograms += temp.kilograms;
        grams += temp.grams;

        if (grams >= 1000)
        {
            kilograms += grams / 1000;
            grams %= 1000;
        }
    }
};

int main()
{
    Weight w1, w2;
    w1.setData(5, 750);
    w2.setData(3, 500);
    cout << "Initial Weights:" << endl;
    w1.display();
    w2.display();
    w1 += w2;
    cout << "\nWeight after adding w2 to w1:" << endl;
    w1.display();
    return 0;
}