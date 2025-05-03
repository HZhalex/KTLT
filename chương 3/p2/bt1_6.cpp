#include <iostream>
using namespace std;

// Hàm sắp xếp mảng giảm dần bằng selection sort
void selectionSortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int maxIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }
        // Hoán đổi arr[i] và arr[maxIdx]
        int temp = arr[i];
        arr[i] = arr[maxIdx];
        arr[maxIdx] = temp;
    }
}

int main() {
    int arr[] = {4, 9, 2, 7, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSortDesc(arr, n);

    cout << "Mang sau khi sap xep giam dan: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}
