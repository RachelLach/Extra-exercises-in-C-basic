#include <iostream>
using namespace std; 

// I do not need to use passing an argument by reference for reference when it comes to numbers and integers, because
// double only takes eight bytes of memory, copying eight byte is faster than nothing to worry about!But for arguments
// with large amount of data -> for improving the efficiency of the program by passing arguments by reference -> like
// dealing with strings 

void greet(const string& name) {
    cout << "Hello " << name << endl;
}


int main()
{
    string name = "Rachel";
    greet(name);  
    return 0; 
}

// After runing the program I get hello Rachel and a-> accidentlly modified the code -> side effect of using reference a parameter
// for preventing this I can set the (string& name) to const 

