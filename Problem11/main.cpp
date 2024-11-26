/*
Problem:Write a program to ask the user to enter:
• Mark1, Mark2, Mark3
Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
Example Inputs:
90
80
70
Outputs
80
PASS
*/

#include <iostream>
using namespace std;

enum enMark { pass = 1, fail = 0 };

/* ---- Prototype Section ---- */
void readNumbers(int& num1, int& num2, int& num3);
float sumNumbers(int num1, int num2, int num3);
enMark checkMark(float sum);
void printSum(float sum);
/* ---- End Of Prototype Section ---- */

int main() {
    int num1, num2, num3;
    readNumbers(num1, num2, num3);
    printSum(sumNumbers(num1, num2, num3));

    system("pause");
    return 0;
}

void readNumbers(int& num1, int& num2, int& num3) {
    do {
        cout << "Enter Number 1 (positive only): ";
        cin >> num1;
        if (num1 <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";
        }
    } while (num1 <= 0);

    do {
        cout << "Enter Number 2 (positive only): ";
        cin >> num2;
        if (num2 <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";
        }
    } while (num2 <= 0);

    do {
        cout << "Enter Number 3 (positive only): ";
        cin >> num3;
        if (num3 <= 0) {
            cout << "Invalid input. Please enter a positive number.\n";
        }
    } while (num3 <= 0);
}

float sumNumbers(int num1, int num2, int num3) { return (num1 + num2 + num3) / 3.0; }

enMark checkMark(float sum) { return (sum >= 50) ? enMark::pass : enMark::fail; }

void printSum(float sum) {
    if (checkMark(sum) == enMark::pass) {
        cout << "Pass\n";
    } else {
        cout << "Fail\n";
    }
}
