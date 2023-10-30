#include <iostream>
using namespace std;

// Function to add two numbers
double addition(double num1, double num2) {
    return num1 + num2;  //somethings not right here can you solve it
}

// Function to subtract two numbers
double subtraction(double num1, double num2) {
    return num1 - num2;
}

// Function to divide two numbers, with error handling for division by zero
double division(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;  // Returning 0 as an error indicator
    }
}

// Write the required Function for the important operation
    // Function to multiply two numbers

int main() {
    char operation;
    double num1, num2;

    // Print a welcome message
    cout << "Simple Calculator" << endl;

    // Prompt the user for the desired operation
    cout << "Enter an operation (+, -, /): ";
    cin >> operation;

    // Prompt the user to enter two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    double result;

    // Perform the calculation based on the selected operation
    switch (operation) {
        case '+':
            result = addition(num1, num2);
            break;
        case '-':
            result = subtraction(num1, num2);
            break;
        case '/':
            result = division(num1, num2);
            break;
        // Can add one more important mathematical operation over here
        default:
            // Handle an invalid operation
            cout << "Error: Invalid operation!" << endl;
            return 1;  // Exit with an error code
    }

    // Display the result of the calculation
    cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << endl;

    // Exit with a success code
    return 0;
}
