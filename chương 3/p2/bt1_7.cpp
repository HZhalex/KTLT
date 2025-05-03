#include <iostream>
using namespace std;

// Hàm chèn x vào mảng giảm dần
void chenSo(int arr[], int& n, int x) {
    int pos = n;  // Mặc định chèn vào cuối nếu x nhỏ hơn tất cả

    // Tìm vị trí chèn (x >= arr[i] vì mảng giảm dần)
    for (int i = 0; i < n; ++i) {
        if (x >= arr[i]) {
            pos = i;
            break;
        }
    }

    // Dời các phần tử sang phải
    for (int i = n; i > pos; --i) {
        arr[i] = arr[i - 1];
    }

    // Chèn x vào đúng vị trí
    arr[pos] = x;
    n++;  // tăng kích thước mảng
}

int main() {
    int arr[100] = {20, 17, 15, 10, 5}; // mảng giảm dần
    int n = 5;                          // số phần tử hiện tại
    int x;

    cout << "Nhap x: ";
    cin >> x;

    chenSo(arr, n, x);

    cout << "Mang sau khi chen: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}
