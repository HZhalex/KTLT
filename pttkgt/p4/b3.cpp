#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int totalNeed = B * C;

    int sundays = B / 7;
    int buyDays = B - sundays;

    if (A * buyDays < totalNeed) {
        cout << -1;
        return 0;
    }

    int days = totalNeed / A;
    if (totalNeed % A != 0) days++;

    cout << days;

    return 0;
}