#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// WAP to create a copy of a file using the methods: put(), and get().
int main()
{
    ifstream sourceFile("source_1.txt");
    ofstream destFile("destination_get_put_1.txt");

    if (!sourceFile.is_open() || !destFile.is_open())
    {
        cerr << "Error: Could not open files." << endl;
        return 1;
    }

    char ch;
    while (sourceFile.get(ch))
    {
        destFile.put(ch);
    }

    sourceFile.close();
    destFile.close();
    cout << "File copied successfully to destination_get_put.txt" << endl;

    getch();
    return 0;
}
