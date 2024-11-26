/*
Problem:Write a program to ask the user to enter:
• Number1
• Number2
Then print the two numbers , then Swap the two numbers and print them
Example Inputs:
10
20
Outputs
10
20
20
10
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void readNumbers(int& a, int& b);
void swapNumbers(int& a, int& b);
void printNumbers(int a, int b);
/* ---- End Of Prototype Section ---- */

int main() {
    int a, b;
    readNumbers(a, b);
    cout << "Numbers before swap\n";
    printNumbers(a, b);

    cout << "Numbers after swap\n";
    swapNumbers(a, b);
    printNumbers(a, b);

    system("pause");
    return 0;
}

void readNumbers(int& a, int& b) {
    cout << "Enter the first number : ";
    cin >> a;

    cout << "Enter the second number : ";
    cin >> b;
}
void swapNumbers(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void printNumbers(int a, int b) {
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
}