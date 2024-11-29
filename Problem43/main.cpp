/*
Problem:
Write a program that inputs the number of seconds  and changes it to days, hours, minutes, and seconds
Input
193,535
Output 
2:5:45:35
*/

#include <cmath>
#include <iostream>

using namespace std;

const float secondsInDay = 60 * 60 * 24, secondsInHour = 60 * 60, secondsInMinutes = 60;

struct stTime {
    float days, hours, minutes, seconds, totalSeconds, remainder;
};

/* ---- Prototype Section ---- */
void readTimeInSecond(stTime& time);
void printTime(stTime time);
/* ---- End Of Prototype Section ---- */

int main(void) {
    stTime time;
    
    readTimeInSecond(time);
    printTime(time);

    system("pause");
    return 0;
}

void readTimeInSecond(stTime& time) {
    cout << "Enter Time In Seconds : ";
    cin >> time.totalSeconds;
}

stTime calculateTotalTime(stTime time) {
    time.days = floor(time.totalSeconds / secondsInDay);
    time.remainder = fmod(time.totalSeconds, secondsInDay);

    time.hours = floor(time.remainder / secondsInHour);
    time.remainder = fmod(time.remainder, secondsInHour);

    time.minutes = floor(time.remainder / secondsInMinutes);
    time.remainder = fmod(time.remainder, secondsInMinutes);

    return time;
}

void printTime(stTime time) {
    time = calculateTotalTime(time);
    cout << " ------\n";
    cout << "| Time | " << time.days << " : " << time.hours << " : " << time.minutes << " : " << time.remainder << endl;
    cout << " ------\n";
}