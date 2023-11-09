#include<iostream>
using namespace std;

/*
    Question :
        if cost price and salling price of an item is input through
        the keyword, write a program to determine whether the seller has made profit 
        or incurred loss or no profit no loss. Also determine how much
        profit he made or loss he incurred.
*/

int main() {
    int cost_price, selling_price;
    cout << "Enter Cost Price : ";
    cin >> cost_price;
    cout << "Enter Selling Price : ";
    cin >> selling_price;

    if (selling_price > cost_price)
    {
        cout << "Making Profit \n";
        cout << "The Profit Amount is Rs. " << selling_price - cost_price;
    }
    else if (selling_price < cost_price)
    {
        cout << "Making Loss \n";
        cout << "The Loss Amount is Rs. " << selling_price - cost_price;
    }
    else
    {
        cout << "No Profit No Loss";
    }
    
    
}


