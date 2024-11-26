/*
Problem:Write a program to calculate rectangle area through diagonal and side area of
rectangle and print it on the screen.
The use should enter:
a
d
Example Inputs:
5
40
Outputs
198.431
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

struct stInfo {
    float sideA, sideB, sideD, fullArea;
};

/* ---- Prototype Section ---- */
void readInfo(stInfo& info);
void calculateInfo(stInfo& info);
void printArea(stInfo info);
/* ---- End Of Prototype Section ---- */

int main() {
    stInfo info;

    readInfo(info);
    printArea(info);

    cout << "\n";
    system("pause");
    return 0;
}

void readInfo(stInfo& info) {
    cout << "Enter side A : ";
    cin >> info.sideA;

    cout << "Enter side D : ";
    cin >> info.sideD;
}

void calculateInfo(stInfo& info) {
    info.sideB = sqrt(pow(info.sideD, 2) - pow(info.sideA, 2));

    info.fullArea = info.sideA * info.sideB;
}

void printArea(stInfo info) {
    // info = calculateInfo(info);  you can use this method instead
    calculateInfo(info);
    cout << info.fullArea;
}
