#include <iostream>
using namespace std;

int main()
{
    // In this case we know the value of x , but x could hold a value that we read dynamically at runtime. In that case 
    // we don't know what is stored in x. 
    // So now we want to check to see if x is greater than 5. 
    int x = 10; // declare a variable and set it to 10
    int y = 5; 
    // this piece of code called -> a boolean expression -> produces a boolean value x != 5; 
    //  So we can get the result and store it in a in a boolean variable called result. 

    bool result = x != y; 

    cout << boolalpha << result; 
    return 0; 
}


// An expression in programming is a piece of code that produces a value. 