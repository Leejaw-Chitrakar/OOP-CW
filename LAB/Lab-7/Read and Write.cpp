#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// WAP to create a copy of a file using the methods: read() and write()
int main()
{
    ifstream sourceFile("source_2.txt", ios::binary);
    ofstream destFile("destination_read_write.txt", ios::binary);

    if (!sourceFile.is_open() || !destFile.is_open())
    {
        cerr << "Error: Could not open files." << endl;
        return 1;
    }

    sourceFile.seekg(0, ios::end);
    long size = sourceFile.tellg();
    sourceFile.seekg(0, ios::beg);

    char *buffer = new char[size];

    sourceFile.read(buffer, size);
    destFile.write(buffer, size);

    delete[] buffer;
    sourceFile.close();
    destFile.close();
    cout << "File copied successfully to destination_read_write.txt" << endl;

    getch();
    return 0;
}
