#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {0};
    int n = s.length();

    for (int i = 0; i < n; i++)
        freq[s[i] - 'A']++;

    int maxFreq = 0;
    for (int i = 0; i < 26; i++)
        if (freq[i] > maxFreq)
            maxFreq = freq[i];

    if (maxFreq <= (n + 1) / 2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}