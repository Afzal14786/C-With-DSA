/*
    * Break Statement*
*/
/*
    Question :
        WAP to find the highest factor of a number 'n' (other than 'n' itself).
*/
#include<iostream>
using namespace std;

int main() {
    int factNum;
    cout << "Enter the Number : ";
    cin >> factNum;


    for(int i = factNum/2; i >= 1; i--) {
        if (factNum % i == 0)
        {
            cout << i << " is the highest factor of " << factNum << "\n";
            break; // to get out of the loop //
        }
    }

}