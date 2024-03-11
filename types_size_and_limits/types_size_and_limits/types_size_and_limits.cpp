#include <iostream>

using namespace std;

int main() {

    int number = numeric_limits<int>::max();
    number++;
    cout << number;
    return 0;
}


/* if a the value I want to store in a type is too large for that type -> 
   it will wrap around to the types minimum. this is called overflowing  */