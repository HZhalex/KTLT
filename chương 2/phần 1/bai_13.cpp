#include <iostream>
using namespace std;
int main()
{
    int soKwh;
    long tien = 0;
    cout << "Nhap vao so kWh tieu thu: ";
    cin >> soKwh;

    if (soKwh <= 100)
    {
        tien = soKwh * 550;
    }
    else if (soKwh <= 150)
    {
        tien = 100 * 550 + (soKwh - 100) * 900;
    }
    else if (soKwh <= 250)
    {
        tien = 100 * 550 + 50 * 900 + (soKwh - 150) * 1250;
    }
    else
    {
        tien = 100 * 550 + 50 * 900 + 100 * 1250 + (soKwh - 250) * 1700;
    }
    long tongTien = tien + (tien * 10) / 100;
    cout << "So tien phai tra (bao gom VAT): " << tongTien << " VND" << endl;
    return 0;
}
