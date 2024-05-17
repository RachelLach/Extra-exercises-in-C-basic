#include <iostream>
using namespace std; 

int main()
{
    int sales = 11'000; 
    double commission; 
    if (sales > 10'000)
        commission = .1;
    else
        commission = .05; 
    return 0; 
}

// To simplify the if statements 
