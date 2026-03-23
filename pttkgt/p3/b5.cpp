#include <iostream>
using namespace std;

int max3(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

string LCS3(string A, string B, string C) {
    int n = A.length();
    int m = B.length();
    int p = C.length();

    int dp[50][50][50];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            for (int k = 0; k <= p; k++)
                dp[i][j][k] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k = 1; k <= p; k++) {
                if (A[i - 1] == B[j - 1] && A[i - 1] == C[k - 1])
                    dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                else
                    dp[i][j][k] = max3(dp[i - 1][j][k],
                                       dp[i][j - 1][k],
                                       dp[i][j][k - 1]);
            }
        }
    }

    int i = n, j = m, k = p;
    string res = "";

    while (i > 0 && j > 0 && k > 0) {
        if (A[i - 1] == B[j - 1] && A[i - 1] == C[k - 1]) {
            res = A[i - 1] + res;
            i--; j--; k--;
        } else {
            if (dp[i - 1][j][k] >= dp[i][j - 1][k] &&
                dp[i - 1][j][k] >= dp[i][j][k - 1])
                i--;
            else if (dp[i][j - 1][k] >= dp[i - 1][j][k] &&
                     dp[i][j - 1][k] >= dp[i][j][k - 1])
                j--;
            else
                k--;
        }
    }

    return res;
}

int main() {
    string A, B, C;
    cin >> A >> B >> C;

    string res = LCS3(A, B, C);

    cout << res.length() << endl;
    cout << res;

    return 0;
}