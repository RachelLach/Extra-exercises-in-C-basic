#include <iostream>
using namespace std; 


void greet(string name) {
    cout << "Hello " << name << endl;
}

// Now I reuse the full_name function to create a full name for a person and then I pass the full name to greet function 
string full_name(string first_name,string last_name) {
    // Concatination (combining)
    return first_name + " " + last_name;
}
 

int main() { 
   
   string name = full_name("Rachel", "Lachiani");
   greet(name);
    
}






