#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    float n, i, s;
    cout << "nhập vào số lần lặp:";
    cin >> n;
    s = 0;
    for (i = 1; i < n + 1; i++)
    {
        s = sqrt(i * i + s);
    }
    cout << "S = " << s;
    return 0;
}