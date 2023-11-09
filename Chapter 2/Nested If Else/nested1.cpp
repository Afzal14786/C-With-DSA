/*
    Nested If else means : if inside a if 
    example : 
        if() {
            if() {
                * Code *
            } else {
                * Code *
        } else {                * This is known as if else //
            if() {
                * Code *
            } else {
                * Code *
            }
        }
*/

#include<iostream>
using namespace std;
/*
    Question : If ages of Ram, Shyam and Ajay are input through the keyboard, 
                write a program to determine the youngest of the three ?
*/
int main() {
    int ram, shyam, ajay;

    cout << "Enter Ram's Age : ";
    cin >> ram;
    cout << "Enter Shayam's Age : ";
    cin >> shyam;
    cout << "Enter Ajay's Age : ";
    cin >> ajay;

    if (ram < shyam)
    {
        if (ram < ajay)
        {
            /* code */
            cout << "Ram Is The Youngest.";
        } else {
            cout << "Ajay is the Youngest.";
        }
        
    } else
    {
        if (shyam < ajay)
        {
            cout << "Shyam is the youngest.";
        } else {
            cout << "Ajay is the youngest.";
        }
    }
    
    
}