/*
Problem:
Write a program to ask the user to enter :
• Age
If age is not between 18 and 45 keep asking the user to enter a valid age
*/

#include <iostream>

using namespace std;

enum enAgeValidation { valid = 1, invalid = 0 };

/* ---- Prototype Section ---- */
short readAge();
enAgeValidation checkAge(short age);
void printValidation(short age, enAgeValidation enAge);
/* ---- End Of Prototype Section ---- */

int main() {
    short age = readAge();
    printValidation(age, checkAge(age));

    cout << "\n";
    system("pause");
    return 0;
}

short readAge() {
    short age;
    cout << "Enter Your Age : ";
    while (true) {
        cin >> age;

        if (age >= 18 && age <= 45)
            break;
        else
            cout << "Invalid Age Try Between ( 18 - 45 ) : ";
    }
    return age;
}

enAgeValidation checkAge(short age) {
    if (age >= 18 && age <= 45)
        return enAgeValidation::valid;
    else
        return enAgeValidation::invalid;
}

void printValidation(short age, enAgeValidation enAge) {
    if (enAge == enAgeValidation::valid)
        cout << "Your age is " << age << " and it is a " << "Valid Age\n";
    else
        cout << "your age is " << age << " and it is an " << "Invalid Age\n";
}