// 2. Employee Class with Default Function for Getting and Displaying Data

#include <iostream>
using namespace std;

class Employee {
    int empID;
    string name;
    float salary;

public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayData() {
        cout << "\nEmployee Details:\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee e1;
    e1.getData();
    e1.displayData();
    return 0;
}
