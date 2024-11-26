/*
Problem:Write a program to calculate rectangle area and print it on the screen.
Example Inputs:
10
20
Outputs
200
*/

#include <iostream>
using namespace std;

struct stInfo {
    float sideA, sideB, area;
};

/* ---- Prototype Section ---- */
stInfo rectangleInfo(stInfo& info);
void printArea(stInfo info);
/* ---- End Of Prototype Section ---- */

int main() {
    stInfo info;

    rectangleInfo(info);
    printArea(info);

    system("pause");
    return 0;
}

stInfo rectangleInfo(stInfo& info) {
    cout << "Enter side A : ";
    cin >> info.sideA;

    cout << "Enter side B : ";
    cin >> info.sideB;

    return info;
}

float rectangleArea(stInfo info) { return info.sideA * info.sideB; }

void printArea(stInfo info) { cout << "Rectangle Area will be : " << rectangleArea(info) << endl; }