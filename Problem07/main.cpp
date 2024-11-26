/*
Problem:Write a program to ask the user to enter:
• Number
Then Print the “Half of the <Number> is <???>”.
Example Inputs:
60
50
Outputs
Half of 60 is 30
Half of 50 is 25
*/

#include <iostream>

using namespace std;

/* ---- Prototype Section ---- */
float readnumber();
float halfNumber(float number);
void printNumber(float halfNum);
/* ---- End Of Prototype Section ---- */

int main() {
    float number = readnumber();
    float num = halfNumber(number);
    printNumber(num);

    cout << "\n";
    system("pause");
    return 0;
}

float readnumber() {
    float number;
    cout << "Enter a number : ";
    cin >> number;

    return number;
}

float halfNumber(float number) { return number / 2; }
void printNumber(float halfNum) { cout << "Half Of the number is : " << halfNum << endl; }