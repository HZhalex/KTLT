#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int A[100][100];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0)
                A[i][j] = 1;
            else
                A[i][j] = A[i - 1][j] + j * A[i - 1][j - 1];
        }
    }

    cout << A[n][k];

    return 0;
}