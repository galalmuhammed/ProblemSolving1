#include <iostream>
#include <limits>

using namespace std;

enum enMonths { January = 1, February, March, April, May, June, July, August, September, October, November, December };

/* ---- Prototype Section ---- */
void readMonthNumber(short& months);
void printMonth(short months);
/* ---- End Of Prototype Section ---- */

int main() {
    short months;
    readMonthNumber(months);
    printMonth(months);
    return 0;
}

void readMonthNumber(short& months) {
    cout << "Enter the month number (1-12): ";
    while (true) {
        cin >> months;
        if (cin.fail() || months < 1 || months > 12) {
            cin.clear();                                          // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
            cout << "Invalid input, enter a number between 1 and 12: ";
        } else {
            break;
        }
    }
}

void printMonth(short months) {
    switch (months) {
        case enMonths::January:
            cout << "Month is: January.";
            break;
        case enMonths::February:
            cout << "Month is: February.";
            break;
        case enMonths::March:
            cout << "Month is: March.";
            break;
        case enMonths::April:
            cout << "Month is: April.";
            break;
        case enMonths::May:
            cout << "Month is: May.";
            break;
        case enMonths::June:
            cout << "Month is: June.";
            break;
        case enMonths::July:
            cout << "Month is: July.";
            break;
        case enMonths::August:
            cout << "Month is: August.";
            break;
        case enMonths::September:
            cout << "Month is: September.";
            break;
        case enMonths::October:
            cout << "Month is: October.";
            break;
        case enMonths::November:
            cout << "Month is: November.";
            break;
        case enMonths::December:
            cout << "Month is: December.";
            break;
        default:
            cout << "Invalid month number.";
            break;
    }
}
