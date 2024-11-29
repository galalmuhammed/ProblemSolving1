/*
A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the
screen.
Input
100
Outputs
127.6
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

struct stBill {
    float billValue, serviceFee, taxFee, TotalBill;
};

/* ---- Prototype Section ---- */
void readRowBill(stBill& bill);
void calculateServiceFee(stBill& bill);
void calculateTaxFee(stBill& bill);
void printTotalBill(stBill bill);
/* ---- End Of Prototype Section ---- */

int main() {

    stBill bill;

    readRowBill(bill);
    calculateServiceFee(bill);
    calculateTaxFee(bill);

    printTotalBill(bill);

    cout << "\n";
    system("pause");
    return 0;
}

void readRowBill(stBill& bill){
    cout << "Enter Bill Value : ";
    cin >> bill.billValue;
}

void calculateServiceFee(stBill& bill){
    bill.serviceFee = bill.billValue * 1.1;
}

void calculateTaxFee(stBill& bill){
    bill.TotalBill = bill.serviceFee * 1.16;
}

void printTotalBill(stBill bill){
    cout << bill.TotalBill;
}

