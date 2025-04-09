#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 0; i <= 180; i += 5)
    {
        float goc = i * 3.14 / 180.0;
        cout << "sin(" << i << ")" << " = " << sin(goc) << endl;
        cout << "cos(" << i << ")" << " = " << cos(goc) << endl;
        cout << "tan(" << i << ")" << " = " << tan(goc) << endl;
        cout << endl;
    }
    return 0;
}