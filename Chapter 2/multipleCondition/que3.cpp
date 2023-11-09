/*
    Take 3 positive integers input and print the greatest of them
*/

#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter 1st Number : ";
    cin >> num1;
    // cout << "Enter 2nd Number : ";
    // cin >> num2;
    // cout << "Enter 3rd Number : ";
    // cin >> num3;

    /*
        if (num1 > num2 and num1 > num3)
        {
            cout << "The Greatest Number is : " << num1;
        } else if (num2 > num1 and num2 > num3)
        {
            cout << "The Greatest Number is : " << num2;
        }
        else {
            cout << "The Greatest Number is : " << num3;
        }
    */
    
    /*
        Take 3 positive integers input and print the least of them
    */

   /*
        if (num1 < num2 and num1 < num3)
        {
            cout << "The least number is : " << num1;
        } else if(num2 < num3 and num2 < num1) {
            cout << "The least number is : " << num2;
        } else {
            cout << "The least number is : " << num3;
        }
   */

  /*
    Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
  */

    if ((num1 % 5 == 0 || num1 % 3 == 0) and (num1 % 15 != 0))
    {
        cout << "Divisible by 3 or 5 but not divisible by 15";
    }
    
    
   
   
    
}