#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2) << 12.34567;
    return 0;
}

/* fixed manipulator -> printing all part of a float number I write in cout */
/* setprecision() -> how many digits I want after decimal point */