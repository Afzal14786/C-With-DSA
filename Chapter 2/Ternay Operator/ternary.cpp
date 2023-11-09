/*
    Ternary Operator 
        (statement) ? if true : if false;
*/

#include<iostream>
using namespace std;

/*
    Check if the number is odd or even
*/
int main() {

    int number;
    cout << "Enter the number : ";
    cin >> number;

    /*
        (condition) ? if true : if false;
        ------------------------------------
        if we have only one "if" condition then we can use Ternary Operator

        -> If we have multiple if-else condition then it is not recommanded to use ternary operator.
    */
   (number % 2 == 0) ? cout << "Even Number" : cout << "Odd Number";
    
}