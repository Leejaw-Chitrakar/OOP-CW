// Assignment: Convert NRS to USD
#include <iostream>
using namespace std;

class NRS;
class USD;

class NRS
{
private:
    int rs, ps;

public:
    NRS()
    {
        rs = 0;
        ps = 0;
    }

    NRS(int r, int p)
    {
        rs = r;
        ps = p;
    }

    void display()
    {
        cout << "---------------------------------------" << endl;
        cout << "Rupee: " << rs << endl
             << "Paisa: " << ps << endl;
        cout << "---------------------------------------" << endl;
    }
    int getrs()
    {
        return rs;
    }

    int getps()
    {
        return ps;
    }
};

class USD
{
private:
    int usd, ce;

public:
    USD()
    {
        usd = 0;
        ce = 0;
    }

    USD(int u, int c)
    {
        usd = u;
        ce = c;
    }

    void display()
    {
        cout << "---------------------------------------" << endl;
        cout << "USD: " << usd << endl
             << "Cent: " << ce << endl;
        cout << "---------------------------------------" << endl;
    }

    USD(NRS n3)
    {
        // Conversion from NRS to USD
        // 1 USD = 137.33 NRS
        usd = n3.getrs() / 137.33;
        ce = n3.getps() / 137.33 * 100; // Convert paisa to cent
        usd = static_cast<int>(usd);
        ce = static_cast<int>(ce + 0.5); // rounding to nearest cent
    }

    // operator NRS()
    // {
    //     // 1 usd = 137.33 rs
    //     float total_nrs = usd * 137.33 + ce * 137.33 / 100.0;
    //     int rupees = static_cast<int>(total_nrs);
    //     int paisa = static_cast<int>((total_nrs - rupees) * 100 + 0.5);
    //     int rs = usd * 137.33 + ce / 100 * 137.;
    //     return NRS(rupees, paisa);
    // }
};

int main()
{
    NRS n1(500, 50);
    USD u1;
    // Destination = Source
    u1 = n1;
    n1.display();
    u1.display();
    return 0;
}