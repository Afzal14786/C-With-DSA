// calculate the volume of a sphere //
#include<iostream>
using namespace std;
int main() {
    // formula // Volume = 4/3 * pi * radius^3;

    float pi, radius;
    pi = 3.14;
    cout << "Enter the length of the Radius = " << endl;
    cin >> radius;
    
    float radiusValue = radius * radius * radius;
    float volume_Of_Sphere = (4/3 )* (pi) * (radiusValue);
    cout << "Volume Of A Sphere = " << volume_Of_Sphere;
}