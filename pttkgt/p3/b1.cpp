#include <iostream>
using namespace std;

int LIS(int a[], int n, int result[]) {
    int dp[100], trace[100];

    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        trace[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
                trace[i] = j;
            }
        }
    }

    int maxLen = dp[0], pos = 0;
    for (int i = 1; i < n; i++) {
        if (dp[i] > maxLen) {
            maxLen = dp[i];
            pos = i;
        }
    }

    int k = 0;
    while (pos != -1) {
        result[k++] = a[pos];
        pos = trace[pos];
    }

    for (int i = 0; i < k / 2; i++) {
        int t = result[i];
        result[i] = result[k - 1 - i];
        result[k - 1 - i] = t;
    }

    return maxLen;
}

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int res[100];
    int len = LIS(a, n, res);

    cout << len << endl;
    for (int i = 0; i < len; i++)
        cout << res[i] << " ";

    return 0;
}