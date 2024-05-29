#include <iostream>
using namespace std; 

void greet(string name); 

int main()
{
    greet("Rachel");  // I get an error here for calling the function! cause the function is not visible to the main 
                      // Thats why I should always define functions before main function 
                      // But if I really need to declare a function after main then i need to call the function before
                      // main function -> like in line 4
    return 0;
}


void greet(string name) {
    cout << "Hello " << name; 
}




// Define a function after main function: