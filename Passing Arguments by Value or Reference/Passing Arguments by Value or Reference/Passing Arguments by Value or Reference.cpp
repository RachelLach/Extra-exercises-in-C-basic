#include <iostream>
using namespace std; 

double increase_price(double price) {
    price *= 1.2;     
    return price; 
}


int main()
{
    double price = 100;
    price = increase_price(price);
    cout << price;
    return 0; 
}

// So by default: arguments are passed by value in C++.
// But what about arguments that can contain large amount of data, this copy operation can be expensive -> no worries: 
// Then I can pass arguments by reference 