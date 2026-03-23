#include <iostream>
using namespace std;

int minDiff(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    int half = sum / 2;

    int dp[100][1000];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= half; j++)
            dp[i][j] = 0;

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= half; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= a[i - 1])
                dp[i][j] = dp[i][j] || dp[i - 1][j - a[i - 1]];
        }
    }

    int best = 0;
    for (int j = half; j >= 0; j--) {
        if (dp[n][j]) {
            best = j;
            break;
        }
    }

    return sum - 2 * best;
}

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << minDiff(a, n);

    return 0;
}