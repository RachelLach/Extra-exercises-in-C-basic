#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left;
    cout << fixed;
    cout << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(15) << "C++" << setw(10) << "100" << endl
         << setw(15) << "JavaScript" << setw(10) << "50" << endl;
    
    return 0;
}

/* Exercise: Write a program for printing this-> course C++ students 100, course JavaScript student 50*/

/* Solution: << setw(15) << "C++" << setw(10) << right << "100" << left << endl
             << setw(15) << "JavaScript" << setw(10) << right << "50" << left << endl; */ 