#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so lan doan toi da: ";
    cin >> n;
    int doan = 1;
    int dem = 0;
    char traLoi;
    while (dem < n)
    {
        cout << "May doan so: " << doan;
        cin >> traLoi;
        if (traLoi == 'd')
        {
            cout << "May doan dung!" << endl;
            break;
        }
        else if (traLoi == 'l')
        {
            doan = doan + 1;
        }
        else if (traLoi == 'n')
        {
            cout << "May se thu so khac." << endl;
        }
        dem = dem + 1;
    }
    if (dem == n)
    {
        cout << "Het luot doan. May thua!" << endl;
    }
    return 0;
}
