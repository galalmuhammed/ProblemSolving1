/*
Problem:
Write a program to ask the user to enter 3 numbers:
• A
• B
• C
Then Print Max number.
Example Inputs:
30
10
20
Outputs
30
*/

#include <iostream>
using namespace std;

enum enCheck { num1 = 1, num2 = 2, num3 = 3, equal = 4 };

/* ---- Prototype Section ---- */
void readNumbers(int& num1, int& num2, int& num3);
void printResult(int num1, int num2, int num3);
/* ---- End Of Prototype Section ---- */

int main() {
    int num1, num2, num3;

    readNumbers(num1, num2, num3);
    printResult(num1, num2, num3);

    system("pause");
    return 0;
}

void readNumbers(int& num1, int& num2, int& num3) {
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;
    cout << "Enter number 3 : ";
    cin >> num3;
}

enCheck checkNumbers(int num1, int num2, int num3) {
    if (num1 == num2 && num2 == num3)
        return enCheck::equal;
    else if (num1 >= num2 && num1 >= num3)
        return enCheck::num1;
    else if (num2 >= num1 && num2 >= num3)
        return enCheck::num2;
    else
        return enCheck::num3;
}

void printResult(int num1, int num2, int num3) {
    enCheck check = checkNumbers(num1, num2, num3);

    if (check == enCheck::num1) {
        cout << num1 << " Is the greater number \n";
    } else if (check == enCheck::num2) {
        cout << num2 << " Is the greater number \n";
    } else if (check == enCheck::num3) {
        cout << num3 << " Is the greater number \n";
    } else {
        cout << "All Numbers are equal to " << num1 << endl;
    }
}
