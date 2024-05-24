#include <iostream>
using namespace std; 

int main()
{
    // Ask a user to write a number between 1 and 5
    int number;
    do {
        cout << "Enter a number: " << endl; 
        
        cin >> number; 

    } while (number < 1 || number > 5); 
    
    return 0; 
}

