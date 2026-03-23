#include <iostream>
using namespace std;

int maxSubarray(int a[], int n) {
    int dp[100];
    dp[0] = a[0];

    int maxSum = dp[0];

    for (int i = 1; i < n; i++) {
        if (dp[i - 1] + a[i] > a[i])
            dp[i] = dp[i - 1] + a[i];
        else
            dp[i] = a[i];

        if (dp[i] > maxSum)
            maxSum = dp[i];
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << maxSubarray(a, n);

    return 0;
}