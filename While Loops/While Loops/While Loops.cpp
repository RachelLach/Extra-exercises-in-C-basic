#include <iostream>
using namespace std; 

int main()
{
	int secret_number = 5; 
	int input = 0;  
	while (input != secret_number)
		cout << " Guess a number between 1 and 5 : " << endl; 
	    cin >> input; 
   
	return 0;
}

// Exercise:Declare a secret number. Continuously ask the user to guess the secret number :)