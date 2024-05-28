#include <iostream>
using namespace std; 

// Another solution: instead of copying them between function calls, I use a single instance of a variable in memory
// By adding & after the type of parameter -> this called a refrence parameter -> refrences an existing variable 
// So when i call this function, this variable that I have in main is essentially passed to the function on top.
// double price = 100; no copy is taken and that means any changes I make to this price in increase_price function 
// is gonna be visible outside of this function-> when updating the price the changes are impacting this price variable
// in main function -> this means i don't need to return the updated price 
// 
void increase_price(double& price) {
    price *= 1.2;      
}


int main()
{
    double price = 100;
    increase_price(price);
    cout << price;
    return 0; 
}


