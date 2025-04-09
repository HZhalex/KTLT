#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n;
    cout << "nhập vao so n:";
    cin >> n;
    float s;
    s = 1 / 2 + 1 / (n + 1);
    cout << "s la:" << s;

    return 0;
}