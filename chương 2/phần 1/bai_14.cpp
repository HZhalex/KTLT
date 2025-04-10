#include <iostream>
using namespace std;

int main()
{
    int maSo;
    cout << "Nhap ma so nhan vien (1-4): ";
    cin >> maSo;

    float luong = 0;

    if (maSo == 1)
    {
        // Nhà quản lý
        float luongCoDinh;
        cout << "Nhap luong co dinh theo tuan (X): ";
        cin >> luongCoDinh;
        luong = luongCoDinh;
    }
    else if (maSo == 2)
    {
        // Công nhân làm theo giờ
        float luongGio, soGio;
        cout << "Nhap luong theo gio (Y): ";
        cin >> luongGio;
        cout << "Nhap so gio lam viec trong tuan: ";
        cin >> soGio;

        if (soGio <= 40)
        {
            luong = soGio * luongGio;
        }
        else
        {
            luong = 40 * luongGio + (soGio - 40) * luongGio * 1.5;
        }
    }
    else if (maSo == 3)
    {
        // Công nhân theo lợi nhuận
        float doanhSo;
        cout << "Nhap doanh so ban hang trong tuan (Z): ";
        cin >> doanhSo;
        luong = 500000 + doanhSo * 0.07;
    }
    else if (maSo == 4)
    {
        // Công nhân theo sản phẩm
        int soSanPham;
        float tienMotSanPham;
        cout << "Nhap so san pham lam ra trong tuan (N): ";
        cin >> soSanPham;
        cout << "Nhap tien cong tren 1 san pham (S): ";
        cin >> tienMotSanPham;
        luong = soSanPham * tienMotSanPham;
    }
    else
    {
        cout << "Ma so khong hop le!" << endl;
    }

    if (maSo >= 1 && maSo <= 4)
    {
        cout << "Luong nhan vien nhan duoc trong tuan: " << luong << " VND" << endl;
    }

    return 0;
}
