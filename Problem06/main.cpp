/*
Problem:
Write a program to ask the user to enter:
• First Name
• Last Name
Then Print Full Name on screen.
Example Input:
Mohammed
Abu Hadhoud
Output
Mohammed Abu-Hadhoud
*/

#include <iostream>

using namespace std;

struct stInfo {
    string firstname, lastname;
};

/* ---- Prototype Section ---- */
stInfo readFullName();
string compineName(stInfo info);
void printFullName(string name);
/* ---- End Of Prototype Section ---- */

int main() {
    printFullName(compineName(readFullName()));

    cout << "\n";
    system("pause");
    return 0;
}

stInfo readFullName() {
    stInfo info;

    cout << "Enter the first name : ";
    cin >> info.firstname;

    cout << "Enter the last name : ";
    cin >> info.lastname;

    return info;
}

string compineName(stInfo info) { return info.firstname + " " + info.lastname; }

void printFullName(string name) { cout << "Your full name is : " << name << endl; }