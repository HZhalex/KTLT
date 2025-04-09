#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập vao so n:";
    cin >> n;
    int s = 0;
    for (int i = 0; i <= n; i++)
    {
        s = s + (2 * i + 1);
    }
    cout << "ta co tong s:" << s;

    return 0;
}