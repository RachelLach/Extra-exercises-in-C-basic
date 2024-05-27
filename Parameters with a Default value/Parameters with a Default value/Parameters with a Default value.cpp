#include <iostream>
using namespace std; 

// A function for calculating the tax
// If here I give a default value to both or one parameters -> in invoking or calling the function in main 
// I do not need to give an arguments for paramerter/s which i already gave a default value to 
// But if i want to overwrite the default value I can do it when I call the function  
double calculate_tax(double income, double tax_rate =.2) { // Always code them after parameters without a default value 
                                                           // After a parameters with default value should all parameters 
                                                           // afterwars also write with default values 
    return income * tax_rate; 
}

int main()
{
    double tax = calculate_tax(10'000); // I have an argumnet just for income and the tax_rate has allready it's value 
    cout << tax << endl;
    return 0;
}

