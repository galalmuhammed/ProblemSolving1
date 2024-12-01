/*
Write a program to print all letters from A to Z
Outputs
A
B
C
.
.
.
Z
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

/* ---- Prototype Section ---- */
void printValues();
/* ---- End Of Prototype Section ---- */

int main() {
    printValues();

    cout << "\n";
    system("pause");
    return 0;
}

void printValues() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << endl;
    }
}