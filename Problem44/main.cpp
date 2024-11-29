#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

enum enDays { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

/* ---- Prototype Section ---- */
short readNumberOfWeek();
enDays checkNumberOfWeek(short day);
void printDay(short day);
/* ---- End Of Prototype Section ---- */

int main() {
    printDay(readNumberOfWeek());

    cout << "\n";
    system("pause");
    return 0;
}

short readNumberOfWeek() {
    short day;

    cout << "Enter the day number : ";
    while (true) {
        cin >> day;

        if (day <= 7 && day >= 1)
            break;
        else
            cout << "Invlid Input, Enter a number from 1 to 7 : ";
    }

    return day;
}

enDays checkNumberOfWeek(short day) {
    switch (day) {
        case 1:
            return enDays::Sunday;
            break;
        case 2:
            return enDays::Monday;
            break;
        case 3:
            return enDays::Tuesday;
            break;
        case 4:
            return enDays::Wednesday;
            break;
        case 5:
            return enDays::Thursday;
            break;
        case 6:
            return enDays::Friday;
            break;

        default:
            return enDays::Saturday;
            break;
    }
}

void printDay(short day) {
    switch (checkNumberOfWeek(day)) {
        case enDays::Sunday:
            cout << "Today is : Sunday.";
            break;

        case enDays::Monday:
            cout << "Today is : Monday.";
            break;

        case enDays::Tuesday:
            cout << "Today is : Tuesday.";
            break;

        case enDays::Wednesday:
            cout << "Today is : Wednesday.";
            break;

        case enDays::Thursday:
            cout << "Today is : Thursday.";
            break;

        case enDays::Friday:
            cout << "Today is : Friday.";
            break;

        case enDays::Saturday:
            cout << "Today is : Saturday.";
    }
}