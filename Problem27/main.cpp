/*
Print number from N to 1
example : N  = 5;
output : 5 4 3 2 1
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
void readPositiveNumber(int& N);
void printValuesFrom_N_To_1 (int N);
/* ---- End Of Prototype Section ---- */

int main(void) {
    int N;
    readPositiveNumber(N);
    printValuesFrom_N_To_1(N);


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

void printValuesFrom_N_To_1 (int N){
    for (int i = N; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << endl;
}