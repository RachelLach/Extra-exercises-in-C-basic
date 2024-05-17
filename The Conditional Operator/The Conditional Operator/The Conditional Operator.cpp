#include <iostream>
using namespace std; 

int main()
{
    int sales = 11'000; 
    double commission = (sales > 10'000) ? .1 : .05; // in () we have a condition if true so set to .1 otherwise .05
    /*if (sales > 10'000)
        commission = .1;
    else
        commission = .05;*/ 
    cout << commission; 
    return 0; 
}

// To simplify the if statements 
