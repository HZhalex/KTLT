#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;

    // In hệ 10
    cout << "He 10: " << n << endl;

    // In hệ 2 (nhi phân)
    cout << "He 2: ";
    int tam = n;
    int dao = 0;
    while (tam > 0)
    {
        dao = dao * 10 + (tam % 2); // đảo ngược chuỗi nhị phân
        tam = tam / 2;
    }
    while (dao > 0)
    {
        cout << (dao % 10);
        dao = dao / 10;
    }
    cout << endl;

    // In hệ 8 (bát phân)
    cout << "He 8: ";
    tam = n;
    dao = 0;
    while (tam > 0)
    {
        dao = dao * 10 + (tam % 8); // đảo chuỗi
        tam = tam / 8;
    }
    while (dao > 0)
    {
        cout << (dao % 10);
        dao = dao / 10;
    }
    cout << endl;

    // In hệ 16 (thập lục phân)
    cout << "He 16: ";
    tam = n;
    dao = 0;
    while (tam > 0)
    {
        dao = dao * 100 + (tam % 16); // mỗi chữ số có thể là 0–15, nên dùng *100 để phân tách
        tam = tam / 16;
    }
    while (dao > 0)
    {
        int so = dao % 100;
        if (so < 10)
            cout << so;
        else if (so == 10)
            cout << 'A';
        else if (so == 11)
            cout << 'B';
        else if (so == 12)
            cout << 'C';
        else if (so == 13)
            cout << 'D';
        else if (so == 14)
            cout << 'E';
        else if (so == 15)
            cout << 'F';
        dao = dao / 100;
    }
    cout << endl;

    return 0;
}
