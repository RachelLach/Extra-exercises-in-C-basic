#include <iostream>

using namespace std; // define std anywhere here 
int main()
{
    double total_sales = 95000;
    cout << "total_sales = $" << total_sales << endl;

    const double state_tax_rate = .04; 
    double state_tax = total_sales * state_tax_rate;// (4*95000)/100; // total_sales * .04
    cout << "state_tax = $" << state_tax << endl;

    const double county_tax_rate = .02;
    double county_tax = total_sales * county_tax_rate;//(2*95000)/100; // total_sales * .02
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

/* OBS: store the magic value in another variable 
* and then use it as a reference -> like line 9 and 10
*/