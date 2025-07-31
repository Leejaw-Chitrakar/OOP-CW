// WAP to illustrate exception with arguments
#include <iostream>
#include <exception>
using namespace std;

class MyCustomError : public std::exception {
private:
    string message;
    int errorCode;
    string filename;

public:
    MyCustomError(const string& msg, int code, const string& file)
        : message(msg), errorCode(code), filename(file) {}

    const char* what() const noexcept override {
        return message.c_str();
    }

    int getErrorCode() const {
        return errorCode;
    }

    string getFilename() const {
        return filename;
    }
};

void performOperation(int value, const string& file) {
    if (value < 0) {
        throw MyCustomError("Invalid input value", 101, file);
    } else if (value == 0) {
        throw MyCustomError("Operation on zero not permitted", 102, file);
    } else if (file.empty()) {
        throw MyCustomError("Filename cannot be empty", 103, "N/A");
    }
    cout << "Operation successful with value " << value << " on file: " << file << endl;
}

int main() {
    cout << "--- Exception with Arguments ---" << endl;

    try {
        performOperation(-10, "data.txt");
    } catch (const MyCustomError& e) {
        cerr << "Caught Custom Error:" << endl;
        cerr << "  What: " << e.what() << endl;
        cerr << "  Code: " << e.getErrorCode() << endl;
        cerr << "  File: " << e.getFilename() << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a general standard exception: " << e.what() << endl;
    }

    cout << "\n";

    try {
        performOperation(0, "config.json");
    } catch (const MyCustomError& e) {
        cerr << "Caught Custom Error:" << endl;
        cerr << "  What: " << e.what() << endl;
        cerr << "  Code: " << e.getErrorCode() << endl;
        cerr << "  File: " << e.getFilename() << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a general standard exception: " << e.what() << endl;
    }

    cout << "\n";

    try {
        performOperation(5, "");
    } catch (const MyCustomError& e) {
        cerr << "Caught Custom Error:" << endl;
        cerr << "  What: " << e.what() << endl;
        cerr << "  Code: " << e.getErrorCode() << endl;
        cerr << "  File: " << e.getFilename() << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a general standard exception: " << e.what() << endl;
    }

    cout << "\n";

    try {
        performOperation(100, "report.pdf");
    } catch (const MyCustomError& e) {
        cerr << "Caught Custom Error:" << endl;
        cerr << "  What: " << e.what() << endl;
        cerr << "  Code: " << e.getErrorCode() << endl;
        cerr << "  File: " << e.getFilename() << endl;
    } catch (const std::exception& e) {
        cerr << "Caught a general standard exception: " << e.what() << endl;
    }

    cout << "\nProgram continues after exception handling." << endl;

    return 0;
}