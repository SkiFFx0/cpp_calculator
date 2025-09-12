#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to the calculator.\n";

    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    double result;

    if (op == '+') result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') result = a / b;
    else {
        cout << "Invalid operator";
        return 1;
    }

    cout << "Result: " << result;
    return 0;
}
