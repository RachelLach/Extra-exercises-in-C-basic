#include <iostream>
using namespace std; 

int main()
{
    int temperature = 100; 
    if (temperature < 60)   
        cout << "Cold!";
    else if (temperature < 90)
        cout << "Nice!";
    else
        cout << "Hot!"; 
    
    return 0; 
}

