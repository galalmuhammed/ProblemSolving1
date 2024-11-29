/*
Write a program to read a number and check if it is a prime number or not.
Note: Prime number can only divide on one and on itself.
Input
5
6
3
Outputs
Prime
Not Prime
Prime
*/

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    // Numbers less than 2 are not prime
    if (num < 2) {
        return false;
    }

    // Check divisibility from 2 up to the square root of the number
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;  // num is divisible by i, so it's not prime
        }
    }
    return true;  // If no divisors found, num is prime
}

int main() {
    int num;

    // Prompt the user for input
    cout << "Enter a number: ";
    cin >> num;

    // Call the isPrime function and print the result
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
