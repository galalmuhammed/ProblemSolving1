/*
Problem:Write a program to ask the user to enter:
• Number1, Number2, Number3
Then Print the Sum of entered numbers
Example Inputs:
10
20
30
Outputs
60
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void readNumbers(int& num1, int& num2, int& num3);
int sumNumbers(int num1, int num2, int num3);
void printSum(int sum);
/* ---- End Of Prototype Section ---- */

int main() {
    int num1, num2, num3;
    readNumbers(num1, num2, num3);
    int sum = sumNumbers(num1, num2, num3);
    printSum(sum);

    system("pause");
    return 0;
}

void readNumbers(int& num1, int& num2, int& num3) {
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;
}

int sumNumbers(int num1, int num2, int num3) { return num1 + num2 + num3; }

void printSum(int sum) { cout << "The sum of the numbers is: " << sum << endl; }
