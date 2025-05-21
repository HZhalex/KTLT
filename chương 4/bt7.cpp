#include <iostream>
using namespace std;

bool contains(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    
    cout << "Nhap kich thuoc mang thu nhat: ";
    cin >> n;
    int *arr1 = new int [n]; 
    
    cout << "Nhap cac phan tu mang thu nhat: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    
    cout << "Nhap kich thuoc mang thu hai: ";
    cin >> m;
    int *arr2 =  new int [m]; 
    
    cout << "Nhap cac phan tu mang thu hai: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    
    int *result = new int [100]; 
    int resultSize = 0;

    for (int i = 0; i < n; i++) {
        if (!contains(arr2, m, arr1[i])) {
            result[resultSize] = arr1[i];
            resultSize++;
        }
    }
    
    for (int i = 0; i < m; i++) {
        if (!contains(arr1, n, arr2[i])) {
            result[resultSize] = arr2[i];
            resultSize++;
        }
    }
    
    int *mangKetQua = new int [resultSize]; 
    int soLuongKetQua = 0; 
    for (int i = 0; i < resultSize; i++) {
        bool daTonTai = false;
        
        for (int j = 0; j < soLuongKetQua; j++) {
            if (result[i] == mangKetQua[j]) {
                daTonTai = true;
                break;
            }
        }
        
        if (!daTonTai) {
            mangKetQua[soLuongKetQua] = result[i];
            soLuongKetQua++;
        }
    }

    cout << "Mang ket qua sau khi tron khong co phan tu chung: ";
    for (int i = 0; i < soLuongKetQua; i++) {
        cout << mangKetQua[i] << " ";
    }
    cout << endl;
    delete []mangKetQua;
    delete []arr1;
    delete []arr2;
    delete []result;
    return 0;
}