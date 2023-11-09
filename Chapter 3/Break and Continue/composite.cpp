/*
    WAP to check if a number is composite or not ?
*/

#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the Number : ";
    cin >> num;
    cout << "--------------------------------------\n";

    bool flag = true;
    for (int i = 2; i <= num/2; i++) {
        /* code */
        if (num % i == 0)
        {
            /* code */
            flag = false;
            break;;
        }
    }

    if (flag == false)
    {
        cout << "It's A Composite Number\n";
    } else if (flag == true)
    {
        cout << "It's A Prime Number\n";
    } else {
        cout << "Neither Prime or Nor Composite\n";
    }
    
    
    
    cout << "----------------------------------------------------\n";
    
    
    
    
}