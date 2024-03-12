#include <iostream>

using namespace std;

int main()
{
    int x = 10; 
    int y = 3;
    double z = x / static_cast<double>(y); // x or y here should be double -> one is enough 
    cout << z;

    return 0;
}

