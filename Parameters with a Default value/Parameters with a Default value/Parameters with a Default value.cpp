#include <iostream>
using namespace std; 

// A function for calculating the tax
double calculate_tax(double income, double tax_rate =.2) {
    return income * tax_rate; 
}






int main()
{
    double tax = calculate_tax(10'000, 0.3);
    cout << tax << endl;
    return 0;
}
