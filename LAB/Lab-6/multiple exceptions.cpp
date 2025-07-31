// WAP to handle multiple exceptions within a single program

#include <iostream>
#include <exception>
using namespace std;

void processValue(int value) {
    if (value < 0) {
        throw -1;
    } else if (value == 0) {
        throw "Value cannot be zero!";
    } else if (value > 100) {
        throw 2.5;
    } else if (value == 50) {
        throw runtime_error("Value 50 detected: specific runtime issue!");
    }
    cout << "Processing value: " << value << endl;
}

int main() {
    cout << "--- Handling Multiple Exceptions ---" << endl;

    try {
        processValue(-5);
    } catch (int e) {
        cerr << "Caught an integer error code: " << e << endl;
    } catch (const char* msg) {
        cerr << "Caught a string error: " << msg << endl;
    } catch (double d) {
        cerr << "Caught a double error: " << d << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a standard exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception!" << endl;
    }

    cout << "\n";

    try {
        processValue(0);
    } catch (int e) {
        cerr << "Caught an integer error code: " << e << endl;
    } catch (const char* msg) {
        cerr << "Caught a string error: " << msg << endl;
    } catch (double d) {
        cerr << "Caught a double error: " << d << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a standard exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception!" << endl;
    }

    cout << "\n";

    try {
        processValue(150);
    } catch (int e) {
        cerr << "Caught an integer error code: " << e << endl;
    } catch (const char* msg) {
        cerr << "Caught a string error: " << msg << endl;
    } catch (double d) {
        cerr << "Caught a double error: " << d << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a standard exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception!" << endl;
    }

    cout << "\n";

    try {
        processValue(50);
    } catch (int e) {
        cerr << "Caught an integer error code: " << e << endl;
    } catch (const char* msg) {
        cerr << "Caught a string error: " << msg << endl;
    } catch (double d) {
        cerr << "Caught a double error: " << d << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a standard exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception!" << endl;
    }

    cout << "\n";

    try {
        processValue(42);
    } catch (int e) {
        cerr << "Caught an integer error code: " << e << endl;
    } catch (const char* msg) {
        cerr << "Caught a string error: " << msg << endl;
    } catch (double d) {
        cerr << "Caught a double error: " << d << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a standard exception: " << e.what() << endl;
    } catch (...) {
        cerr << "Caught an unknown exception!" << endl;
    }

    cout << "\nProgram continues after all exception handling." << endl;

    return 0;
}