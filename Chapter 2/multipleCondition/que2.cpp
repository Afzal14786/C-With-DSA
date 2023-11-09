/*
    Take 3 number input and tell if they can be the sides of a triangle.
*/
#include<iostream>
using namespace std;
int main() {
    int a, b, c;

    cout << "Enter the angle 1 : ";
    cin >> a;
    cout << "Enter the angle 2 : ";
    cin >> b;
    cout << "Enter the angle 3 : ";
    cin >> c;

    int side1, side2, side3;
    side1 = (a + b) > c;
    side2 = (b + c) > a;
    side3 = (c + a) > b;

    if (side1 and side2 and side3)
    {
        /* code */
        cout << "It's a valid Triangle";
    } else {
        cout << "Not a valid Triangle {Sum of 2 angle must be greater then one angle}";
    }
    
     
    
}