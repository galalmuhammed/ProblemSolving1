/*
Print Even number from 1 to N
example : N  = 10;
output : 2 4 6 8 10
sum : 30
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void readPositiveNumber(int& N);
void printValuesFrom_1_To_N(int N);
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

void printValuesFrom_1_To_N(int N) {
    int sum = 0;
    for (int i = 2; i <= N; i += 2) {  // Increment by 2 to skip Odd numbers
        if (i > 2) {
            cout << " + ";
        }
        cout << i;
        sum += i;
    }

    cout << endl << "Sum = " << sum << endl;
}