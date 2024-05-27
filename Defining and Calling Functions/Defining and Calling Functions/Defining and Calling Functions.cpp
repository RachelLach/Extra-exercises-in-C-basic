#include <iostream>
using namespace std; 

// Exercise: Create a function that receives two integers and returns the maximum of the two.
// Call that function and then print the result 

int maximum (int first_number,int second_number) {
    return (first_number > second_number) ? first_number : second_number; /* if (first_number > second_number)
                                                                          return first_number;
                                                                          else
                                                                          return second_number;*/
}
 

int main() { 
   
   int larger = (maximum(20, 20));
   cout << larger << endl; 
}






