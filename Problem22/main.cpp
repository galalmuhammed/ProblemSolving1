/*
Problem:Write a program to calculate circle area Inscribed in an Isosceles Triangle,
then print it on the screen.
The use should enter:
a
b
Example Inputs:
20
10
Outputs 
47.124
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;
float PI = 3.14;

struct Area {
    float side1, side2;
};

/* ---- Prototype Section ---- */
Area readInfo();
float calculateArea(Area area);
void print(Area area);
/* ---- End Of Prototype Section ---- */

int main() {
    print(readInfo());

    system("pause");
    return 0;
}

Area readInfo() {
    Area area;
    while (true) {
        cout << "Enter the bigger side of triangle : ";
        cin >> area.side1;
        cout << "Enter the smaller side of triangle : ";
        cin >> area.side2;

        if (area.side1 > 0 && area.side2 > 0 && area.side1 > area.side2) {
            break;
        } else {
            cout << "Invlaid please check if positive number and first number should be bigger.\n";
        }
    }
    return area;
}

float calculateArea(Area area) {
    return (PI * pow(area.side2, 2) / 4) * ((2 * area.side1 - area.side2) / (2 * area.side1 + area.side2));
}

void print(Area area) {
    float result = calculateArea(area);
    cout << "The circle area will be : " << result << endl;
}