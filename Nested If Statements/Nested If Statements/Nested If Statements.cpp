#include <iostream>
using namespace std; 

int main()
{
    // US Citizen 
    // CA Resident: tuition = 0
    // Non resident: tuition = 1000
    // Not a US Citizen 
    // Tuition: 3000
    bool is_citizen = true;
    bool ca_resident = true; 
    short tuition = 0; 
    // Outer if statement 
    if (is_citizen) 
        // Inner if statement 
        if (!ca_resident) tuition = 1000;
    
    else tuition = 3000; 
    return 0; 
}
