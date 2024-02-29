#include <iostream>

int main()
{
    int file_size{}; // This called initializing 
    double sales = 9.99; // Initialize it to 9.99
    std::cout << file_size; // with "text" will print a text 
    // but now without "" it will print value 100
    return 0;
}

// I tried to delet the value of file_size and then print it.
// I got an error that i should have initialize it 
// then I used a suggestion here telling use {}
// I did and the error is gone but when i run the program i got a result 0.

// Here is why: 
// a feature of C++ called default initialization. When I declare a variable 
// without explicitly initializing it with a value, its initial value is 
// indeterminate. In most cases, it will contain garbage
// (the data is currently in in memory) or an arbitrary value -> 
// (refers to a value that is chosen seemingly randomly or without any specific reason).


// When I print file_size -> 
// using std::cout, I'm essentially printing whatever value happened 
// to be in that memory location at the time.I could also get a random value.


// I can also initialize multiple variable on the same line by divide them 
// with a comma (,)
// but better not to do it 