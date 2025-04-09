#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, n;
    cout << "nhập vào số nguyên dương n:";
    cin >> n;
    if (n < 1)
    {
        cout << "Nhập sai !";
    }
    for (i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << endl;
            n /= i;
        }
        if (n > 1)
        {
            cout << n << endl;
        }
    }
    return 0;
}