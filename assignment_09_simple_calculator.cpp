#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exp);

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n==============================\n";
        cout << "       SIMPLE CALCULATOR      \n";
        cout << "==============================\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exponentiation (^)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number between 1 and 6.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if (choice == 6) {
            cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        if (choice < 1 || choice > 6) {
            cout << "Invalid choice. Please select a valid option from the menu.\n";
            continue;
        }

        cout << "Enter first number: ";
        while (!(cin >> num1)) {
            cout << "Invalid input. Enter a valid number: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << "Enter second number: ";
        while (!(cin >> num2)) {
            cout << "Invalid input. Enter a valid number: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        cout << fixed << setprecision(2);

        switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed.\n";
                } else {
                    result = divide(num1, num2);
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            case 5:
                result = power(num1, num2);
                cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
                break;
        }

    } while (choice != 6);

    return 0;
}

// Function definitions for each arithmetic operation
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double power(double base, double exp) {
    return pow(base, exp);
}