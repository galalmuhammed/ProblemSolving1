/* Write a program to ask the use to enter his/her name and print it on screen. */

#include <iostream>
#include <string>

using namespace std;
/* ---- Prototype Section ---- */
string readName(string text);
void printName(string name);
/* ---- End Of Prototype Section ---- */

int main() {
    // string name = readName("Enter your name : ");
    printName(readName("Enter your name : "));

    cout << "\n";
    system("pause");
    return 0;
}

string readName(string text) {
    string name;
    cout << text;
    getline(cin, name);
    return name;
}
void printName(string name) { cout << "Your Full name is : " << name; }