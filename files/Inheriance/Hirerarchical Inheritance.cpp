#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
protected:
    string name;
    int employeeId;
    double baseSalary;

public:
    Employee(string n = "Unknown", int id = 0, double salary = 50000.0)
        : name(n), employeeId(id), baseSalary(salary) {
        cout << "Employee constructor called for " << name << " (ID: " << employeeId << ")." << endl;
    }

    void displayEmployeeInfo() const {
        cout << "Name: " << name << ", Employee ID: " << employeeId << ", Base Salary: $" << baseSalary << endl;
    }

    virtual double calculateNetSalary() const {
        return baseSalary;
    }

    virtual ~Employee() {
        cout << "Employee destructor called for " << name << "." << endl;
    }
};

class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(string n, int id, double salary, string dept, double b = 0.0)
        : Employee(n, id, salary), department(dept), bonus(b) {
        cout << "Manager constructor called for " << name << " in " << department << "." << endl;
    }

    void manageTeam() const {
        cout << name << " is managing the " << department << " department." << endl;
    }

    double calculateNetSalary() const override {
        return baseSalary + bonus;
    }

    void displayManagerInfo() const {
        displayEmployeeInfo();
        cout << "Department: " << department << ", Bonus: $" << bonus << ", Net Salary: $" << calculateNetSalary() << endl;
    }

    ~Manager() override {
        cout << "Manager destructor called for " << name << "." << endl;
    }
};

class Developer : public Employee {
private:
    string programmingLanguage;
    string currentProject;

public:
    Developer(string n, int id, double salary, string lang, string project)
        : Employee(n, id, salary), programmingLanguage(lang), currentProject(project) {
        cout << "Developer constructor called for " << name << " (Lang: " << programmingLanguage << ")." << endl;
    }

    void writeCode() const {
        cout << name << " is writing " << programmingLanguage << " code for " << currentProject << "." << endl;
    }

    void displayDeveloperInfo() const {
        displayEmployeeInfo();
        cout << "Programming Language: " << programmingLanguage << ", Current Project: " << currentProject << ", Net Salary: $" << calculateNetSalary() << endl;
    }

    ~Developer() override {
        cout << "Developer destructor called for " << name << "." << endl;
    }
};

class Intern : public Employee {
private:
    string mentorName;
    double stipend;

public:
    Intern(string n, int id, double salary, string mentor, double stip)
        : Employee(n, id, salary), mentorName(mentor), stipend(stip) {
        cout << "Intern constructor called for " << name << " (Mentor: " << mentorName << ")." << endl;
    }

    void learn() const {
        cout << name << " is learning from " << mentorName << "." << endl;
    }

    double calculateNetSalary() const override {
        return stipend;
    }

    void displayInternInfo() const {
        displayEmployeeInfo();
        cout << "Mentor: " << mentorName << ", Stipend: $" << stipend << ", Net Stipend: $" << calculateNetSalary() << endl;
    }

    ~Intern() override {
        cout << "Intern destructor called for " << name << "." << endl;
    }
};

int main() {
    cout << "--- Creating an Employee object ---" << endl;
    Employee emp1("Alice Johnson", 101, 60000.0);
    emp1.displayEmployeeInfo();
    cout << "Alice's net salary: $" << emp1.calculateNetSalary() << endl;
    cout << endl;

    cout << "--- Creating a Manager object ---" << endl;
    Manager mgr1("Bob Williams", 201, 80000.0, "Sales", 15000.0);
    mgr1.displayManagerInfo();
    mgr1.manageTeam();
    cout << endl;

    cout << "--- Creating a Developer object ---" << endl;
    Developer dev1("Charlie Brown", 301, 75000.0, "C++", "New AI Module");
    dev1.displayDeveloperInfo();
    dev1.writeCode();
    cout << endl;

    cout << "--- Creating an Intern object ---" << endl;
    Intern intern1("Diana Prince", 401, 0.0, "Bruce Wayne", 2000.0);
    intern1.displayInternInfo();
    intern1.learn();
    cout << endl;

    cout << "--- Demonstrating Polymorphism with a vector of Employee pointers ---" << endl;
    vector<Employee*> staff;
    staff.push_back(new Manager("Eve Adams", 202, 85000.0, "Marketing", 10000.0));
    staff.push_back(new Developer("Frank Green", 302, 70000.0, "Python", "Web Backend"));
    staff.push_back(new Intern("Grace Hall", 402, 0.0, "Steve Rogers", 1800.0));

    for (const auto& emp_ptr : staff) {
        emp_ptr->displayEmployeeInfo();
        cout << "Calculated Net Salary: $" << emp_ptr->calculateNetSalary() << endl;
        cout << endl;
    }

    for (auto& emp_ptr : staff) {
        delete emp_ptr;
        emp_ptr = nullptr;
    }
    staff.clear();

    cout << "--- Program End ---" << endl;

    return 0;
}