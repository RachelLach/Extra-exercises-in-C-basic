// to include this file only once 
// Write another directive -> #ifndef -> then i define a constant which I type in uppercase letters and call it wht ever
// so if this constant not defined then using a define directive (#define) with the exact same name 
// at the end i type another directive called #endif, 
// Here is what happens: When I build this project, my build tool is going to execute the first line (#ifndef GREET)
// so this constant is not defined so it is going to get defined (#define GREET) and then the code is going 
// to get included in my build process until it get to #endif.
// the second time I include this header file (#include "greet.hpp"), so somewhere else other than main.cpp , 
// my build tool again is going to execute (#ifndef GREET), but the second time this constant is defined, so the rest 
// of this code is not going to get executed. 


#ifndef GREET
#define GREET

#include <string>

void greet(std::string name);

#endif