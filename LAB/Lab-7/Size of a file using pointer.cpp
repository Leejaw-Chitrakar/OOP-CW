#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// WAP to determine the size of a file using the file pointers manipulators.
int main()
{
    ifstream file("source_3.txt", ios::ate);
    if (!file.is_open())
    {
        cerr << "Error: Could not open file." << endl;
        return 1;
    }

    long size = file.tellg();
    file.close();
    cout << "The size of source_3.txt is: " << size << " bytes" << endl;

    getch();
    return 0;
}
