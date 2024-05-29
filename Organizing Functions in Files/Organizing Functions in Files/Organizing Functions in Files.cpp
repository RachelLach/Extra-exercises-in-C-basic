#include <iostream>
#include "greet.hpp"

using namespace std; 
using messaging::greet;

/* When I use a namespace in .hpp and .cpp I get a compilation error because the compiler  
* can not find the greet function. 
* solution: 1. prefix the function with the namespace : messaging::greet("Rachel"); 
* whit this way i can see all the functions defined in this namespace :)
* 2. option is to import the messaging namespace on the top, exactly the same way like std namespace.
* why? because if I have several calls to the greet function like messaging::greet("Rachel");
* then the code doesn't look good! if I write a namespace like this: using namespace messaging; on top 
* then i do not need to repeat calling with messaging:: in main. But there is a problem: 
* if i include multiple namespaces on the top then game conflicts can appear again :( 
* solution: in such cases instead of bringing the entire namespace, I can bring in specific functions in that namespace. 
* so instead of using namespace messaging; I can write: using messaging::greet;
* only importing this function from this namespace.

  */
int main()
{
    greet("Rachel");
    return 0; 
}
