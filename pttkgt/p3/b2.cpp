#include <iostream>
using namespace std;

int maxSum(int a[], int n) {
    if (n == 0) return 0;
    if (n == 1) return a[0];

    int dp[100];
    dp[0] = a[0];
    dp[1] = (a[0] > a[1]) ? a[0] : a[1];

    for (int i = 2; i < n; i++) {
        int take = dp[i - 2] + a[i];
        int skip = dp[i - 1];
        dp[i] = (take > skip) ? take : skip;
    }

    return dp[n - 1];
}

int main() {
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << maxSum(a, n);

    return 0;
}