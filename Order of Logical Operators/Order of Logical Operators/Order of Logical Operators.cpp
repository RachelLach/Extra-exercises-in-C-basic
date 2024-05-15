#include <iostream>
using namespace std; 


int main()
{
    // The order goes like this: 
    // () -> overwrite and chage the orders using parenthesis
    // !
    // &&
    // || 
    bool US_citizen = true;  
    bool bachelor_degree = false; 
    short years_of_experience = 3; 
    bool is_eligible = US_citizen && (bachelor_degree || years_of_experience > 2); 
    cout << boolalpha << is_eligible; 
    return 0;
}

// Exercise: A job applicant should be a US citizen and either have a bachelor degree or at least two 
// years of work experience. 