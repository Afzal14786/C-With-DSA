#include<iostream>
using namespace std;

int main() {
    // take input two numbers from user and fint the modulus of input number //
    long num1, num2;
    cout << "Enter the 1st number = ";
    cin >> num1;
    cout << "Enter the 2st number = ";
    cin >> num2;

    long modulus = num1 % num2;
    cout << "The mod of entered number = " << modulus;
}