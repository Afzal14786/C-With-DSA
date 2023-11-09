#include<iostream>
using namespace std;

int main() {
    // Take integer input and print the absolute value of that integer
    /*
        1 -> 1
        -2 -> 2
    */

   int number;
    cout << "Enter the number : ";
    cin >> number;

    // if (number >= 0)
    // {
    //     cout << "Absolute Value = " << number;
    // } else {
    //     cout << -number << " = Absolute Value";
    // }

    if(number < 0) number = -number;
    cout << number;
    
    
}