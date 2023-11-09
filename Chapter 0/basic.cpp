#include <iostream>
using namespace std;

int main() {
    int a = 10;
    cout << a << endl;
    cout << "size of int variable : bytes " << sizeof(a)<<endl;
    cout << "Welcome to C++ Tutorial Afzal"<< endl;

    // take input form user //
    /*
    we can take input using cin
    */
    // cout << "enter your age : " << endl;
    // cin>> a;
    // cout << "Your age is : " << a <<endl;

    string user;

    cout << "Enter your name" << endl;
    cin>> user;
    cout << "Your name is : " << user;
    return 0;
}