#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0)
            throw b; // throwing integer exception

        if (a < 0 || b < 0)
            throw string("Negative numbers are not allowed"); // throwing string exception

        if (a > 1000 || b > 1000)
            throw 1.5; // throwing double exception

        cout << "Result (a / b) = " << (a / b) << endl;
    }

    // Catch block for integer exception
    catch (int x) {
        cout << "Exception caught: Division by zero is not allowed!" << endl;
    }

    // Catch block for string exception
    catch (string s) {
        cout << "Exception caught: " << s << endl;
    }

    // Catch block for double exception
    catch (double d) {
        cout << "Exception caught: Numbers are too large!" << endl;
    }

    // Default catch block (optional)
    catch (...) {
        cout << "Unknown exception occurred!" << endl;
    }

    cout << "Program continues normally after exception handling." << endl;
    return 0;
}

