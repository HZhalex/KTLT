#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "nhap 2 so a va b:";
    cin >> a >> b;
    int c, d;
    c = a;
    d = b;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    cout << "Ta có ước chung lớn nhất là :" << temp;
    cout << " Ta có bội chung nhỏ nhất là :" << c / temp * d;
    return 0;
}