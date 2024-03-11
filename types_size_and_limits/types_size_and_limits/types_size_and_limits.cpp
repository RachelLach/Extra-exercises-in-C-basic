#include <iostream>

using namespace std;

int main() {

    int number = numeric_limits<int>::min();
    number--;
    cout << number;
    return 0;
}


/* if a the value I want to store in a type is too small for that type -> 
   it will wrap around to the largest value that can store in an int. This is called underflowing */