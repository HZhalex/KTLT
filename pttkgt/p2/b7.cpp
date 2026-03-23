#include <iostream>
using namespace std;

int countEqualK(int a[], int left, int right, int k) {
    if (left == right) {
        if (a[left] == k) return 1;
        return 0;
    }

    int mid = (left + right) / 2;

    int leftCount = countEqualK(a, left, mid, k);
    int rightCount = countEqualK(a, mid + 1, right, k);

    return leftCount + rightCount;
}

int countBetween(int a[], int left, int right, int x, int y) {
    if (left == right) {
        if (a[left] > x && a[left] < y) return 1;
        return 0;
    }

    int mid = (left + right) / 2;

    int leftCount = countBetween(a, left, mid, x, y);
    int rightCount = countBetween(a, mid + 1, right, x, y);

    return leftCount + rightCount;
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[100];

    cout << "Nhap mang:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cout << "Nhap k: ";
    cin >> k;

    int x, y;
    cout << "Nhap x va y (x < y): ";
    cin >> x >> y;

    int result1 = countEqualK(a, 0, n - 1, k);
    int result2 = countBetween(a, 0, n - 1, x, y);

    cout << "So phan tu bang k: " << result1 << endl;
    cout << "So phan tu trong (x, y): " << result2 << endl;

    return 0;
}