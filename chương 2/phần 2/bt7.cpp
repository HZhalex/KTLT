#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float s, n, i;
    while (true)
    {
        cout << "Nhập vào dãy:" << endl;
        cin >> n;
        if (n == 9999)
        {
            break;
        }
        i++;
        s += n;
    }
    float tb = s / i;
    cout << "trung bình cộng của một dãy số:" << tb << endl;
    return 0;
}