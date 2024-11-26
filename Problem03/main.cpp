/* Write a program to ask the user to enter a number, then Print “ODD” if its odd, Or “Even” if its even. */

#include <iostream>

using namespace std;

enum enCheck { Odd = 1, even = 0 };

/* ---- Prototype Section ---- */
int readNumber(int& number);
void printCheck(int number);
/* ---- End Of Prototype Section ---- */

int main() {
    int number;

    printCheck(readNumber(number));

    cout << "\n";
    system("pause");
    return 0;
}

int readNumber(int& number) {
    cout << "Enter a number : ";
    cin >> number;

    return number;
}

bool checkNumber(int number) { return (number % 2); }

void printCheck(int number) {
    (number == 0) ? cout << "The Number is 0" : checkNumber(number) == even ? cout << "Even" : cout << "Odd";
}