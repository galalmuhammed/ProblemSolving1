/*
Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print
the Sum on screen.
Input
10
20
30
40
-99
Outputs
100
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
float readAndSum();
void printResult(float sum);
/* ---- End Of Prototype Section ---- */

int main(void) {
    printResult(readAndSum());

    cout << endl;
    system("pause");
    return 0;
}

float readAndSum() {
    float sum = 0;
    float number;
    while (true) {
        cout << "Enter a num : ";
        cin >> number;
        if (number == -99)
            break;
        else
            sum += number;
    }
    return sum;
}

void printResult(float sum) { cout << "The Sum Will be : " << sum; }