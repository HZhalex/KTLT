// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    float gia_tien , km,t,thue;
    cout << "nhập vào so km da di la:";
    cin >> km;
    if (km <= 1){
        gia_tien = 15000 * km;
        thue = gia_tien *10 / 100;
        t = gia_tien + thue;
        cout << "so tien can phai tra la:" << t;
    }
    else{
        gia_tien = 15000 + (km - 1) * 12000;
        thue = gia_tien *10 / 100;
        t = gia_tien + thue;
        cout << "so tien can phai tra la:" << t;
    }
    
    return 0;
}