#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string street;
    cout << "Street: ";
    getline(cin, street);
     
    string city;
    cout << "City: ";
    getline(cin, city);

    string state;
    cout << "State: ";
    getline(cin, state);

    string zipcode;
    cout << "ZipCode: ";
    getline(cin, zipcode);

    cout << street << endl
         << city <<  ", "<< state << ", " << zipcode << endl;
     return 0;

}

/* Exercise: write a program that ask the user a series of questions like street, city, state and zipcode.
   and then prints the user's adress using this format: street, city, state, zipcode */