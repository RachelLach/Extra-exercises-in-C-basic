#include <iostream>
#include <cstdlib> // for random number 
#include <ctime> // file 

using namespace std; 

int main()
{
    
    srand(time(nullptr)); // This function will return a value 
                          // and that value gonna pass to this function as an argument 
    int number = rand() % 10;
    cout << number;
    return 0;
}

/* Call rand function -> rand();  
   and get a random integer and store it in number -> int number = rand(); */


/* To get a random number everytime I run the program I need to seed the
   random number generator with a different vaule */ 

/* There is a function for getting the current time in terms of the number of seconds elapsed from 
january 1970. With this function everytime run the program -> get a different number */

/*Now we generrate a random number and print it on the console*/

