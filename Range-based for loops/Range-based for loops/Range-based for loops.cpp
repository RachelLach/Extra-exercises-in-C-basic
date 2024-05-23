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
    return 0;
}


// Looping over a range or a list of values 

