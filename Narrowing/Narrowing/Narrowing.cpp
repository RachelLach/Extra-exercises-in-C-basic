#include <iostream>

using namespace std;

int main() {
	short number = 100; 
	int another_number = number;
	cout << another_number; // result is 100
	return 0;
}


/* Initialize a variable of a smaller type using a larger type */

/* The opposite is not an issue. Short type takes 2 bytes, int type takes 
   4 bytes - > store a smaller number in the larger memory space -> 
   I'm not going to encounter data loss -> the additional bytes in memory 
   are going to filled with zero */
    