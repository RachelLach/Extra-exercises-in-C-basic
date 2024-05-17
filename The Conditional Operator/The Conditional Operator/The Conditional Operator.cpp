#include <iostream>
using namespace std; 

int main()
{
    cout << " Give me two numbers for, please!"; 
    int first; 
    int second; 
    cin >> first >> second; 
    
    int result; 
    if (first > second)
        result = first;
    else
        result = second; 

    cout << result; 
    return 0; 
}

// Exercise: Ask the user for two numbers. Store the larger value in a separate variable and print it. 
