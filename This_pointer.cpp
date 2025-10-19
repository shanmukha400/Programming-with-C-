#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student(string name, int age) {
        // 'this' pointer is used to refer to the current object
        this->name = name;
        this->age = age;
    }

    // Member function using 'this' pointer
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }

    // Function returning current object using 'this'
    Student& setAge(int age) {
        this->age = age;
        return *this; // returning current object reference
    }
};

int main() {
    // Create object
    Student s1("Ravi", 20);

    cout << "Before updating age:" << endl;
    s1.display();

    // Update age using method chaining
    s1.setAge(22);

    cout << "\nAfter updating age:" << endl;
    s1.display();

    return 0;
}
