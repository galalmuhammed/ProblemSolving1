/*
Write a program to ask the user to enter his/her:
• Age
• Driver license
Then Print “Hired” if his\her age is grater than 21 and s/he
has a driver license, otherwise Print “Rejected”
*/

#include <iostream>

using namespace std;

enum enInfo { hired = 1, rejected = 0 };

struct stInfo {
    short age;
    char dl;
};

/* ---- Prototype Section ---- */
stInfo readInfo();
enInfo checkInfo(stInfo info);
void printCheck(enInfo info);
/* ---- End Of Prototype Section ---- */

int main() {
    stInfo info = readInfo();
    enInfo result = checkInfo(info);

    printCheck(result);

    cout << "\n";
    system("pause");
    return 0;
}

stInfo readInfo() {
    stInfo info;
    cout << "Enter your age : ";
    cin >> info.age;

    cout << "Do you have Driving license (Y/N) : ";
    cin >> info.dl;

    return info;
}

enInfo checkInfo(stInfo info) {
    if (info.age >= 21 && (info.dl == 'y' || info.dl == 'Y'))
        return enInfo::hired;
    else
        return enInfo::rejected;
}

void printCheck(enInfo info) {
    if (info == enInfo::hired) {
        cout << "Hired";
    } else {
        cout << "Rejected";
    }
}