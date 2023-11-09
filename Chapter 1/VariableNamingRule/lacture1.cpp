/*
    we cannot use number in starting while creating a variable
    i.e = 1userName = // Invalid
           userName1 = // Valid 
*/

/*
    1. Variables can start from an alphabet or underscore(_) or doller sign($)
    2. Special character expected (_) and ($)  are not allowed
    3. Some particular keywords are not allowed
    4. Commas and blanks are not allowed
*/

/*
    * \The Keywords *
    \-> This keyword are not used as a variable

    Auto     double      int     break       extern      enum        unsigned        while 
    case     sizeof      for     const       static      long        continue        float
    else     signed      do      short       switch      char        volatile        default
    goto     struct      if      union       return      void        register        typeof
*/

/*
    *\ Special Characters

    ! @ # $ % ^ & * ( ) ' " ; : / \ ? < > , . ~ ` | } ] { [
        these all are the special character 
*/

/*
    \Alphabets
    a b c d e f g h . . . . . . . . z
*/

/*
    \Numbers 
    1 2 3 4 5 6 . . . .
*/

#include<iostream>
using namespace std;

int main() {
    // int 1x = 23;
    // cout << 1x;
    /*
        \ It will give the error
        error :
                lacture1.cpp: In function 'int main()':
                lacture1.cpp:44:9: error: expected unqualified-id before numeric constant
                int 1x = 23;
                    ^~
                lacture1.cpp:45:13: error: unable to find numeric literal operator 'operator""x'
                cout << 1x;
    */

   // Right way to declare //
   int user1 = 23;
   cout << user1;
   // 23 // No Error 

//    string userName = "Md Afzal Ansari";
//    cout << userName;

}