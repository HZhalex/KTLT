#include <iostream>
using namespace std;

// Hàm kiểm tra mảng có tăng dần không
bool laTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Thử đổi sang {1, 3, 2, 4} để test sai
    int n = sizeof(arr) / sizeof(arr[0]);

    if (laTangDan(arr, n))
        cout << "Mang tang dan." << endl;
    else
        cout << "Mang khong tang dan." << endl;

    return 0;
}
