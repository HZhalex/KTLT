#include <iostream>
using namespace std;
int main() {
    int tu1,mau1,tu2,mau2;
    
    cout << "nhap so thap phan thu nhat tu so va mau so:";
    cin >> tu1 >> mau1;
    while (mau1 == 0){
        cout << "nhap lai mau so thap phan thu nhat:";
        cin >> mau1;
    }
    
    cout << "nhap phan so thu hai tu so va mau so:";
    cin >> tu2 >> mau2;
    while (mau2 == 0){
        cout << "nhap lai mau so cua phan so thu hai:";
        cin >> mau2;
    }
    
    // tinh tong
    int t_tu = tu1 * mau2 + tu2 * mau1;
    int t_mau = mau1*mau2;
    cout << "\ntong 2 phan so:" << t_tu << "/" << t_mau;
    
    // tinh tich
    int ti_tu = tu1 * tu2;
    int ti_mau = mau1*mau2;
    cout << "\ntich 2 phan so:" << ti_tu << "/" <<ti_mau;
    
    // tinh thuong
    int th_tu = tu1 * mau2;
    int th_mau = tu2 * mau1;
    if (tu2 == 0) {
        cout << "khong the chia cho 0!";
    } else {
        cout << "\nthuong 2 phan so: " << th_tu << "/" << th_mau;
    }
    
    // tinh hieu
    int h_tu = tu1 * mau2 - tu2 * mau1;
    int h_mau = mau1*mau2;
    cout << "\nhieu 2 phan so:" << h_tu << "/" << h_mau;
    return 0;
}