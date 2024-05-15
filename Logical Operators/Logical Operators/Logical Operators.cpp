#include <iostream>
using namespace std;

int main()
{
    int age = 10; 
    bool is_eligible = age > 18 || age < 65; // snake case -> && logical and opretor to add a second condition 
                                             // or a second boolean expression 
    cout << boolalpha << !is_eligible;
    return 0;
}
