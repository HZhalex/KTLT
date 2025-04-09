#include <iostream>
using namespace std;
int main()
{
    int x;
    int n;
    int k, dem;
    cout << "nhap so X: ";
    cin >> x;
    cout << "so lan doan toi da : ";
    cin >> n;
    dem = 0;
    while (dem < n)
    {
        cout << "doan thu " << dem + 1;
        cin >> k;
        if (k == x)
        {
            cout << "ban da doan chinh xac !";
        }
        else if (x > k)
        {
            cout << "so du doan cao hon so ban nhap!";
        }
        else
        {
            cout << "so du doan thap hon so ban nhap!";
        }
        dem += 1;
    }
    if (dem == n && k != x)
    {
        cout << "Het luot doan. Ban thua! So bi mat la: " << x << endl;
    }
    return 0;
}