/*
    * Continue Statement 
        -> If we want to skip a round.
        -> Print no form 1 to 20 expect 3 and 8 for some resion
*/
#include<iostream>
using namespace std;

int main() {
    // for (int i = 0; i <= 20; i++)
    // {
    //     if (i == 5 || i == 8)
    //     {
    //         continue; // Here 5 and 8 Skip while printing the numbers form 1 to 20
    //     }
    //     cout << i << " ";
    // }
    
    /*
        Write a program odd number from 1 to 100 using continue statement.
    */
    cout << "All The Odd Numbers Are\n";

    for (int i = 0; i <= 100; i++)
    {
            if (i%2 == 0)
            {
                continue;
            }
            cout <<i << " ";
    }
        
        
   
}