#include <iostream>
#include "greet.hpp"

using namespace std; 

// When programs get more complex, then the main function becomes larger and harder to read, so I don't want to write 
// all the code here and instead, I want to divide the project into different files, each serving a purpose.
// How to take a function outside of this file and put it into a separate file. 
// The benefits: 1. It is going to make this file a little bit smaller and easier to maintain, 
// 2. Once I have this functionality, in a separate file, then I can reuse that file in different projects  
// How to do it: 
// project window -> right click -> choose add -> then class 
// The I need to add two files: one for header and it is where I am going add function declararion 
// The other file is called an implementation file and that's where I am going to add the function definition 
// So now I take the greet function definition and move it to greet.cpp file 
// I also need to include files from my project -> cpp and hpp

// Problem: If I include this file in different files (#include "greet.hpp"), then I get a problem -> 
// to solve this issue: go to header file -> the explanation is there

int main()
{
    greet("Rachel");
    return 0; 
}
