#include <iostream>
using namespace std;
void swap_int(int &a, int &b) {
    int t = a; a = b; b = t;
}
int main() {
    int m,n,A[10][10],hung[10];
    int soam = 0;
    int max = 0 ;
    cout << "nhap m va n:";
    cin >> m >> n;
    for (int i = 0 ; i < m; i++)
        for ( int j = 0; j < n;j++){
            cout << "[" << i <<"]"<<"["<<j<<"]:"<<endl;
            cin >> A[i][j];}
    for (int i = 0 ; i < m; i++)
        for ( int j = 0; j < n;j++)
            cout << "[" << i <<"]"<<"["<<j<<"]:"<<A[i][j]<<endl;
    
    for (int i = 0 ; i < m; i++)
        for ( int j = 0; j < n;j++)
            if (A[i][j]<0) soam ++ ;
    cout << soam << endl;
    for (int i = 0 ; i < m; i++)
        for ( int j = 0; j < n;j++)
            if (max <= A[i][j]) max = A[i][j];
    cout << max << endl;
    for (int i = 0 ; i < m; i++){
        int tong = 0;
        for ( int j = 0; j < n;j++)
            tong += A[i][j];
        hung[i] = tong;
    }
    max = 0;
    for (int i = 0; i < n;i++){
        if (max <= hung[i]) max = hung[i];
    }
    for (int i = 0; i < n;i++){
        if (max = hung[i]) cout << "Dong "<<i<<endl; break;
    }
    
    for (int i = 0; i < m; i++) {
        for (int x = 0; x < n - 1; x++) {
            int min_idx = x;
            for (int y = x + 1; y < n; y++) {
                if (A[i][y] < A[i][min_idx])
                    min_idx = y;
            }
            if (min_idx != x)
                swap_int(A[i][x], A[i][min_idx]);
        }
    }
    for ( int i = 0 ; i < m;i++)
        for ( int j = 0; j < n-1 ; j++){
            int h = j;
            for (int x = j +1 ; x < n; x++){
                if ( A[i][x] < A[i][h]) h = x;
            if ( h != j) swap_int(A[i][j] , A[i][h]);
            }
        }
    for (int i = 0 ; i < m; i++)
        for ( int j = 0; j < n;j++)
            cout << "[" << i <<"]"<<"["<<j<<"]:"<<A[i][j]<<endl;
    return 0;
}