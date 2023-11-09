/*
    Do While Loop
        -> If we want to run a loop at least one time
*/

/*
    First Do and Then Work : 
        -> 
        do {
            /* Code *
        } while (condition);
*/

#include<iostream>
using namespace std;

int main() {
    /*
        Do While : First Work then check.
    */
   int i = 11;
   do {
        cout << i <<" ";
        i++;
   } while (i <= 10);
   
}