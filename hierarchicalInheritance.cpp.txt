
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name, department;

public:
    void acceptEmployee() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Department: ";
        getline(cin, department);
    }

    void displayEmployee() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

class TeachingStaff : public Employee {
    string subject, qualification;

public:
    void accept() {
        acceptEmployee();

        cout << "Enter Subject: ";
        getline(cin, subject);

        cout << "Enter Qualification: ";
        getline(cin, qualification);
    }

    void display() {
        displayEmployee();
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee {
    string designation;
    int workingHours;

public:
    void accept() {
        acceptEmployee();

        cout << "Enter Designation: ";
        getline(cin, designation);

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void display() {
        displayEmployee();
        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << endl;
    }
};

int main() {
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "\nTeaching Staff Details\n";
    t.accept();
    t.display();

    cout << "\nNon-Teaching Staff Details\n";
    n.accept();
    n.display();

    return 0;
}
