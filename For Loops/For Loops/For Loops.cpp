#include <iostream>
using namespace std; 

int main()
{
    cout << "Enter a positive number: "; 
    int number; 
    cin >> number; 
    
    if (number < 0)
        cout << "Error! Number is not positive.";
    else {
        int factorial = 1; 
        for (int i = 1; i <= number; i++)
            factorial = factorial * i;         // or factorial *= i
        cout << "The factorial of " << number << ": " << factorial;
    }         
    return 0;
} 

// Exercise: Ask the user for a positive number. Print the factorial of that number. 