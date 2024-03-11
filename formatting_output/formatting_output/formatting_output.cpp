#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(10) << "Spring" << "Nice" << endl
         << "Summer" << "Hot";
    return 0;
}

/* Stream manipulators in C++ : is a function for manipulating or modifying a stream */
/* setw() -> short for setwith -> call this function and give it the numbers of characters 
   for reserving for the data that comes after */