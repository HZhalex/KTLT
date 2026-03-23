#include <iostream>
using namespace std;

const int MAX = 1000;

int greedyTSP(int a[][100], int n) {
    bool visited[100] = {false};
    int cur = 0;
    visited[0] = true;
    int cost = 0;

    for (int i = 1; i < n; i++) {
        int next = -1;
        int minCost = MAX;

        for (int j = 0; j < n; j++) {
            if (!visited[j] && a[cur][j] < minCost) {
                minCost = a[cur][j];
                next = j;
            }
        }

        visited[next] = true;
        cost += minCost;
        cur = next;
    }

    cost += a[cur][0];
    return cost;
}

int n;
int a[100][100];
bool visited[100];
int best = MAX;

void backtrack(int cur, int count, int cost) {
    if (cost >= best) return;

    if (count == n) {
        best = cost + a[cur][0];
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            backtrack(i, count + 1, cost + a[cur][i]);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << greedyTSP(a, n) << endl;

    for (int i = 0; i < n; i++) visited[i] = false;
    visited[0] = true;

    backtrack(0, 1, 0);

    cout << best;

    return 0;
}