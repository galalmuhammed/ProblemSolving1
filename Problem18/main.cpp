/*
Problem:Write a program to calculate circle area then print it on the screen.
The use should enter:
r
Example Inputs:
5
Outputs 
78.54
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
const float PI = 3.141592653589793;

struct stInfo {
    float radius, area;
};

/* ---- Prototype Section ---- */
void readInfo(stInfo& info);
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
    cout << "Enter the Radius of the circle : ";
    cin >> info.radius;
}

void calculateArea(stInfo& info) { info.area = PI * pow(info.radius, 2); }

void printArea(stInfo info) {
    calculateArea(info);
    cout << "The area for the circle will be : " << info.area;
}
