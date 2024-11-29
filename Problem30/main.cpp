/*
Problem: Write a program to calculate factorial of N!
Example: factorial of 6 : 6 x 5 x 4 x 3 x 2 x 1 = 720
Note: User should only enter positive number, other wise reject it and ask to enter again
Input 
6
Outputs
720
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void readPositiveNumber(int& N);
void printValuesFrom_1_To_N (int N);
/* ---- End Of Prototype Section ---- */

int main(void) {
    int N;
    readPositiveNumber(N);
    printValuesFrom_1_To_N(N);


    system("pause");
    return 0;
}

void readPositiveNumber(int& N) {
    cout << "Enter N Value : ";

    while (true) {
        cin >> N;

        if (N >= 0)
            break;
        else
            cout << "Invalid Try A Positive Number : ";
    }
}

void printValuesFrom_1_To_N (int N){
    int factorial = 1;
    for (int i = 1; i <= N; i++)
    {
        if (i > 1)
        {
            cout << " * " ;
        }
        cout <<  i ;
        factorial *= i;
    }
    cout << endl << "Factorial : " <<factorial << endl;
}