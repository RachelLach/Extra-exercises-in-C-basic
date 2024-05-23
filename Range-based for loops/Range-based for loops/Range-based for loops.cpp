#include <iostream>
using namespace std; 

int main() {
    int temperatures[] = { 30,31,32,33,34,35 }; 
    int sum = 0; 
    for (int temperature : temperatures)
        sum = sum + temperature;           // or sum += temperature;

    double average = sum / sizeof(temperatures) / sizeof(int);
        cout << temperatures << endl;
    return 0;
}


// Exercise: Given a list of temperatures, write code to calculate the average temperature. 







