#include <iostream>
using namespace std; 

int main()
{
    // Printing a menu for the user: 
    cout << "1- Create account" << endl   // To create an account 
         << "2- Change password" << endl  // another option like change the password 
         << "3- Quit" << endl             
         << "Select an option: ";         // select a menu/an option 
    
    short input; 
    cin >> input; // read the user's selected input 

    switch (input) {                              // -> in () is the variable 
        case 1:                                   // Here add one or more case labels for each value 
            cout << "You selected 1";             // The logic that shoyld be executed 
            break;                                // We need to terminate this block using break statement 
        case 2: 
            cout << "You selected 2";
            break;
        default: 
            cout << "Goodbye!";
    } 


    if (input == 1)
        cout << "You selected 1";
    else if (input == 2)
        cout << "You selected 2";
    else
        cout << "Goodbye!";

    return 0;
}

// With switch statement can only compare variables with certain values , not for greater or less than. 
// Only for equality comparison -> use switch statement to compare a variable with set of values. 