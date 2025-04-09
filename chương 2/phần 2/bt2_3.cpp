#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhập vao so n:";
    cin >> n;
    int s = 1;
    for (int i = 1; i < n + 1; i++)
    {
        s = s * i;
    }
    cout << "s la:" << s;

    return 0;
}