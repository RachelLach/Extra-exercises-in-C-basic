#include <iostream>
using namespace std; 

int main() {
    int numbers[] = {1,2,3};            // int array called number and initialize this to 1,2 and 3
    for (int i = 0; i < sizeof(numbers)/sizeof(int); i++) 
                                          // loop over this array and print each number on a new line 
    //sizeof (numbers): 16                // problem: we have to calculate it dynamically when we change the size of array 
    // sizeof(int) : 4                    // solution: function -> sizeof()-> if we pass our array here it will return
                                          // the number of bytes allocated by this array 
        cout << numbers[i] << endl;



    // second implementation 
    for (int number : numbers)            // in () we declare a loop variable -> this variable is going to hold one 
        cout << number << endl;           // of the items in this array in each iteration 
                                          // we are working with actual items or actual integers and not index
    return 0;
}

// by using the range base for loop we can also iterate over a string, because a string is a sequence 
// or list of characters. 





// now: we have a list of items and we want to iterate or loop over them: that is called the range based for loop 


