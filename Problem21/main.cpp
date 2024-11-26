/*
calculate the area of the circle using the circumference ---> محيط) الدائره)
Problem:Write a program to calculate circle area along the circumference, then print it on the screen.
The use should enter:
L
Example Inputs:
20
Outputs 
31.831
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
const float PI = 3.14;

/* ---- Prototype Section ---- */
float readInfo();
float calcuateArea(float circum);
void printArea(float circum);
/* ---- End Of Prototype Section ---- */

int main() {
    cout << setprecision(3);
    printArea(readInfo());

    system("pause");
    return 0;
}

float readInfo() {
    float circum;

    while (true) {
        cout << "Enter the cirumference of the circle in cm : ";
        cin >> circum;

        if (circum > 0) {
            break;
        } else {
            cout << "Wrong input please enter a possitive number.\n";
        }
    }
    return circum;
}

float calcuateArea(float circum) { return (pow(circum, 2)) / (4 * PI); }

void printArea(float circum) { cout << "The area of the circle is : " << calcuateArea(circum) << endl; }
