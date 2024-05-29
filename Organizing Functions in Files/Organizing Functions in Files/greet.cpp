#include "greet.hpp"
#include <iostream>
using namespace std;

// Now I have two complition errors : because string and cout are not defined. 
// So I need to include <iostream>
// Also adding namespace std like in main 
// now all errors are gone 
// I do not need to include the header file that contains the declaration for this function 

void greet(string name) {
	cout << "Hello " << name;
}

