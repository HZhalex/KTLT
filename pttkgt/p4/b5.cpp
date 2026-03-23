#include <iostream>
using namespace std;

void greedy(int coins[], int n, int amount) {
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        int take = amount / coins[i];
        count += take;
        amount -= take * coins[i];
    }
    if (amount != 0) cout << -1;
    else cout << count;
}

int dpChange(int coins[], int n, int amount) {
    int dp[1000];

    for (int i = 0; i <= amount; i++)
        dp[i] = 1000000;

    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] + 1 < dp[i]) {
                dp[i] = dp[i - coins[j]] + 1;
            }
        }
    }

    if (dp[amount] == 1000000) return -1;
    return dp[amount];
}

int main() {
    int n;
    cin >> n;

    int coins[100];
    for (int i = 0; i < n; i++)
        cin >> coins[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (coins[i] > coins[j]) {
                int t = coins[i];
                coins[i] = coins[j];
                coins[j] = t;
            }

    int amount;
    cin >> amount;

    greedy(coins, n, amount);
    cout << endl;
    cout << dpChange(coins, n, amount);

    return 0;
}