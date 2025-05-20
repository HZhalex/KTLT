#include <iostream>
using namespace std;
void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n, x;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int *a;
    a = new int [n];
    cout << "Nhap cac phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Nhap gia tri x: ";
    cin >> x;
    sapXepTangDan(a, n);
    int tong = 0, count = 0;
    cout << "Cac phan tu duoc chon:\n";
    for (int i = 0; i < n; i++) {
        if (tong + a[i] < x) {
            tong += a[i];
            cout << a[i] << " ";
            count++;
        } else {
            break;
        }
    }

    cout << "\nSo phan tu da chon: " << count << endl;
    cout << "Tong cua chung: " << tong << endl;

    return 0;
}
