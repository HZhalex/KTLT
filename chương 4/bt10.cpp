#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;
    
    int *mang = new int[n];
    
    cout << "Nhap cac phan tu cua mang: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> mang[i];
    }
    
    int *max1 = new int;
    int *max2 = new int;
    int *max3 = new int;
    *max1 = *max2 = *max3 = 0;
    
    for (int i = 0; i < n; i++) {
        if (mang[i] > *max1) {
            *max3 = *max2;
            *max2 = *max1;
            *max1 = mang[i];
        } else if (mang[i] > *max2) {
            *max3 = *max2;
            *max2 = mang[i];
        } else if (mang[i] > *max3) {
            *max3 = mang[i];
        }
    }
    
    cout << "Ba phan tu co gia tri lon nhat la: " 
         << *max1 << ", " << *max2 << ", " << *max3 << endl;
    cout << "Tong = " << (*max1 + *max2 + *max3) << endl;
    
    delete[] mang;
    delete max1;
    delete max2;
    delete max3;
    
    return 0;
}