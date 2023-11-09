/*
    Take input percenage of a student and print the grade according to marks.
*/

#include<iostream>
using namespace std;

int main() {
    float precentage;

    cout << "Enter The Precentage : ";
    cin >> precentage;
    cout << "Marks is : " << precentage << " %\n";

    if (precentage >= 81 and precentage <= 100)
    {
        cout << "Grade : Very Good";
    } else if(precentage >= 61) {
        cout << "Grade : Good";
    } else if (precentage >= 41)
    {
        cout << "Grade : Average";
    } else
    {
        cout << "Grade : Fail";
    }
    
    
    
}