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

    return 0;
}
