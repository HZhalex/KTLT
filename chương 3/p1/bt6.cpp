#include <iostream>
using namespace std;
int fibo(int n){
    if (n == 1 || n == 2) return 1;
    else return fibo(n-1) + fibo(n-2);
}
int main() {
    int m,n,s;
    cout << "Nhap m,n (m >n):";
    cin >> m >> n;
    for (int i =1  ; i <= m; i++ ){
        if (fibo(i) % 2 == 0) s += fibo(i);
    }
    for (int j =1  ; j <= n; j++ ){
        if (fibo(j) % 2 == 0) s += fibo(j);
    }
    cout << s;
    return 0;
}