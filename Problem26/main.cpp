/*
Print number from 1 to N
example : N  = 5;
output : 1 2 3 4 5
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
    for (int i = 1; i <= N; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}