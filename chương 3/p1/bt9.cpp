#include <iostream>
using namespace std;
double hoocne(double hs[],int n, int x){
    double kq = hs[0];
    for (int i = 1;i <= n; i ++){
        kq = kq*x + hs[i];
    }
    return kq;}
int main(){
    int x = 2;
    int n =1;
    double hs[2]= {1,2};
    cout << hoocne(hs,n,x);
    return 0;
}
