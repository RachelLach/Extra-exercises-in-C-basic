#include <iostream>
using namespace std;

int main()
{
    std::cout << "Enter values for x and y: ";

    // Read the value (from console/standard input) and put it in a variable ->
    // But first we need to declare a variable 
    double x; // declare an integer called value - use . instead of ,
    double y;
                   

    cin >> x >> y; // >> called stream extraction operator 
                  // read it and put it in this variable 
   
    cout << x + y;// to varify our program works 
    
    return 0;

}

