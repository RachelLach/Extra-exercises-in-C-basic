#include <iostream>
using namespace std; 

int main()
{
    // Write an infinite loops example with break and continue statement 
    while (true) {
        cout << "number: "; 
        int number; 
        cin >> number; 
        if (number >= 1 && number <= 5)
            break; 
        cout << "Error! Enter a number between 1 and 5." << endl;
    }
    return 0;
}
