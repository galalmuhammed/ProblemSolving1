/*
Write a program to ask the user to enter:
• Pennies, Nickels, Dimes, Quarters, Dollars
Then calculate the total pennies , total dollars and print them on screen
giving that:
• Penny = 1
• Nickel = 5
• Dime = 10
• Quarter = 25
• Dollar = 100
Example Inputs:
5,5,5,5,5
Outputs
705 Pennies
7.05 Dollars
*/

#include <iostream>
#include <limits>
using namespace std;

struct stCoins {
    float Penny, Nickel, Dime, Quarter, Dollar, totalPennies;
};

/* ---- Prototype Section ---- */
void readInfo(stCoins& coins);
stCoins totalPenniesCalculate(stCoins coins);
float totalDollarsCalculate(stCoins coins);
void printInfo(float coin, stCoins coins);
/* ---- End Of Prototype Section ---- */

int main(void) {
    stCoins coins;

    readInfo(coins);
    coins = totalPenniesCalculate(coins);

    printInfo(totalDollarsCalculate(coins), coins);

    system("Pause");
    return 0;
}

void readInfo(stCoins& coins) {
    cout << "Enter How Many -->\n";

    do {
        cout << "Pennies: ";
        cin >> coins.Penny;
        if (cin.fail() || coins.Penny < 0) {
            cout << "Invalid input! Please enter a non-negative number.\n";
            cin.clear();                                          // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Discard invalid input
            coins.Penny = -1;                                     // Reset to ensure loop continues
        }
    } while (coins.Penny < 0);

    do {
        cout << "Nickels: ";
        cin >> coins.Nickel;
        if (cin.fail() || coins.Nickel < 0) {
            cout << "Invalid input! Please enter a non-negative number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            coins.Nickel = -1;
        }
    } while (coins.Nickel < 0);

    do {
        cout << "Dimes: ";
        cin >> coins.Dime;
        if (cin.fail() || coins.Dime < 0) {
            cout << "Invalid input! Please enter a non-negative number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            coins.Dime = -1;
        }
    } while (coins.Dime < 0);

    do {
        cout << "Quarters: ";
        cin >> coins.Quarter;
        if (cin.fail() || coins.Quarter < 0) {
            cout << "Invalid input! Please enter a non-negative number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            coins.Quarter = -1;
        }
    } while (coins.Quarter < 0);

    do {
        cout << "Dollars: ";
        cin >> coins.Dollar;
        if (cin.fail() || coins.Dollar < 0) {
            cout << "Invalid input! Please enter a non-negative number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            coins.Dollar = -1;
        }
    } while (coins.Dollar < 0);
}

stCoins totalPenniesCalculate(stCoins coins) {
    coins.totalPennies = coins.Penny + (coins.Nickel * 5) + (coins.Dime * 10) + (coins.Quarter * 25) + (coins.Dollar * 100);
    return coins;
}

float totalDollarsCalculate(stCoins coins) {
    float coin = coins.totalPennies / 100;
    return coin;
}

void printInfo(float coin, stCoins coins) {
    cout << "Total Pennies : " << coins.totalPennies << endl;
    cout << "Total Dollars : " << coin << endl;
}