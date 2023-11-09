#include<iostream>
using namespace std;

int main() {
    // calculate the product of 2 digits //
    long num1, num2;

    cout << "Enter the 1st number : ";
    cin >> num1;
    cout << "Enter the 2nd number : ";
    cin >> num2;

    long product = num1 * num2;
    cout << "The Product is = " << product;
}