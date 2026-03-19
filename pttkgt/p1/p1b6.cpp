#include <iostream>
#include <algorithm>
using namespace std;

int n,k,a[100],x[100];

void f(int i,int s){
    for(int j=s;j<=n;j++){
        x[i]=a[j];
        if(i==k){
            for(int t=1;t<=k;t++) cout<<x[t]<<" ";
            cout<<"\n";
        }else f(i+1,j+1);
    }
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1, a+n+1);

    f(1,1);
}