#include<iostream>
using namespace std;

int main() {
    /*
        Take positive integer input and tell if it is a three digit number or not
    */

   int number;
   cout << "Enter the number : ";
   cin >> number;
    // we can also use logical and = && instance of "and";
   if (number > 99 and number < 1000)
   {
    cout << "Three Digit Number";
   } else {
    cout << "Not a three digit number";
   }
   
}