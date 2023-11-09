#include<iostream>
using namespace std;

int main() {
    // Take positive integer inputand tell if it is divisible by
        // 5 0r not

    int number;
    cout << "Enter the number : ";
    cin >> number;

    if (number % 5 == 0)
    {
        cout << number << " is Divisible by 5";
    } else {
        cout << number << " is Not Divisible by 5";
    }
    
}