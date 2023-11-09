/*
    While Loop : An alternet to for loop

        -> When we have multiple situations we can use while loop
*/

#include<iostream>
using namespace std;

int main() {
    int i = 1;
    
    // while (i <= 10) {
    //     cout << i << " ";
    //     i++;
    // }
    
    while (i == 1) {
        i = i -1;
        cout << i << " ";       // Output : 0
    }
}