#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

// WAP to illustrate testing of errors during file operations fail(), bad(), eof() and good()
int main()
{
    // A. Check a good file
    ifstream goodFile("source_1.txt");
    if (goodFile.is_open())
    {
        cout << "State after opening source_1.txt:" << endl;
        cout << "  good(): " << goodFile.good() << endl;
        cout << "  eof(): " << goodFile.eof() << endl;
        cout << "  fail(): " << goodFile.fail() << endl;
        cout << "  bad(): " << goodFile.bad() << endl;
    }
    else
    {
        cerr << "Error: Could not open source_1.txt" << endl;
    }
    goodFile.close();
    cout << endl;

    // B. Check for EOF and fail
    ifstream eofFile("source_1.txt");
    if (eofFile.is_open())
    {
        char ch;
        while (eofFile.get(ch))
        {
        }
        cout << "State after reading to end of file:" << endl;
        cout << "  good(): " << eofFile.good() << endl;
        cout << "  eof(): " << eofFile.eof() << endl;
        cout << "  fail(): " << eofFile.fail() << endl;
        cout << "  bad(): " << eofFile.bad() << endl;
    }
    eofFile.close();
    cout << endl;

    // C. Check a bad file
    ifstream badFile("non_existent_file.txt");
    cout << "State after trying to open non_existent_file.txt:" << endl;
    cout << "  good(): " << badFile.good() << endl;
    cout << "  eof(): " << badFile.eof() << endl;
    cout << "  fail(): " << badFile.fail() << endl;
    cout << "  bad(): " << badFile.bad() << endl;
    badFile.close();
    cout << endl;

    getch();
    return 0;
}
