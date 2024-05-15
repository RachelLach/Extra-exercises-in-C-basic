#include <iostream>
using namespace std;

int main()
{
    int age = 20; 
    int salary = 50'000 ; 
    bool is_eligible = (age > 18 || age < 65) && (salary > 30'000); 
    cout << boolalpha << is_eligible;
    return 0;
}
