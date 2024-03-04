#include <iostream>
using namespace std;

int main()
{
    cout << "write a temprature in fahrenheit for me please:  ";

    // Read the value (from console/standard input) and put it in a variable ->
    // But first we need to declare a variable 
    double fahrenheit; // declare an integer called value - use . instead of ,
    
    cin >> fahrenheit; // >> called stream extraction operator 
                  // read it and put it in this variable 
   
    double celsius = (fahrenheit - 32)/1.8;
    cout << celsius;// to varify our program works 
    
    return 0;

}

/* exercise: write a program to convert a temperature from fahrenheit to 
celsius. 
*/
