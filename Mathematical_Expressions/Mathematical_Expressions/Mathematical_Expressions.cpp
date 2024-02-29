#include <iostream>

int main() {
	double  x = 10; 
	int y = 3; 
	double  z = x / y; // + is addition operator, x+y is operands 

	std::cout << z;

	return 0; 

}

// addition, subtraction and multiplication are the same 

// but for division is another thing: 
// when both variables are integers then the result is also an int 
// if I want to change the result to be float then I should change -> 
// one vatiables type to be a double and division equasion shoud also be double
// like the code on top otherwise i get int as a result 

// -> % called modulus which returns the remainder of a division 
// int x = 10; 
// int y = 3;
// int z = x % y; -> the result is 1 

