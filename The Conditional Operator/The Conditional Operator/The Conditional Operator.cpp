#include <iostream>
using namespace std; 

int main()
{
    cout << " Give me two numbers for, please!"; 
    int first; 
    int second; 
    cin >> first >> second; 
    
    int result = (first > second) ? first : second;
    /*if (first > second) // if -> If statement under one condition we are setting the result to some value                  
        result = first;
    else                  // else -> under another condition we are setting the result to another value
        result = second;*/ 

    cout << result; 
    return 0; 
}

// Exercise: Ask the user for two numbers. Store the larger value in a separate variable and print it. 
