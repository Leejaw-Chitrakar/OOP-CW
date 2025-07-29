#include <iostream>
#include <string>

using namespace std;

class Library {
protected:
    string libraryName;
    int BookCount;

public:
    Library(string libName = "College Library", int count = 0){
        libraryName = libName;
        BookCount = count;
        cout << "Library constructor called for: " << libraryName << endl;
    }

    void showLibraryInfo() const {
        cout << "Library Name: " << libraryName << ", Total count: " << BookCount << endl;
    }
};

class Student : public Library {
protected:
    string studentName;
    int rollNumber;

public:
    Student(string libName, int count, string sName, int roll)
        : Library(libName, count), studentName(sName), rollNumber(roll)
    {
        cout << "Student constructor called for: " << studentName << " (Roll: " << rollNumber << ")" << endl;
    }

    void showStudentInfo() const {
        showLibraryInfo();
        cout << "Student Name: " << studentName << ", Roll Number: " << rollNumber << endl;
    }
};

class Book : public Student {
private:
    string bookTitle;
    int bookPrice;

public:
    Book(string libName, int count, string sName, int roll, string title, int price)
        : Student(libName, count, sName, roll), bookTitle(title), bookPrice(price)
    {
        cout << "Book constructor called for: " << bookTitle << " (Price: $" << bookPrice << ")" << endl;
    }

    void showBookDetails() const {
        showStudentInfo();
        cout << "Book Title: " << bookTitle << ", Book Price: $" << bookPrice << endl;
    }
};

int main() {
    cout << "Creating a Book object (which means Library and Student parts are also constructed):" << endl;
    Book myBook("City Public Library", 50000, "Alice Wonderland", 42, "Adventures in C++", 35);

    cout << "\nDisplaying all details from the Book object:" << endl;
    myBook.showBookDetails();

    cout << "\nDemonstrating direct calls to inherited methods:" << endl;
    myBook.showStudentInfo();
    myBook.showLibraryInfo();

    return 0;
}