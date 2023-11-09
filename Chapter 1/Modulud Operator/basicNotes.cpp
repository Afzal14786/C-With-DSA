#include<iostream>
using namespace std;
/*
    $ modulus is important for divisibility questions //
    Modulus Operator are\
        +, -, *, /, %
        example \
            x = 5, y = 7;
            x + y = 12;
            x - y = -2;
            x * y = 35;
            x / y = 0.71428571428;
            y % x = means 7 / 5 and the reminder is modulus = y % x = 2

    * Something important //
            1. a % b = a {if a < b}
    i.e = 
        Enter the 1st number = 2
        Enter the 2st number = 5
        The mod of entered number = 2

            2. a % a = 0; // when you divide the number with same it return 0;
            3. a % (-b) = a % b;
            4. -a % b = -{a % b}
                i.e =
                    Enter the 1st number = -5
                    Enter the 2st number = 2
                    The mod of entered number = -1
*/
// -----------------------------------------------------------------------------------------------------//
/*
    * TypeCasting
        int -> float,
        float -> int,
        int -> char,
        float -> double,
        int -> double . . . etc;

        * Question : Take integer 'X' as input and print half of the number.
*/

int main() {
    int x;
    cout << "Enter the X = ";
    cin >> x;
    float y = (float)x; // Type Casting
    cout << "Half of the X is  = " << y/2;
}