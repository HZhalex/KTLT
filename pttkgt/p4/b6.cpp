#include <iostream>
using namespace std;

struct Item {
    int w, v;
    double ratio;
};

void sortItems(Item a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].ratio < a[j].ratio) {
                Item t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

double greedy(Item a[], int n, int W) {
    sortItems(a, n);
    double total = 0;
    for (int i = 0; i < n; i++) {
        if (W >= a[i].w) {
            W -= a[i].w;
            total += a[i].v;
        } else {
            total += a[i].ratio * W;
            break;
        }
    }
    return total;
}

int knapDP(int w[], int v[], int n, int W) {
    int dp[100][1000];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= W; j++)
            dp[i][j] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i - 1]) {
                int val = dp[i - 1][j - w[i - 1]] + v[i - 1];
                if (val > dp[i][j]) dp[i][j] = val;
            }
        }
    }
    return dp[n][W];
}

int best = 0;

int bound(int i, int curW, int curV, int w[], int v[], int n, int W) {
    int b = curV;
    int weight = curW;
    for (int j = i; j < n; j++) {
        if (weight + w[j] <= W) {
            weight += w[j];
            b += v[j];
        } else {
            b += (W - weight) * v[j] / w[j];
            break;
        }
    }
    return b;
}

void backtrack(int i, int curW, int curV, int w[], int v[], int n, int W) {
    if (i == n) {
        if (curV > best) best = curV;
        return;
    }

    if (bound(i, curW, curV, w, v, n, W) <= best) return;

    if (curW + w[i] <= W)
        backtrack(i + 1, curW + w[i], curV + v[i], w, v, n, W);

    backtrack(i + 1, curW, curV, w, v, n, W);
}

int main() {
    int n;
    cin >> n;

    Item a[100];
    int w[100], v[100];

    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
        a[i].w = w[i];
        a[i].v = v[i];
        a[i].ratio = (double)v[i] / w[i];
    }

    int W;
    cin >> W;

    cout << greedy(a, n, W) << endl;
    cout << knapDP(w, v, n, W) << endl;

    best = 0;
    backtrack(0, 0, 0, w, v, n, W);
    cout << best;

    return 0;
}