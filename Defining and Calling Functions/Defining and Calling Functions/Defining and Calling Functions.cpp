#include <iostream>
using namespace std; 

// An example with couple of parameters 
// Greet someone by their first and last name 
// A parameter of string called first_name...
void greet(string first_name, string last_name) { // 1. parameters are the names that I have defined here 
    // Now I use these parameters in this function just like regular variables 
    // So this parameters are exactly like defining a variable this name right here -> string first_name;
    cout << "Hello " << first_name << " " << last_name <<  endl;
}

 

int main() { 

    // So now to use the greet function in main function I type the name of the function followed by ().
    // Calling - Invoking - executing this function 
    greet("Rachel","Lachiani"); // Get an error for i haven't supplied any values for these parameters  
                                // I refer to these values as arguments 
                                // -> this is the diference between prameters and arguments 
                                // 2. But arguments are the values that I supply for those parameters 
    // Anything that I type after calling the function gets executed 
    cout << "Done!" << endl; 
    return 0; 
}






