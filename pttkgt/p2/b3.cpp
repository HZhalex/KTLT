#include <iostream>
using namespace std;
int n, a[1000];
int f(int l , int r){
    if( l == r) return a[l];
    int m = (l + r)/2;
    return min(f(l,m),f(m+1,r));
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int a = f(1, n);
    cout << "kq: " << a;
    return 0;
}