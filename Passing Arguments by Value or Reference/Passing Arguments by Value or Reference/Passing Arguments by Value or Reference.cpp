#include <iostream>
using namespace std; 

void increase_price(double price) {
    // double price; -> explanation in the comments
    price *= 1.2;             // Increasing the price by 20% ->  price = price * 1.2;
}



int main()
{
    double price = 100;
    increase_price(price);
    cout << price;
    return 0; 
}

// When I run this code I get 100 and not the updated value: Here is why: 
// When I call this function in main and pass the price in calling function, a copy of the value stored in this variable 
// is taken (double price = 100;) and stored in this parameter (double price) on top. -> the parameters of a function 
// are like local variables on that function. So this parameters is like having a variable called price in this function. 
// double price; Also When I declare a variable, that variable is only accesseble with in the block in which is declared. 
// So the price variable in increase_price function is completely independent of the other price variable in main function.
// double price = 100;-> this variable is only accessible in main block. -> this is called the scope of a variable 
// So I have two variables with same name but they have different scopes, They are essentially in two different locations 
// in memory -> so when calling the increase_price function in main, a copy of the value stored in this variable is taken,
// and stored in this other location in memory (double price) on top. 