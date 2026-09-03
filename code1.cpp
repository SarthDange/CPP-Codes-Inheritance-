#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;

public:
    explicit Person(string personName)
        : name(personName) {
    }

    void displayName() const {
        cout << "Name: " << name << '\n';
    }
};

class Student : public Person {
private:
    int rollNumber;

public:
    Student(string studentName, int roll)
        : Person(studentName), rollNumber(roll) {
    }

    void displayStudent() const {
        displayName();
        cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main() {
    Student student("Amit", 101);

    student.displayStudent();

    return 0;
}