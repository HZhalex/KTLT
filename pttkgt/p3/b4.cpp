#include <iostream>
using namespace std;

string LCS(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();

    int dp[100][100];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
            dp[i][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = (dp[i - 1][j] > dp[i][j - 1]) ? dp[i - 1][j] : dp[i][j - 1];
        }
    }

    int i = n, j = m;
    string res = "";

    while (i > 0 && j > 0) {
        if (s1[i - 1] == s2[j - 1]) {
            res = s1[i - 1] + res;
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    return res;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    string res = LCS(s1, s2);

    cout << res.length() << endl;
    cout << res;

    return 0;
}