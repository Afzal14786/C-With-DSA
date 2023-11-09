/*
    WAP to print product of digits of a given number.
*/

#include<iostream>
using namespace std;

int main() {
    cout << "Enter the number : ";
    int num;
    cin >> num;

    

    int sum = 1;
    while (num != 0) {
        int lastDigit = num % 10;
        num /= 10;
        sum *= lastDigit;
    }

    cout << "The Profuct of Digits Is : " << sum;
}