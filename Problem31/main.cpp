/*
Problem: Write a program to ask the user to enter:
• Number
• M
Then Print the Number^M
Example Inputs:
2
4
Outputs
16
*/
#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void read_2_Numbers(int &N, int &I);
int calculate(int N, int I);
void printPower(int fraction);
/* ---- End Of Prototype Section ---- */

int main(void) {
    int N, I;
    read_2_Numbers(N, I);
    printPower(calculate(N, I));

    system("pause");
    return 0;
}

void read_2_Numbers(int &N, int &I) {
    cout << "Enter Main Number : ";
    cin >> N;

    cout << "Enter Fraction Number : ";
    cin >> I;
}

int calculate(int N, int I) {
    int fraction = 1;
    for (int i = I; i > 0; i--) {
        fraction = fraction * N;
    }
    return fraction;
}

void printPower(int fraction) { cout << "Power : " << fraction << endl; }