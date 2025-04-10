#include <iostream>
using namespace std;
int main()
{
    char hung;
    cout << "nhap mot ki tu:";
    cin >> hung;
    if (hung >= 'A' && hung <= 'Z')
    {
        cout << "Day la ki tu chu in!";
    }
    else if (hung >= 'a' && hung <= 'z')
    {
        cout << "Day la ki tu chu thuong!";
    }
    else if (hung >= '0' && hung <= '9')
    {
        cout << "Day la ki tu so!";
    }
    else
    {
        cout << "ky tu khac nhung loai ki tu tren!";
    }
    return 0;
}