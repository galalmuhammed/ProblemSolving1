/*
Problem:
Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.
Input
50
20
Outputs
30
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

struct stBill {
    float totalBill, cashPaid, Remainder;
};

/* ---- Prototype Section ---- */
void readInfo(stBill& bill);
void printRemander(stBill bill);
/* ---- End Of Prototype Section ---- */

int main() {
    stBill bill;

    readInfo(bill);
    printRemander(bill);

    system("pause");
    return 0;
}

void readInfo(stBill& bill) {
    cout << "Enter the Total Bill : ";
    cin >> bill.totalBill;

    cout << "Enter the Cash Paid : ";
    cin >> bill.cashPaid;

    bill.Remainder = bill.totalBill - bill.cashPaid;
}

void printRemander(stBill bill) { cout << "The Remainder will be : " << bill.Remainder << endl; }