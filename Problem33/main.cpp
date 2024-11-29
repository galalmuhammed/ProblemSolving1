/*
Problem:Write a program to ask the user to enter:
• Grade
Then print the grade as follows:
• 90 – 100 Print A
• 80 – 89   Print B
• 70 – 79   Print C
• 60 – 69   Print D
• 50 – 59   Print E
• Otherwise Print F
Example Inputs:
95
Outputs
A
*/

#include <iostream>

using namespace std;

enum enGrade { A = 1, B = 2, C = 3, D = 4, E = 5, F = 6 };

/* ---- Prototype Section ---- */
float readNumber();
void printGrade(float grade);
/* ---- End Of Prototype Section ---- */

int main(void) {
    float grade = readNumber();
    printGrade(grade);

    system("pause");
    return 0;
}

float readNumber() {
    float grade;
    cout << "Enter your grade : ";
    while (true) {
        cin >> grade;

        if (grade >= 0 && grade <= 100)
            break;
        else
            cout << "Invalid grade must be between (0 - 100) : ";
    }
    return grade;
}

enGrade checkGrade(float grade) {
    if (grade <= 100 && grade >= 90)
        return enGrade::A;
    else if (grade < 90 && grade >= 80)
        return enGrade::B;
    else if (grade < 80 && grade >= 70)
        return enGrade::C;
    else if (grade < 70 && grade >= 60)
        return enGrade::D;
    else if (grade < 60 && grade >= 50)
        return enGrade::E;
    else
        return enGrade::F;
}

void printGrade(float grade) {
    switch (checkGrade(grade)) {
        case enGrade::A:
            cout << "You Got A \n";
            break;
        case enGrade::B:
            cout << "You Got B \n";
            break;
        case enGrade::C:
            cout << "You Got C \n";
            break;
        case enGrade::D:
            cout << "You Got D \n";
            break;
        case enGrade::E:
            cout << "You Got E \n";
            break;

        default:
            cout << "You Failed" << endl;
            break;
    }
}