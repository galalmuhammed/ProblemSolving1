/*
    Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then 
    calculate the monthly installment amount.
    Input 
    5000
    10
    Outputs
    500
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
    cout << "Enter the loan amount you need : ";
    cin >> info.LoanAmount;

    cout << "On how many months : ";
    cin >> info.months;
}

stInfo calculateMonths(stInfo& info) {  //----------> you can use the address & so you don't have to add this line number 47 other wise you will need to add it
    info.MonthlyPayment = info.LoanAmount / info.months;
    return info;
}

void printInfo(stInfo info) {
    // info = calculateMonths(info);     you can use this line if you didn't add the address & in line 41.
    calculateMonths(info);
    cout <<  "You will pay " << info.MonthlyPayment << " each month.\n";
}