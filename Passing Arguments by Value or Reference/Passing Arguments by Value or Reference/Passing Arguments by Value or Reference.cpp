#include <iostream>
using namespace std; 

// Solution: Return the updated price from this function: 
// 1. change the return type to double,
// then I return the updated price 
double increase_price(double price) {
    price *= 1.2;     
    return price; 
}


// slolution continue here: When I call the increase_price, I get the result and store it in the price variable.
int main()
{
    double price = 100;
    price = increase_price(price);
    cout << price;
    return 0; 
}

