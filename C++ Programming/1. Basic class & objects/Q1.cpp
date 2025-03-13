// 1. Student Class - Accept and Display Data

#include <iostream>
using namespace std;

class Student {
    int rollNo;
    string name;
    int age;

public:
    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayData() {
        cout << "\nStudent Details:\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.getData();
    s1.displayData();
    return 0;
}
