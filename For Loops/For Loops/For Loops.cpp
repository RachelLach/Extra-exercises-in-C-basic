#include <iostream>
using namespace std; 

int main()
{
    // print numbers from 1 to 5 
    for (int i = 0;i < 5; i++)
       if (i % 2 != 0)                      // instead of printing each number lets say: we only want to print the odd numbers 
                                // is statement and check the reminder of division of AI by two 
       cout << i << endl;                         
                            
       // in () we have three expressions : 1. declaring our loop or counter variable -> 
       // terminate the expression using ; 2. boolean expression or a condition that determines ->
       // when this loop will terminate-> then we terminate this by using a ; , 
       // 3. type an expression that determines how is going to change after each repetition 
       // i = i + 1 or i++
       // Then we write the statement that we want to repeat, for multiple statements use {}                        
                       
    return 0;
}

// For loops for repeating a set of instructions 
// using loop instead of printing one value of a variable like i, but in each repetition we are going to increment i by 1



// How the code on top gets executed: 
// first the loop variable i or counter variable is initialized to zero
// then the loop condition is evaluated, so zero is less than five 
// so the body of the loop (cout) gets executed so thats why we see the number 0 on the terminal
// at the end of this repetition or iteration, i is incremented by one 