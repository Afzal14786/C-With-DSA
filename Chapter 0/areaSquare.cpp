#include<iostream>
using namespace std;

int main() {
    // take the radius input and calculate the are of circle
    // area of a circle = (pi * r^2)

    cout<< "Enter the length of Radius : " << endl;
    float radius, pi, area;
    pi = 3.14159265359;

    cin>> radius;
    cout<< "Area of a circle : " << pi*radius*radius<< " cm." << endl;
}