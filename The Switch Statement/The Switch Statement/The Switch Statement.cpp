#include <iostream>


int main(){
	cout << " Give me two numbers: ";
	int first_number; 
	int second_number; 
	cin >> first_number >> second_number;
	
	cout << "Give me an operator:";
	char op; // operator is a reserved keyword so we can not name here operator 
	cin >> op;

	switch (op) {
	     case '+':
			 cout << first_number + second_number;
			 break;
		 case '-': 
			 cout << first_number - second_number;
			 break;
	     default:
			 cout << "Invalid operator!";
	}
	
	return 0; 
}

// Exercise: Ctreate a basic calculator. Ask the user for two numbers and an operator. Then, print the result 
// of applying the operator to those numbers. 