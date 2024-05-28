#include <iostream>
using namespace std; 

// Global variables -> declare outside of all functions -> accessible by all functions
// Global variable (global scope) -> accessible by all functions 
double tax_rate = .2; 

// If i define a function for calculating the tax, I do not need to pass this variable from the top as an argument 
// to this function. So this function only need to take the sales some 
// and it doesn't need the second parameter like tax rate because in this function we can access a local variable 
double calculate_tax(int sales) {
    return sales * tax_rate;
}

// Global variables can lead to programming problems, because different functions can change them and it is hard to track 
// how they get changed!
// Variables are accessible within the block in which are declared. 
int main(){
    int sales = 10'000;     // Only accessible in this block -> local variable (local scope) -> local to this function 
                            // invisibles to other functions 
    double tax = calculate_tax(sales);
    cout << tax;
    return 0;
}
// When we mostly use global variables: 
// 1.singelton design pattern 
// 2.global constans : const double tax_rate = .2;
