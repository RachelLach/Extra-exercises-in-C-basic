#include <iostream>
using namespace std; 

int main() {
    int temperatures[] = { 30,31,32,33,34,35 }; 
    double sum = 0; 
    for (int temperature : temperatures)   // range-based for loop we can easily iterate over this array 
                                           // declare an int called temperature, and in each iteration this temperature 
                                           // is going to hold one one of the values in this array
        sum = sum + temperature;           // or sum += temperature; in each iteration we are going to take the sum
                                           // and add the temperature to it
    short count = sizeof(temperatures) / sizeof(int);   // devided by the total number of the array 
                                                        // to get the number of items in this array we need to get
                                                        // the size of array sizeof(temperatures) / sizeof(int)
    double average = sum /count  ;
        cout << average << endl;
    return 0;
}


// Exercise: Given a list of temperatures, write code to calculate the average temperature. 


