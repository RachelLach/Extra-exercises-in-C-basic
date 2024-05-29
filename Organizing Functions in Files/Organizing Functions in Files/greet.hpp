// to include this file only once 
// Write another directive -> #ifndef -> then i define a constant which I type in uppercase letters and call it wht ever
// so if this constant not defined then using a define directive (#define) with the exact same name 
// at the end i type another directive called #endif


#ifndef GREET
#define GREET

#include <string>

void greet(std::string name);

#endif