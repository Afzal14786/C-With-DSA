/*
    Operators : 
        -> '+'   (Addition)
        -> '-'   (Subtraction)
        -> '*'   (Multiplication)
        -> '/'   (Division)
        -> '%'   (Mode)
*/

#include<iostream>
using namespace std;

int main() {
    /*
        Write a program to count digit of a given number;
    */

    cout << "Enter the number : ";
    long number;
    cin >> number;

    // int count = 0;

    // while (number != 0)
    // {
    //     number /= 10;
    //     count++;
    // }
    
    // cout << "Total No Of Digits In Entered Number : "<< count;
    
    /*
        Write a program to print sum of digits of a given number.
    */
   int sum = 0;

    while (number != 0) {
        int lastDigit = number % 10;
        number /= 10;
        sum += lastDigit;
    }

    cout << "Sum Of the Entered Digit is : " << sum;
   
}