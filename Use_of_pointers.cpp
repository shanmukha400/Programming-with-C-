#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;             // Create an object
    Student *ptr;           // Declare a pointer to Student
    ptr = &s1;              // Store address of s1 in pointer

    // Access members using pointer and arrow operator
    ptr->setData("Ravi", 20);
    ptr->display();

    // Create another object dynamically
    Student *ptr2 = new Student;
    ptr2->setData("Anita", 22);
    ptr2->display();

    delete ptr2;  // Free dynamically allocated memory

    return 0;
}
