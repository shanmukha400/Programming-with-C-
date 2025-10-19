#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor with one argument
    Rectangle(int l) {
        length = breadth = l;
    }

    // Parameterized constructor with two arguments
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;         // Calls default constructor
    Rectangle r2(5);      // Calls single-parameter constructor
    Rectangle r3(4, 6);   // Calls two-parameter constructor

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}
