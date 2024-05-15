#include <iostream>
using namespace std; 


int main()
{
    // The order goes like this: 
    // () -> overwrite and chage the orders using parenthesis
    // !
    // &&
    // || 
    bool a = true; 
    bool b = false; 
    bool c = false; 
    bool result = (a || b ) && c; // With () first || and then && get evaluated 
    cout << boolalpha << result; 
    return 0;
}
