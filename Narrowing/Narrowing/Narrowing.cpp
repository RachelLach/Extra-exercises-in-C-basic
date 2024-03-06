#include <iostream>

using namespace std;

int main() {
	int number = 1'000'000; 
	short another_number = number;
	// short another_number {number};-> get the same result 
	cout << another_number;// the result of narrowing conversion here is 16960
	return 0;
}


/* Initialize a variable of a smaller type using a larger type */
    