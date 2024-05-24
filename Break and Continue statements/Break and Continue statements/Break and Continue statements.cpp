#include <iostream>
using namespace std; 

int main()
{
    for (int i = 1; i <= 5; i++) {

        // if i is divisible by 3 we don't want to print it on terminal -> use if statement 
        if (i % 3 == 0) // if i is divisible by zero then we gonna continue to next iteration -> 
                        // otherwise we print i in terminal 
            continue; 
            cout << i << endl; 
    }
    return 0;
}


// Loops in C++: 
// For loops: when we know a head of time how many times we want to execute sth.
// Range-base for loops: when we want to iterate or loop over a range of values like when we have an array or a string. 
// While loops: when we do not know ahead of time how many times we want to repeat sth.
// Do-while loops: like while loop 

// Break statement: To break out of a loop 
// Continue statement: To skip an iteration 