#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "so tien can doi: ";
    cin >> n;
    int t;
    if (n >= 500000)
    {
        t = n / 500000;
        cout << "500.000 :" << t;
        n = n % 500000;
    };
    if (n >= 200000)
    {
        t = n / 200000;
        cout << "200.000 :" << t;
        n = n % 200000;
    };
    if (n >= 100000)
    {
        t = n / 100000;
        cout << "100.000 :" << t;
        n = n % 100000;
    };
    if (n >= 50000)
    {
        t = n / 50000;
        cout << "50.000 :" << t;
        n = n % 50000;
    };
    if (n >= 10000)
    {
        t = n / 10000;
        cout << "10.000 :" << t;
        n = n % 10000;
    };
    if (n >= 5000)
    {
        t = n / 5000;
        cout << "5.000 :" << t;
        n = n % 5000;
    };
    if (n >= 2000)
    {
        t = n / 2000;
        cout << "2.000 :" << t;
        n = n % 2000;
    };
    if (n >= 1000)
    {
        t = n / 2000;
        cout << "1.000 :" << t;
        n = n % 1000;
    };
    return 0;
}
