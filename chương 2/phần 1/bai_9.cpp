#include <iostream>
using namespace std;
int main() {
    double dtb;
    do {
        cout << "nhap diem trung binh: \n";
        cin >> dtb;
        if (dtb > 10 || dtb < 0) cout << "diem trung binh khong hop le! \n";
        
    }
    while ( dtb > 10 || dtb <0 );
    if (dtb >= 9) cout << "Xuat sac";
    else if (dtb >= 8) cout <<  "Gioi";
    else if (dtb >= 6.5) cout <<  "Kha";
    else if (dtb >= 5) cout <<  "Trung binh";
    else cout <<  "Yeu";

    return 0;
}