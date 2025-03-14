// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {    
    double starth,endh;
    const int gia = 30000;
    const double ds = 0.7;
    const double tds = 0.9;
    cout << "nhap vao gio bat dau:";
    cin >> starth;
    cout << "nhap vao gio ket thuc:";
    cin >> endh;
    if (starth < 8 || endh > 24 || starth >= endh) {
    cout << "nhap khong hop le!" << endl;
    return 1;
    }

    int totalh = endh - starth;
    int f3h = min(totalh, 3);
    int add = max(totalh - 3, 0);
    
    double totalc = f3h * gia + add * (gia *ds );
    
    if (starth >= 8 && endh <= 17) {
        totalc *= tds;
    }
    
    cout << "so tien khach hang phai tra:" << totalc << " dong" << endl;


    return 0;
}