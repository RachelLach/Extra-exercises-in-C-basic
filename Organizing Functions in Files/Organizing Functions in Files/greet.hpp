#ifndef GREET
#define GREET

#include <string>

namespace messaging {

	void greet(std::string name);
}

/* If I make my own string class, taht is going to be different. My string class is not going to conflict with
* the one defined in the standard library, because this one is prefixed with std so it is inside a separate package */

/* Now I should put the greet function into a namespace to prevent the future name conflicts
* write namespace -> give it a name and -> {} -> put the declaration function inside (void greet(std::string name);)
* Now I need to do the same thing in implementation file 
*/


#endif