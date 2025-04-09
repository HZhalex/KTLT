#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "nhập vào số nguyên dương n:";
    cin >> n;
    if (n < 2)
    {
        cout << "Nhập sai !";
    }
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "n không phải số nguyên tố!";
            return 0;
        }
    }
    cout << "n là số nguyên tố !";

    return 0;
}