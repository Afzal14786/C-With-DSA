#include<iostream>
using namespace std;

int main() {
    // Question : take positive integer input and tell if it is even or odd.
    int x;
    cout << "Enter the number : ";
    cin >> x;
        // if (x % 2 == 0)
        // {
        //     cout << "Number is even";
        // } else {
        //     cout << "Number is odd";
        // }

    if(x % 2 == 0)
        cout << "Number is Even";
    else 
        cout << "Number is Odd";
    
}