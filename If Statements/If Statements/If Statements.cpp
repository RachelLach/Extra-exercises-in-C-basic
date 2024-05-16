#include <iostream>
using namespace std; 

int main()
{
    int temperature = 30; 
    if (temperature < 20)  // In () we have a condition or a  boolean expression 
        // If the expression is true so we print : 
        cout << "Cold!";
    else if (temperature > 15)
        cout << "Nice!";
    
    return 0; 
}

// For more than one if statement we should type a pair of braces after the if statement 
