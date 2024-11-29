/*
Copyright© 2022
Mohammed Abu-Hadhoud
MBA, PMOC, PgMP®, PMP®, PMI-RMP®, CM, ITILF, MCPD, MCSD
26+ years of experience
Problem:
Write a program to calculate the task duration in seconds and print it on screen
Given the time duration of a task in the number of days, hours, minutes, and seconds,.
Input
2
5
45
35
Outputs
193,535 Seconds
*/

#include <cmath>
#include <iomanip>
#include <iostream>

const float secondsInMinutes = 60, secondsInHours = 60 * 60, secondsInDay = 60 * 60 * 24;

struct stTime {
    float seconds, minutes, hours, days, timeInSeconds;
};

using namespace std;

/* ---- Prototype Section ---- */
void readTime(stTime& time);
stTime fullTimeInSeconds(stTime time);
void printTimeInSeconds(stTime time);
/* ---- End Of Prototype Section ---- */

int main() {
    stTime time;

    readTime(time);
    time = fullTimeInSeconds(time);
    printTimeInSeconds(time);

    cout << "\n";
    system("pause");
    return 0;
}

void readTime(stTime& time) {
    cout << "Enter the Information in order.\n";

    cout << "Days : ";
    cin >> time.days;

    cout << "Hours : ";
    cin >> time.hours;

    cout << "Minutes : ";
    cin >> time.minutes;

    cout << "Seconds : ";
    cin >> time.seconds;
}

stTime fullTimeInSeconds(stTime time) {
    time.timeInSeconds = time.seconds + (time.minutes * secondsInMinutes) + (time.hours * secondsInHours) + (time.days * secondsInDay);
    return time;
}

void printTimeInSeconds(stTime time) { cout << "Time in seconds will be : " << time.timeInSeconds << " Seconds"; }