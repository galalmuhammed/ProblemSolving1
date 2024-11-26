/*
Problem: Write a program to ask the user to enter:
• Mark1, Mark2, Mark3
Then Print the Average of entered Marks
Example Inputs:
90
80
70
Outputs
80
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void readNumbers(int& num1, int& num2, int& num3);
float sumNumbers(int num1, int num2, int num3);
void printSum(float sum);
/* ---- End Of Prototype Section ---- */

int main() {
    int num1, num2, num3;
    readNumbers(num1, num2, num3);
    float sum = sumNumbers(num1, num2, num3);
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

float sumNumbers(int num1, int num2, int num3) { return (num1 + num2 + num3) / 3; }

void printSum(float sum) { cout << "The average of the numbers is: " << sum << endl; }
