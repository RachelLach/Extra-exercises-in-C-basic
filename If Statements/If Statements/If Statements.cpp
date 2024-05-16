#include <iostream>
using namespace std; 

int main()
{
    int Sales = 20'000; 
    double Commission; 
    if (Sales <= 10'000)
        Commission = .1;
    else if (Sales <= 15'000)
        Commission = .15;
    else
        Commission = .2; 
    cout << Commission; 
    
    return 0; 
}

