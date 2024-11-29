/*
Write a program to ask the user to enter:
• Number1
• Number 2
• OperationType
Then perform the calculation according to the Operation Type as follows:
• “+” : add the two numbers.
• “-” : Subtract the two numbers.
• “*” : Multiply the two numbers.
• “/” : Divide the two numbers.
Example Inputs:
10
20
*
Outputs
200
*/
#include <iostream>
#include <limits>

using namespace std;

enum enOp { ADD = 1, SUB = 2, MULT = 4, DIV = 3 };

struct stOp {
    float num1, num2, result;
    short operation;
};

/* ---- Prototype Section ---- */
void readInfo(stOp& op);
stOp checkOperation(stOp op);
void printResult(const stOp& op);
/* ---- End Of Prototype Section ---- */

int main(void) {
    stOp op;
    readInfo(op);

    op = checkOperation(op);
    printResult(op);
    
    return 0;
}

void readInfo(stOp& op) {
    cout << "Enter the first number: ";
    while (!(cin >> op.num1)) {
        cout << "Invalid input! Please enter a valid number for the first number: ";
        cin.clear();  // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
    }

    cout << "Enter the second number: ";
    while (!(cin >> op.num2)) {
        cout << "Invalid input! Please enter a valid number for the second number: ";
        cin.clear();  // Clear error state
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
    }

    cout << "Enter the operation you want to perform: \n";
    cout << "1 - Addition\n";
    cout << "2 - Subtraction\n";
    cout << "3 - Division\n";
    cout << "4 - Multiplication\n";
    cout << "Your Choice: ";

    while (true) {
        cin >> op.operation;

        if (op.operation >= 1 && op.operation <= 4)
            break;
        else
            cout << "Invalid input! Enter a number between 1 and 4: ";
    }
}

stOp checkOperation(stOp op) {
    switch(op.operation) {
        case ADD:
            op.result = op.num1 + op.num2;
            break;
        case SUB:
            op.result = op.num1 - op.num2;
            break;
        case DIV:
            if (op.num2 != 0) {
                op.result = op.num1 / op.num2;
            } else {
                cout << "Error: Division by zero is not allowed!\n";
                op.result = 0;  // Or you can prompt the user for a new second number
            }
            break;
        case MULT:
            op.result = op.num1 * op.num2;
            break;
        default:
            cout << "Invalid operation!\n";
            op.result = 0;
            break;
    }
    return op;
}

void printResult(const stOp& op) {
    switch(op.operation) {
        case ADD:
            cout << "The result of the addition is: " << op.result << endl;
            break;
        case SUB:
            cout << "The result of the subtraction is: " << op.result << endl;
            break;
        case DIV:
            if (op.num2 != 0)
                cout << "The result of the division is: " << op.result << endl;
            break;
        case MULT:
            cout << "The result of the multiplication is: " << op.result << endl;
            break;
        default:
            cout << "No valid operation was performed.\n";
            break;
    }
}
