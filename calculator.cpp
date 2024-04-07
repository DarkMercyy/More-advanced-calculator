#include <iostream>
using namespace std;

string character;
double answer;
double numbery;
double number;

void calculate() {
    cout << "What would you like to do?\n";
    cout << "+ = add \n- = subtract\n* = multiply\n/ = divide\n--> ";
    cin >> character;
    cout << "Enter a number: ";
    cin >> numbery;

    if (character == "+") {
        answer = number + numbery;
    } else if (character == "-") {
        answer = number - numbery;
    } else if (character == "*") {
        answer = number * numbery;
    } else if (character == "/") {
        if (numbery != 0) {
            answer = number / numbery;
        } else {
            cout << "Error: Division by zero\n";
            return;
        }
    } else {
        cout << "Invalid operation\n";
        return;
    }

    cout << "Result: " << answer << "\n";
    number = answer;
}

int main() {
    cout << "This is a simple C++ calculator!\n";
    cout << "Enter a number: ";
    cin >> number;

    while (true) {
        calculate();
        char choice;
        cout << "Do you want to continue (y/n)? ";
        cin >> choice;
        if (choice != 'y' && choice != 'Y') break;
    }

    return 0;
}
