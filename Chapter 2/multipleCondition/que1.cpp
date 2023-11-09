/*
    1. Take positive integer input and tell if it is divisible by 5 and 3;
*/
#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number : ";
    cin >> number;

    // 1. Take positive integer input and tell if it is divisible by 5 and 3;

    // if (number % 5 == 0 and number % 3 == 0)
    // {
    //     cout << "Number is divisible by 5 or 3";
    // } else {
    //     cout << "Not divisible by 5 and 3";
    // }

    /*
        2. Take positive integer input and tell if it is divisible by 5 or 3;

        -> // we can also use logical (or) = || instance of "or";
    */

    if (number % 5 == 0 or number % 3 == 0)
    {
        cout << "Number is divisible by 5 or 3";
    } else {
        cout << "Number is not divisible by 5 or 3";
    }
}