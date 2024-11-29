/*
Write a program to ask the user to enter:
• TotalSales
The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage
to use of the following:
• > 1000,000  Percentage is 1%
• > 500K to 1M  Percentage is 2%
• > 100K – 500K  Percentage is 3%
• > 50K to 100K  Percentage is 5%
• Otherwise  Percentage is 0%
Example Inputs:
110,000
Outputs
3,300
*/

#include <iostream>
using namespace std;

enum enSales { onePercent = 1, twoPercent = 2, threePercent = 3, fivePercent = 5, zeroPercent = 0 };

/* ---- Prototype Section ---- */
void readNumber(double& sales);
enSales checkSales(double sales);
void printCommissionValue(double sales);
/* ---- End Of Prototype Section ---- */

int main() {
    double sales;

    readNumber(sales);
    printCommissionValue(sales);

    system("pause");
    return 0;
}

void readNumber(double& sales) {
    cout << "Enter the Total Sales: ";
    while (true) {
        cin >> sales;

        if (sales >= 0)
            break;
        else
            cout << "Enter a Positive Number: ";
    }
}

enSales checkSales(double sales) {
    if (sales >= 1000000)
        return enSales::onePercent;
    else if (sales > 500000)
        return enSales::twoPercent;
    else if (sales > 100000)
        return enSales::threePercent;
    else if (sales >= 50000)
        return enSales::fivePercent;
    else
        return enSales::zeroPercent;
}

void printCommissionValue(double sales) {
    switch (checkSales(sales)) {
        case enSales::onePercent:
            cout << "Your Commission Value is 1% of the Total Sales: " << sales * 0.01 << "$\n";
            break;
        case enSales::twoPercent:
            cout << "Your Commission Value is 2% of the Total Sales: " << sales * 0.02 << "$\n";
            break;
        case enSales::threePercent:
            cout << "Your Commission Value is 3% of the Total Sales: " << sales * 0.03 << "$\n";
            break;
        case enSales::fivePercent:
            cout << "Your Commission Value is 5% of the Total Sales: " << sales * 0.05 << "$\n";
            break;
        default:
            cout << "Your Commission Value is 0% of the Total Sales: 0$\n";
            break;
    }
}
