#include <iostream>
#include <cmath> // declare a bunch of useful mathematical functions 
using namespace std;

int main(){

    cout << "Enter a radius for a circle: ";
    double radius;// declare a variable 
    cin >> radius;// to read the value user enters 

    const double pi = 3.14; 
    double area = pi * pow(radius, 2);
    cout << area;
    return 0;
}


// google -> cmath reference 

/* Exercise : write a program to calculate the area of a circle ->
ask the user to enter the radius of a circle and then it should print the 
area of a circle. 
*/