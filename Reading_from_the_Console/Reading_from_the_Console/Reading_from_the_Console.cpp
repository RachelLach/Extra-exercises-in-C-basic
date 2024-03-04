#include <iostream>
using namespace std;

int main()
{
    std::cout << "Enter a value: ";

    // Read the value (from console/standard input) and put it in a variable ->
    // But first we need to declare a variable 
    int value; // declare an integer called value 

    cin >> value; // >> called stream extraction operator 
    // read it and put it in this variable 

    cout << value; // to varify our program works 
    return 0;

}

