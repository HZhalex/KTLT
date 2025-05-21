#include <iostream>
using namespace std;

void mergeArrays(int a[], int n, int b[], int m, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }
    while (i < n) {
        result[k++] = a[i++];
    }

    while (j < m) {
        result[k++] = b[j++];
    }
}

int main() {
    int n ,m;
    
    cout << "Nhap vao so luong phan tu mang: " <<endl;
    cin >> n;
    cout << "Nhap vao so luong phan tu mang: " <<endl;
    cin >> m;
    
    int *a = new int [n],*b = new int [m];
    int *result = new int [n+m];
    
    for (int i = 0; i< n ; i++){
        cin >> a[i];
    }
    for (int i = 0; i< m ; i++){
        cin >> b[i];
    }

    mergeArrays(a, n, b, m, result);

    cout << "Mang sau khi tron: ";
    for (int i = 0; i < n + m; i++) {
        cout << result[i] << " ";
    }
    
    delete []a;
    delete []b;
    delete []result;
    return 0;
}
