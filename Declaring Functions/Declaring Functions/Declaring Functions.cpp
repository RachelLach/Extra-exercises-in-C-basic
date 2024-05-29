#include <iostream>
using namespace std; 

// Define a function after main function:
// Function declaration (function prototype)
void greet(string name); 

int main()
{
    greet("Rachel");  // I get an error here for calling the function! cause the function is not visible to the main 
                      // Thats why I should always define functions before main function 
                      // But if I really need to declare a function after main then i need to call the function before
                      // main function -> like in line 4 -> and this tells the compiler that
                      // there is a function by this name somewhere else -> 
    return 0;
}

// Function definition 
void greet(string name) {
    cout << "Hello " << name; 
}

/* With declaration a function : telling the compiler there is a function by this name that returns void and takes
a string */

/* The definition or implementation of this function is ´somewhere else -> the diference between declaring and defining 
a function */