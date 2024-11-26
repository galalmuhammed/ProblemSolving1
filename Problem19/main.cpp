/*
Problem:Write a program to calculate circle area through diameter, then print it on the screen.
The use should enter:
D
Example Inputs:
10
Outputs 
78.54
*/

#include <cmath>
#include <iostream>

using namespace std;
const float PI = 3.14;

struct stInfo {
    float diameter, radius, area;
};

/* ---- Prototype Section ---- */
void readInfo(stInfo& info);
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
    cout << "Enter the diameter for the circle : ";
    cin >> info.diameter;
}

void calcuateArea(stInfo& info) {
    info.radius = info.diameter / 2;
    info.area = PI * (pow(info.radius, 2));
}

void printArea(stInfo info) {
    calcuateArea(info);
    cout << "The area of the circle is : " << info.area << endl;
}