#include <iostream>
#include <cstdlib> // for random number 

using namespace std; 

int main()
{
    int number = rand();
    cout << number;
    return 0;
}

/* Call rand function -> rand() 
   get a random integer -> int number = rand(); */


/* To get a random number everytime I run the program I need to seed the
   random number generator with a different vaule */