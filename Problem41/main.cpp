/*
Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that
number
Input
365
Outputs
2.17 Weeks
15.20 Days
*/

#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

const int hoursInDay = 24;
const int hoursInWeek = 7 * 24;

/* ---- Prototype Section ---- */
int readHours();
float calculateDays(int hours);
float calculateWeeks(int hours);
void printInfo(int hours);
/* ---- End Of Prototype Section ---- */

int main() {
    printInfo(readHours());

    cout << "Press Enter to exit...";
    cin.get();  // First get to consume the newline character
    cin.get();  // Second get waits for the actual input
    return 0;
}

int readHours() {
    int hours;
    cout << "Enter number of hours: ";
    while (true) {
        cin >> hours;
        if (cin.fail() || hours < 0) {
            cout << "Invalid input. Please enter a non-negative number: ";
            cin.clear();                                          // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        } else {
            break;
        }
    }
    return hours;
}

float calculateDays(int hours) { return static_cast<float>(hours) / hoursInDay; }

float calculateWeeks(int hours) { return static_cast<float>(hours) / hoursInWeek; }

void printInfo(int hours) {
    cout << fixed << setprecision(2);  // Set fixed-point notation and precision
    cout << calculateWeeks(hours) << " Weeks" << endl;
    cout << calculateDays(hours) << " Days" << endl;
}
