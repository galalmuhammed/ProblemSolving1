/*
Problem:Write a program to calculate  circle area circle described around an arbitrary triangle,
then print it on the screen.
The use should enter:
a
b
C
Example Inputs:
5
6
7
Outputs 
40.088
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
const float PI = 3.14;

struct circleArea {
    float a, b, c, fullArea;
};

/* ---- Prototype Section ---- */
float cpower(float a, float b, float c);
/* ---- End Of Prototype Section ---- */

int main() {
    circleArea cArea;

    cout << "Enter the first side : ";
    cin >> cArea.a;

    cout << "Enter the second side : ";
    cin >> cArea.b;

    cout << "Enter the third side : ";
    cin >> cArea.c;

    float p = cpower(cArea.a, cArea.b, cArea.c);

    cArea.fullArea = PI * pow(((cArea.a * cArea.b * cArea.c) / (4 * sqrt(p * (p - cArea.a) * (p - cArea.b) * (p - cArea.c)))), 2);

    cout << cArea.fullArea;

    cout << "\n";
    system("pause");
    return 0;
}

float cpower(float a, float b, float c) {
    float p = ((a + b + c) / 2);
    return p;
}
