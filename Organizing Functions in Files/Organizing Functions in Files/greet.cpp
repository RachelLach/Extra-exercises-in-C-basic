#include "greet.hpp"
#include <iostream>
using namespace std;

/*I can also reuse code written by other people in my projects as well but there is a problem:
* What if someone else also has written a greet function? then my greet function and theirs are going to conflict :(
* Solution to this: use namespaces :) 
* A namespace is like a package that I put my functions in it :) and with this I can prevent name conflicts */

/* what i did in .hpp should do the same thing here with namespace after that back to main file */

namespace messaging {
	void greet(string name) {
		cout << "Hello " << name;
	}
}


