/*
    Problem: Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to
    settle the loan.
    Input
    5000
    500
    Outputs
    10 Months
*/

#include <iostream>
using namespace std;

struct stInfo {
    float LoanAmount, MonthlyPayment, months;
};

/* ---- Prototype Section ---- */
void readInfo(stInfo& info);
void printInfo(stInfo info);
/* ---- End Of Prototype Section ---- */

int main() {
    stInfo info;

    readInfo(info);
    printInfo(info);

    system("pause");
    return 0;
}

void readInfo(stInfo& info) {
    cout << "Enter the loan amount : ";
    cin >> info.LoanAmount;

    cout << "Enter the monthly payment : ";
    cin >> info.MonthlyPayment;
}

stInfo calculateMonths(stInfo& info) {  //----------> you can use the address & so you don't have to add this line number 47 other wise you will need to add it
    info.months = info.LoanAmount / info.MonthlyPayment;
    return info;
}

void printInfo(stInfo info) {
    // info = calculateMonths(info);     you can use this line if you didn't add the address & in line 41.
    calculateMonths(info);
    cout << "You need " << info.months << " months to finish.\n";
}