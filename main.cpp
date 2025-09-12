#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Welcome to the calculator.\n";

    double a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    double result;

    switch (op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: division by zero";
                return 1;
            }
            result = a / b;
            break;
        case '^':
            result = pow(a, b);
            break;
        default:
            cout << "Invalid operator";
            return 1;
    }

    cout << "Result: " << result;
    return 0;
}
