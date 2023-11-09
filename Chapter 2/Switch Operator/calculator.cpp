/*
    /* Switch Statement //

    -> Another replacement for if-else.
*/

/*
    * Question :
        -> Write a program to create a calculate that performs basic arithmatic operations like : addition (+), subtraction(-), multiplay (*), and division(/) using switch case. The calculator should input two numbers and an Charactor from user.
*/

#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    char Charactor;

    cout << "The Calculator\n";
    cout << "--------------------------------------------\n";
    cout << "Calculate enter the numbers (number + number) \n";
    cin >> num1;
    cin >> Charactor;
    cin >> num2;

        //---------------Using If-Else Statement------------------------ //
    /*
        calculate Using If-Else
            * Code *
        if (Charactor == '+')
        {
            cout << "The Sum is : " << num1 + num2;
        } else if(Charactor == '-') {
            cout << "The Subtraction is : " << num1 - num2;
        } else if(Charactor == '*') {
            cout << "The Multiplication is : " << num1 * num2;
        }
        else {
            cout << "The Division is : " << num1 / num2;
        }
    */
        //----------------Using Switch Statement------------------------ //
   /*
        Calculate using Switch Statement
   */

    switch (Charactor)
    {
    case '+':
        cout << "The Sum is : " << num1 + num2;
        break;
    case '-':
        cout << "The Subtraction Result is : " << num1 - num2;
        break;
    case '*':
        cout << "The Multiplication Result is : " << num1 * num2;
        break;
    
    default:
        cout << "The Division Result is : " << num1 / num2;
        break;
    }  
}