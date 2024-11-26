/*
Problem:Write a program to calculate Circle area inscribed in a square, then print it on the screen.
The use should enter:
A
Example Inputs:
10
Outputs 
78.54
*/

#include <cmath>
#include <iostream>

using namespace std;

const float PI = 3.141592653589793;

/* ---- Prototype Section ---- */
float readInfo();
float calculateArea(float info);
void printingArea(float info);
/* ---- End Of Prototype Section ---- */

int main() {
    printingArea(calculateArea(readInfo()));

    system("pause");
    return 0;
}

float readInfo() {
    float info;
    cout << "Enter the length of the side of the square that is the cirlce inscribed into it : ";

    while (true) {
        cin >> info;
        if (info >= 0)
            break;
        else
            cout << "Wrong info please enter a possitive info : ";
    }

    return info;
}
float calculateArea(float info) { return PI * (pow(info, 2) / 4); }

void printingArea(float info) { cout << "The area of the circle is : " << info << endl; }