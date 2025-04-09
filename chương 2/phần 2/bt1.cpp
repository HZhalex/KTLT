#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int i, n, s;
    cout << "nhap vao so nguyen n:";
    cin >> n;
    s = 1;
    for (int i = (n % 2) ? 1 : 2; i <= n; i += 2)
    {
        s *= i;
    }
    cout << "S = " << s;
    return 0;
}