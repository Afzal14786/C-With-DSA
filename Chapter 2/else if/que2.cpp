/*
    take the length and breath of a rectangle as input and write a program to find whether 
    the area of a rectangle is greater than its perimeter ??
*/

#include<iostream>
using namespace std;

int main() {
    int len, bre;

    cout << "Enter the size of length : ";
    cin >> len;
    cout << "Enter the size of breath : ";
    cin >> bre;

    int areaOfRectangle = len * bre;
    int perimeter = 2 * (len + bre);

    if (areaOfRectangle > perimeter)
    {
        cout << "Area of rectangle is grater then its perimeter";
    } else {
        cout << "Perimeter is greater then area";
    }
    
}