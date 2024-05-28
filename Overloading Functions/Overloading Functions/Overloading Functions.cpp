#include <iostream>
using namespace std; 

void greet(string name) {
    cout << "Hello " << name; 
}

// A concept -> Function signature: consist of the name of the function + (number and type of parameters)
// The name these parameters doesn't matter 
// When overloading functions, each function or each overloaded should have a unique signature. 
// -> here I can not have two greet functions that both have two string parameters -> if I do wrong I get an error 
void greet(string title, string name) {   
    cout << "Hello " << title << " " << name; 

}


int main(){
    greet("Ms", "Rachel"); 
    return 0;
}


  