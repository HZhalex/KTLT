#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float n, i, s;
    cout << "nhập vào số lần lặp:";
    cin >> n;
    s = 0;
    for (i = 0; i < n; i++)
    {
        s = sqrt(3 + s);
    }
    cout << "S = " << s;
    return 0;
}