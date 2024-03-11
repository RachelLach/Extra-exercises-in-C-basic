#include <iostream>
#include <cstdlib> // for random number 
#include <ctime> // file 

using namespace std; 

int main()
{
    
    srand(time(0));
    const short max_value = 6; 
    const short min_value = 1;
    short first_result = (rand() % (max_value - min_value + 1)) + min_value;
    short second_result = (rand() % (max_value - min_value + 1)) + min_value;
    cout << first_result << "," << second_result;
    return 0;
}

/* Exercise: write a program for roling dice. Everytime run this program I should get two random values between 
1-6 . To limit the range of random number using this formula: [rand() % (max_value - min_value + 1] + min value */

