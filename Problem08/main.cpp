/*
Write a program to ask the user to enter:
• Mark
Then Print the “PASS” if mark >=50, otherwise print “Fail”
Example Inputs:
45
Outputs
Fail
*/

#include <iostream>

using namespace std;

enum enMark { pass = 1, fail = 0 };

/* ---- Prototype Section ---- */
short readPositiveNumber();
void printMark(short mark);
/* ---- End Of Prototype Section ---- */

int main() {
    printMark(readPositiveNumber());

    cout << "\n";
    system("pause");
    return 0;
}

short readPositiveNumber() {
    short mark;
    cout << "Enter Your mark here : ";

    while (true) {
        cin >> mark;
        if (mark >= 0)
            break;
        else
            cout << "Wrong Input Please Enter A Positive Number : ";
    }
    return mark;
}

enMark checkMark(short mark) { return (mark < 50) ? enMark::fail : enMark::pass; }

void printMark(short mark) { checkMark(mark) == enMark::fail ? cout << "Fail." << endl : cout << "Pass." << endl; }