#include <bits/stdc++.h>
using namespace std;
void reverse(int x){
    int n;
    while (x != 0){
        n = x % 10;
        cout << n;
        x = x / 10;
    }
}
int main()
{
	int x ;
    cout << "nhap vao so nguyen x:";
    cin >> x;
    reverse(x);
	return 0;
}