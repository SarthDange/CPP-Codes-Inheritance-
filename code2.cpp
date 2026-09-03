#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;

public:
    explicit Employee(string employeeName)
        : name(employeeName) {
    }
};

class Developer : public Employee {
private:
    string language;

public:
    Developer(string employeeName, string programmingLanguage)
        : Employee(employeeName), language(programmingLanguage) {
    }

    void display() const {
        cout << "Developer: " << name << '\n';
        cout << "Language: " << language << '\n';
    }
};

int main() {
    Developer developer("Neha", "C++");

    developer.display();

    return 0;
}