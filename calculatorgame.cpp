#include <iostream>
using namespace std;

void showMenu() {
    cout << "\nSelect an operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "Enter your choice (1-4): ";
}

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
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed.\n";
        return 0;
    }
}

int main() {
    double num1, num2, result;
    int choice;
    char continueCalculation;

    cout << "Welcome to the Simple Calculator!\n";

    do {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        showMenu();
        cin >> choice;

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
                result = divide(num1, num2);
                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
            default:
                cout << "Invalid choice! Please select a valid operation.\n";
                break;
        }

       
        cin >> continueCalculation;

    } while (continueCalculation == 'y' || continueCalculation == 'Y');

    cout << "Thank you for using the Simple Calculator!\n";

    return 0;
}
