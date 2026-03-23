#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int findFirstPositive(int a[], int left, int right) {
    if (left == right) {
        if (a[left] > 0) return left;
        return -1;
    }

    int mid = (left + right) / 2;

    int leftResult = findFirstPositive(a, left, mid);
    if (leftResult != -1) return leftResult;

    return findFirstPositive(a, mid + 1, right);
}

int findLastPrime(int a[], int left, int right) {
    if (left == right) {
        if (isPrime(a[left])) return left;
        return -1;
    }

    int mid = (left + right) / 2;

    int rightResult = findLastPrime(a, mid + 1, right);
    if (rightResult != -1) return rightResult;

    return findLastPrime(a, left, mid);
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;

    int a[100];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100 - 50;
    }

    cout << "Mang: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    int pos1 = findFirstPositive(a, 0, n - 1);
    int pos2 = findLastPrime(a, 0, n - 1);

    if (pos1 != -1)
        cout << "So duong dau tien: " << a[pos1] 
             << " tai vi tri " << pos1 << endl;
    else
        cout << "Khong co so duong\n";

    if (pos2 != -1)
        cout << "So nguyen to cuoi cung: " << a[pos2] 
             << " tai vi tri " << pos2 << endl;
    else
        cout << "Khong co so nguyen to\n";

    return 0;
}