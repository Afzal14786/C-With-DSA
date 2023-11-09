#include<iostream>
using namespace std;

int main() {
    // calculate the simple intrest
    /*
        Simple Intrest = (principleAmount * rate * time)/ 100;
    */

   // decleration the variables
   float principle$Amount, rate , time, simple$Interest;
   // fixed interest rate
   rate = 5.5;

   // entering the principle amount
   cout<< "Enter the principle amount : " << endl;
   cin>> principle$Amount;

   // entering the time 
   cout<< "Enter the time : " <<endl;
   cin>> time;

    float interst$Amount = (principle$Amount * rate * time) / 100;
    // printing 
   cout<< "Interest Amount = " << interst$Amount << endl;
   cout << "Total Amount = " << principle$Amount + interst$Amount;
}