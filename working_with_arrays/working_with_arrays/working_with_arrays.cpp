#include <iostream>
#include<string>

using namespace std; 

int main()
{
    string names[3]; 

    cout << " Name: "; 
    getline(cin, names[0]);

    cout << " Name: ";
    getline(cin, names[1]);

    cout << " Name: ";
    getline(cin, names[2]);

    cout << names[0];

    return 0;
}

/* exercise: Ask the user for 3 names. Store these names in an array and then print the first name. */