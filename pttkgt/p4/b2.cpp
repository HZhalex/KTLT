#include <iostream>
using namespace std;

void sortArray(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sortArray(a, n);

    int num1 = 0, num2 = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            num1 = num1 * 10 + a[i];
        else
            num2 = num2 * 10 + a[i];
    }

    cout << num1 + num2;

    return 0;
}