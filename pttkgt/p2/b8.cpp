#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int partition(int a[], int left, int right) {
    int pivot = a[right];
    int i = left;

    for (int j = left; j < right; j++) {
        if (a[j] < pivot) {
            swap(a[i], a[j]);
            i++;
        }
    }

    swap(a[i], a[right]);
    return i;
}

int quickSelect(int a[], int left, int right, int k) {
    if (left == right)
        return a[left];

    int p = partition(a, left, right);

    if (p == k)
        return a[p];
    else if (p > k)
        return quickSelect(a, left, p - 1, k);
    else
        return quickSelect(a, p + 1, right, k);
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[100];
    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k;
    cout << "Nhap k: ";
    cin >> k;

    int index = n - k; 

    int result = quickSelect(a, 0, n - 1, index);

    cout << "Phan tu lon thu " << k << " la: " << result << endl;

    return 0;
}