#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    int *a, *dem; 
    a = new int[n];
    dem = new int[n];
    cout << "Nhap " << n << " phan tu:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dem[i] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (dem[i] == -1) continue; 
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                dem[i]++;
                dem[j] = -1;
            }
        }
    }

    bool coTrung = false;
    cout << "Cac phan tu bi trung va so lan xuat hien:\n";
    for (int i = 0; i < n; i++) {
        if (dem[i] > 1) {
            cout << "Gia tri " << a[i] << " xuat hien " << dem[i] << " lan.\n";
            coTrung = true;
        }
    }
    if (!coTrung) {
        cout << "Khong co phan tu nao bi trung lap.\n";
    }
    delete[] dem;
    delete[] a;
    return 0;
}
