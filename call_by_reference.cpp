#include <iostream>
using namespace std;

// Function using call by reference
void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "In swap:   " << x << "\t" << y << "\n";
}

int main() {
    int a = 30;
    int b = 20;

    cout << "Before swap: " << a << "\t" << b << "\n";
    swap(a, b);  // Function call (call by reference)
    cout << "After swap:  " << a << "\t" << b;

    return 0;
}

