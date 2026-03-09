#include <iostream>
using namespace std;
int n, a[100];

bool f(int a[], int l, int r)
{
    if (l >= r) return true;  

    if (a[l] != a[r]) return false;  

    return f(a, l+1, r-1); 
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << (f(a,0,n-1) ? "d.x" : "ko");
}