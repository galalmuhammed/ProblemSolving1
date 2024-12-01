/*
    Problem: Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
    balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
    Assume User Balance is 7500.
    Input
    1234
    5151
    Outputs
    Your Balance is: 7500
    Wrong PIN
*/

#include <iostream>
using namespace std;

/* ---- Prototype Section ---- */
bool verifyPassword();
void printOutput();
/* ---- End Of Prototype Section ---- */

int main() {
    printOutput();

    system("pause");
    return 0;
}

bool verifyPassword() {
    const string correctPassword = "1234";  // Store the password securely if possible
    string inputPassword;
    short attempts = 0;

    cout << "Enter Your PIN: ";
    while (attempts < 5) {
        cin >> inputPassword;
        if (inputPassword == correctPassword) {
            cout << "Access Granted!\n";
            return true;
        } else {
            attempts++;
            if (attempts < 5) {
                cout << "Wrong Password. Try again (" << 5 - attempts << " attempts left): ";
            }
        }
    }

    cout << "Your card is locked. You can't try again.\n";
    return false;  // Indicate that the user failed to verify the password
}

void printOutput() {
    if (verifyPassword() == true) {
        cout << "Your current palance is 7500 Dollars\n";
    }
}