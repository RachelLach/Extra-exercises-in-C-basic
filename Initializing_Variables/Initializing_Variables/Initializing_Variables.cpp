#include <iostream>

using namespace std;

int main()
{
    double price = 99.99; 
    float interest_rate = 3.67f; // f is important 
    long file_size = 90000L; // L is important to not mistake it with int
    char letter = 'a';
    bool is_valid = true; 
    return 0;
}



// OBS line 8: if f is there so compiler by default -> 
// -> will treat the number as a double -> store as a double in -> 
// float variable = so Data loss will happen 
