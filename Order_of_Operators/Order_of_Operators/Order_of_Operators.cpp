#include <iostream>

int main()
{
    /*Mathematical expression and implement in c++
    
    z = x + 10/3y
    
    */ 

    double x = 10;
    double y = 5; 
    double z = (x + 10)/ (3 * y);
    /* () for x + 10 is numerator 
    () for 3*y is denominator 
    */

    std::cout << z;
    return 0;
}
