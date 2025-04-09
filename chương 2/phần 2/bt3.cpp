#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int i, s;
    s = 0;
    for (i = 1; i < 101; i++)
    {
        if (i % 3 == 0 || i % 7 == 0)
        {
            s++;
        }
    }
    cout << "số lượng số chia hết cho 7 và 3 là: " << s;
    return 0;
}