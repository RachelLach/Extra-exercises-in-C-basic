#include <iostream>

using namespace std;

int main()
{
    int x = 1; 
    double y = 2.2;
    int z = x + static_cast<int>(y);
    cout << z;

    return 0;
}


/* Convert data from one to another called casting */
/* C style casting int z = x + (int)y; -> if conversion can not be done I will not know 
   until I run the program */

// #

/* C++ casting -> int z = x + static_cast<int>(y); -> (y) Call this like a function 
   */