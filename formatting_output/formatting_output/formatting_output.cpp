#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left <<  setw(10) << "Spring" << setw(10) << "Nice" << endl
         << "Summer" << "Hot";
    return 0;
}

/* Stream manipulators in C++ : is a function for manipulating or modifying a stream */
/* setw() -> short for setwith -> call this function and give it the numbers of characters 
   for reserving for the data that comes after */ 

/* Left aligned -> sticky manipulator -> once I apply it is going to be in effect until we change it */