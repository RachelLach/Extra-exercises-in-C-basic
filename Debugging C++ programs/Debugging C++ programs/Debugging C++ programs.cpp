#include <iostream>
using namespace std; 

void print_odd_numbers(int limit) {
    for (int i = 0; i < limit; i++) {
        if (i % 2 != 0)
            cout << i << endl; 
    }

}


int main() {
    print_odd_numbers(10);
    return 0;
}
