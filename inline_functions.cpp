#include <iostream>
using namespace std;

// Inline function definition
inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " = " << square(num) << endl;
    cout << "Cube of " << num << " = " << cube(num) << endl;

    return 0;
}

