/*
Problem:Write a program to calculate triangle area then print it on the screen.
The use should enter:
a
h
Example Inputs:
10
8
Outputs 
40
*/

#include <iostream>

using namespace std;

struct stInfo {
    float base, height, area;
};

/* ---- Prototype Section ---- */
void readInfo(stInfo& info);
void calculateArea(stInfo& info);
void printArea(stInfo info);
/* ---- End Of Prototype Section ---- */

int main() {
    stInfo info;

    readInfo(info);
    printArea(info);

    system("pause");
    return 0;
}

void readInfo(stInfo& info) {
    cout << "Enter the base of the triangle: ";
    cin >> info.base;

    cout << "Enter the height of the triangle: ";
    cin >> info.height;
}

void calculateArea(stInfo& info) { info.area = (info.base * info.height) / 2; }

void printArea(stInfo info) {
    calculateArea(info);
    cout << "The area of the triangle is: " << info.area << endl;
}
