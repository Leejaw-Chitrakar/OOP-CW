#include <iostream>#include <iostream>
#include <string>

using namespace std;

class Library {
protected:
    string libraryName;
    int totalResourcesCount;

public:
    Library(string libName = "Central Library", int resources = 0)
        : libraryName(libName), totalResourcesCount(resources) {
        cout << "Library constructor called for: " << libraryName << endl;
    }

    void showLibraryInfo() const {
        cout << "Library Name: " << libraryName << ", Total Resources: " << totalResourcesCount << endl;
    }
};

class Student : public Library {
protected:
    string studentName;
    int rollNumber;

public:
    Student(string libName, int resources, string sName, int roll)
        : Library(libName, resources), studentName(sName), rollNumber(roll) {
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
    Book(string libName, int resources, string sName, int roll, string title, int price)
        : Student(libName, resources, sName, roll), bookTitle(title), bookPrice(price) {
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
using namespace std;

class Animal {
public:
    string species;
    int age;

    Animal(string sp = "Unknown", int a = 0) : species(sp), age(a) {
        cout << "Animal constructor called for " << species << "." << endl;
    }

    void eat() const {
        cout << species << " is eating." << endl;
    }

    void sleep() const {
        cout << species << " is sleeping." << endl;
    }

    void displayAnimalInfo() const {
        cout << "Species: " << species << ", Age: " << age << " years." << endl;
    }

    ~Animal() {
        cout << "Animal destructor called for " << species << "." << endl;
    }
};

class Mammal : public Animal {
public:
    string furColor;
    bool hasMilkGlands;

    Mammal(string sp = "Mammal", int a = 0, string fc = "Brown", bool milk = true)
        : Animal(sp, a), furColor(fc), hasMilkGlands(milk) {
        cout << "Mammal constructor called for " << species << " with " << furColor << " fur." << endl;
    }

    void giveBirth() const {
        cout << species << " is giving birth to live young." << endl;
    }

    void displayMammalInfo() const {
        Animal::displayAnimalInfo();
        cout << "Fur Color: " << furColor << ", Has Milk Glands: " << (hasMilkGlands ? "Yes" : "No") << endl;
    }

    ~Mammal() {
        cout << "Mammal destructor called for " << species << "." << endl;
    }
};

class Dog : public Mammal {
public:
    string breed;
    bool isTrained;

    Dog(string b = "Mixed", int a = 0, string fc = "Black", bool milk = true, bool trained = false)
        : Mammal("Dog", a, fc, milk), breed(b), isTrained(trained) {
        cout << "Dog constructor called for " << breed << " dog." << endl;
    }

    void bark() const {
        cout << breed << " the " << species << " is barking: Woof! Woof!" << endl;
    }

    void fetch() const {
        cout << breed << " the " << species << " is fetching." << endl;
    }

    void displayDogInfo() const {
        Mammal::displayMammalInfo();
        cout << "Breed: " << breed << ", Is Trained: " << (isTrained ? "Yes" : "No") << endl;
    }

    ~Dog() {
        cout << "Dog destructor called for " << breed << " dog." << endl;
    }
};

int main() {
    cout << "--- Creating an Animal object ---" << endl;
    Animal genericAnimal("Lion", 5);
    genericAnimal.displayAnimalInfo();
    genericAnimal.eat();
    cout << endl;

    cout << "--- Creating a Mammal object ---" << endl;
    Mammal human("Human", 30, "None", true);
    human.displayMammalInfo();
    human.eat();
    human.giveBirth();
    cout << endl;

    cout << "--- Creating a Dog object ---" << endl;
    Dog myDog("Golden Retriever", 3, "Golden", true, true);
    myDog.displayDogInfo();
    myDog.bark();
    myDog.fetch();
    myDog.eat();
    myDog.giveBirth();
    myDog.sleep();
    cout << endl;

    cout << "--- Accessing inherited members directly from Dog ---" << endl;
    myDog.age = 4;
    myDog.furColor = "Light Golden";
    cout << "My dog's new age: " << myDog.age << ", new fur color: " << myDog.furColor << endl;
    myDog.displayDogInfo();
    cout << endl;

    cout << "--- Program End ---" << endl;

    return 0;
}