#include <iostream>
using namespace std;
class employee {
private:
    int emp_id;
    string name;
    string post;
public:
    employee(){
        emp_id = 0;
        name = "Default Name";
        post = "Default Post";
    }
    employee(int id, string n ,string p){
        emp_id = id;
        name = n;
        post = p;
    }

    void showdata(){
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
    }
};
int main(){
    employee e1,e2,e3;
    int id;
    string name, post;
    cout << "Details of e1 (default constructor):" << endl;
    e1.showdata();
    cout << "Enter Employee ID, Name and Post for e2: ";
    cin >> id >> name >> post;
    e2 = employee(id, name, post);
    cout << "Details of e2 (parameterized constructor):" << endl;
    e2.showdata();
    e3 = e2;
    cout << "Details of e3 (copy constructor):" << endl;
    e3.showdata();
    return 0;
}
