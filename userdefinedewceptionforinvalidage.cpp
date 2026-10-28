#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age! Age must be between 1 and 120.";
    }
};

class Person {
    int age;

public:
    void getAge() {
        cout << "Enter age: ";
        cin >> age;

        if (age < 1 || age > 120) {
            throw InvalidAgeException();
        }
    }

    void display() {
        cout << "Age is valid." << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person p;

    try {
        p.getAge();
        p.display();
    }
    catch (const InvalidAgeException& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}