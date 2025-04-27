#include <bits/stdc++.h>
using namespace std;
void reverse(int x){
    int n = 0;
    while (x != 0){
        x = x / 10;
        n = n + 1;
    }
    cout<< n;
}
int main()
{
	int x ;
    cout << "nhap vao so nguyen x:";
    cin >> x;
    reverse(x);
	return 0;
}
