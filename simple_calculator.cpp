#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num1, num2;
    int operation;
    while (true) {
        cout << "\nChoose operation:\n1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Square Root\n6: EXIT\n";
        cin >> operation;
        if (operation == 6) break; 
        cout << "Enter first number: ";
        cin >> num1;
        if (operation == 5) {
            cout << "Square Root: " << sqrt(num1) << endl;
            continue; 
        }
        cout << "Enter second number: ";
        cin >> num2;
        switch (operation) {
            case 1: cout << "Sum: " << num1 + num2 << endl; break;
            case 2: cout << "Difference: " << num1 - num2 << endl; break;
            case 3: cout << "Product: " << num1 * num2 << endl; break;
            case 4: cout << "Quotient: " << num1 / num2 << endl; break;
            default: cout << "Invalid operation.\n"; break;
        }
    }
    return 0;
}