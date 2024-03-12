#include <iostream>

using namespace std; 

int main()
{
    int numbers[] = {10, 20}; // initializing to a list of values
    cout << numbers[1];

    return 0;
}


/* if I have all the initial values, I don't need to provide a size
   if I don't have all initial values and I want to reserve enogh space for storing all the elements -> 
   then I have to specify a size here */