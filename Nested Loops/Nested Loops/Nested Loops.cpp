#include <iostream>
using namespace std; 

int main()
{
    // Exercise: Write a program and ask the user for the number of rows. 
    cout << "Rows: "; 
    int rows; 
    cin >> rows; 

    for (int i = 1; i <= rows; i++) {
        //first iteration :  i = 1, j = 0, (1)
        // second iteration : i = 2, j = ,0,1  (2)
        for (int j = 0; j < i; j++) 
            cout << "*"; 
        cout << endl; 
    }


    return 0; 
}

