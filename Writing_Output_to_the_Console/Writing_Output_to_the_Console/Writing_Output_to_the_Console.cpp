#include <iostream>

using namespace std; // define std anywhere here 
int main()
{
    double total_sales = 95000;
    cout << "total_sales = $" << total_sales << endl;

    double state_tax = (4*95000)/100; // total_sales * .04
    cout << "state_tax = $" << state_tax << endl;

    double county_tax = (2*95000)/100; // total_sales * .02
    cout << "county_tax = $" << county_tax << endl;

    double total_taxes = state_tax + county_tax;
    cout << "total_taxes= $" << total_taxes;

    return 0; 
}
    
/* Exercise: I have a store and I made 95000$. Now as a part of my tax return 
* I have to pay state and county tax at different rates. (state Tax = 4%) and
* (County tax = 2%). Now I should write a code that show my total sales 
* as well as state tax and county tax and total tax 
* i have to pay for this income. 
*/