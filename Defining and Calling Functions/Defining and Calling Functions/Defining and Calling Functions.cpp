#include <iostream>
using namespace std; 

// How about a function that returns a value?
string full_name(string first_name,string last_name) {
    // Concatination (combining)
    return first_name + " " + last_name;
}
 

int main() { 
   // store it in a string which we can call name
   string name= full_name("Rachel", "Lachiani");
   cout << name << endl;
    
}






