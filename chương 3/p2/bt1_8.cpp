#include <iostream>
using namespace std;

// Hàm kiểm tra mảng đối xứng
bool laDoiXung(int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - 1 - i])
            return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (laDoiXung(arr, n))
        cout << "Mang doi xung." << endl;
    else
        cout << "Mang khong doi xung." << endl;

    return 0;
}
