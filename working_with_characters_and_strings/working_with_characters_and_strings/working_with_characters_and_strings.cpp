#include <iostream>
#include <string>

using namespace std;

int main() {

     string name;
     cout << "Enter your name: ";
     getline(cin, name);
     cout << "Hello, " << name << "!" << endl;
     return 0;

}

// this function defined in the std
// give it two arguments(values) - first is input string that is cin and the second argument 
// is the string variable which is name