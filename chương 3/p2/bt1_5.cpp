#include <iostream>
using namespace std;
void bubbleSortAsc(int arr[], int start, int end) {
    for (int i = start; i < end - 1; i++) {
        for (int j = start; j < end - 1 - (i - start); j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void bubbleSortDesc(int arr[], int start, int end) {
    for (int i = start; i < end - 1; i++) {
        for (int j = start; j < end - 1 - (i - start); j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {7, 3, 9, 5, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mid = n / 2;
    bubbleSortAsc(arr, 0, mid);
    if (n % 2 == 0) {
        bubbleSortDesc(arr, mid, n);
    } else {
        bubbleSortDesc(arr, mid + 1, n);
    }
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    return 0;
}
