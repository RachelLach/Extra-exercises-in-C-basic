#include <iostream>

int main() {
	int x = 10; 

	// if we apply as postfix: 
	// 1. the current value af x is going to be assigned to y 
	// 2. then x will incremented by 1 
	// so we get x = 11, and y = 10
	int y = x++; 

	// if we apply as prefix: 
	// 1. the value of x will incremented by 1
	// 2. then the result will stored in z 
	// so we get x = 12, and z = 11
	int z = ++x; 

	std::cout << y;

	return 0; 

}

