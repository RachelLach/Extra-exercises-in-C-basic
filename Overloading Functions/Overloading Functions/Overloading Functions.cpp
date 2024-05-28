#include <iostream>
using namespace std; 

void greet(string name) {
    cout << "Hello " << name; 
}

// This second version can have any type of parameters 
void greet(string title, string name) {  // These parameters are completely independent of each other 
    cout << "Hello " << title << " " << name; 

}



int main(){
    greet("Ms", "Rachel");
    return 0;
}


// Overloading Functions: sometimes I need to create functions with the same name but different parameters.  